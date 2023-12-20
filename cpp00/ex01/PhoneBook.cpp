/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:06:27 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/20 22:35:12 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::add() {
    std::string Info[5];
    int i = 0;
    while( i < 5 ) {
        if (i == 0)
            std::cout << "Enter the FirstName:\n-->";
        else if (i == 1)
            std::cout << "Enter the LastName:\n-->";
        else if (i == 2)
            std::cout << "Enter the NickName:\n-->";
        else if (i == 3)
            std::cout << "Enter the PhoneNumber:\n-->";
        else if (i == 4)
            std::cout << "Enter the DarckestSecret:\n-->";
        std::getline( std::cin, Info[i] );
        if ( std::cin.eof() )
            exit(0);
        i++;
    }
    contacts[nb % 8].AddInfo( Info );
    nb++;
}

void    PhoneBook::search()
{
    int i = 0;
    std::string str;
    while ( i < nb ) {
        contacts[i].printer(i);
        i++;
    }
    std::getline(std::cin, str);
    if ( std::cin.eof() || str == "EXIT" )
        exit(0);
    i = -1;
    while ( ++i < nb ) {
        if (std::stoi(str) - i == 0) {
            contacts[std::stoi(str)].PrintIndex();
        }
    }
}

PhoneBook::PhoneBook()
{
    nb = 0;
}

PhoneBook::~PhoneBook()
{
}