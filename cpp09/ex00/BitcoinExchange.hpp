/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:22:11 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/07 17:50:02 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HP
#define BITCOINEXCHANGE_HP

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cctype>

typedef struct date {
    unsigned int y;
    unsigned int m;
    unsigned int d;

    bool operator<( const date& obj ) const;
} date;

std::ostream& operator<<(std::ostream& o, const date& obj);

template <typename T>
T strToType( std::string const& str, T type ) {
    std::stringstream ss( str );
    T number;
    ss >> number;
    type = number;
    ( void )type;
    return number;
}

class BitcoinExchange {
    private:
        std::map<date, float> data;

    public:
        BitcoinExchange( void );
        BitcoinExchange( BitcoinExchange const& obj );
        BitcoinExchange& operator=( BitcoinExchange const& obj );
        ~BitcoinExchange( void );

        std::map<date, float> getData( void ) const;

        float get_value(date date, std::string amount);
        void exec( std::string infile );
};

bool checkInFile( std::string input );
date pairing( std::string line );
float getPairValue( std::string line );
bool isFloat( std::string str );
bool checkLine( std::string line );

#endif