/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:21:59 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/07 00:38:54 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"




// .............. Date struct ..............
bool date::operator<(const  date& obj) const {
	return y * 365 + m * 30 + d < obj.y
		* 365 + obj.m * 30 + obj.d;
}

std::ostream& operator<<(std::ostream& os, const date& obj) {
	os << obj.y << "-"
		<< std::setfill('0') << std::setw(2) << obj.m << "-"
		<< std::setfill('0') << std::setw(2) << obj.d;
	return os;
}

// .............. BitcoinExchange ..............
BitcoinExchange::BitcoinExchange(void) {
	std::ifstream	_datafile("data.csv");
	std::string		_buffer;

	if (!_datafile.is_open()) {
		std::cerr << "Error: database not found" << std::endl;
		exit(1);
	}
	std::getline(_datafile, _buffer);
	while (std::getline(_datafile, _buffer)) {
		std::pair<date, float> pair(pairing(_buffer), getPairValue(_buffer));
		data.insert(pair);
	}
	_datafile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {
	*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {
	if (this != &obj) {
		this->data = obj.getData();
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange(void) {
}

std::map<date, float> BitcoinExchange::getData(void) const {
	return this->data;
}

void BitcoinExchange::exec(std::string input) {
	std::ifstream _infile;
	_infile.open(input.c_str());
	std::string _buffer;

	if (!checkInFile(input))
		return ;
	std::getline(_infile, _buffer);
	if (_buffer.find("date | value") != std::string::npos)
		std::getline(_infile, _buffer);
	while (true) {
		if (checkLine(_buffer)) {
			date _date = pairing(_buffer);
			std::string _amount = _buffer.substr(13);
			float _result = get_value(_date, _amount);				
			std::cout << _date << " => " << _amount << " = " << _result << std::endl;
		}
		if (!std::getline(_infile, _buffer))
			break ;
	}
}

float BitcoinExchange::get_value(date _date, std::string _amount) {
	float amount = -1;
	amount = strToType(_amount, amount);
	std::map<date, float>::iterator it;

	if (data.find(_date) == data.end())
	{
		it = data.lower_bound(_date);
		if (it != data.begin())
			it--;
	} else {
		it = data.find(_date);
	}
	return (it)->second * amount;
}

// .............. Functions ..............

date pairing(std::string line) {
	date _date;
	int n = -1;
	_date.y = strToType(line.substr(0, 4), n);
	_date.m = strToType(line.substr(5, 2), n);
	_date.d = strToType(line.substr(8, 2), n);
	return _date;
}

float getPairValue(std::string line) {
	float n = -1;
	return strToType(line.substr(line.find(",") + 1), n);
}

bool isDate(std::string str) {
	int i = 0;
	for (; i < (int)str.size(); i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true; 
}

bool isFloat(std::string str) {
	int dot = 0, i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	for (; i < (int)str.size() ;i++) {
		if (str[i] == '.')
			dot++;
		if ((!std::isdigit(str[i]) && str[i] != '.') || dot > 1 )
            return false;
	}
	if (str[--i] == '.')
		return false;
	return true;
}

bool checkInFile(std::string input) {
	std::ifstream _infile;
	_infile.open(input.c_str());
	std::string _buffer;

	if (!_infile.is_open()) {
		std::cerr << "Error: could not open file" << std::endl;
		return false;
	}
	std::getline(_infile, _buffer);
	if (_buffer.empty()) {
		std::cerr << "Error: empty file" << std::endl;
		return false;
	}
	if (_buffer == "date | value") {
		if (!std::getline(_infile, _buffer)) {
			std::cerr << "Error: file contain header only" << std::endl;
			return false;
		}
	}
	else {
		std::cerr << "Error: invalid file header" << std::endl;
		return false;
	}
	_infile.close();
	return true;
}

bool checkLine(std::string line) {
	float n = -1;
	if (line.length() < 14 
		|| !isDate(line.substr(0, 4)) || line[4] != '-'
		|| !isDate(line.substr(5, 2)) || line[7] != '-'
		|| !isDate(line.substr(8, 2)) || line.substr(10, 3) != " | "
		|| !isFloat(line.substr(13))) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return false;
	}
	date _date = pairing(line);
	if (_date.d > 31 || _date.m > 12 || _date.y > 2022
		|| (_date.m == 2 && _date.d > 28)) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return false;
	}
	n = strToType(line.substr(13), n);
	if (n < 0) {
		std::cerr << "Error: not a possitive number." << std::endl;
		return false;
	} else if (n > 1000) {
		std::cerr << "Error: too large a number." << std::endl; 
		return false;
	}
	return true;
}
