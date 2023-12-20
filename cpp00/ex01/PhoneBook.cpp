/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:06:27 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/20 18:36:31 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::add() {
    std::string Info[5];
    int i = 0;
    while( i < 5 ) {
        std::getline(std::cin, Info[i]);
        if ( std::cin.eof() )
            exit(0);
        i++;
    }
    contacts[nb % 8].AddInfo(Info);
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
    if ( std::cin.eof() )
        exit(0);
    i = -1;
    while ( ++i < nb ) {
        if (std::stoi(str) - i == 0)
            contacts[std::stoi(str)].PrintIndex();
    }
}

PhoneBook::PhoneBook()
{
    nb = 0;
}

PhoneBook::~PhoneBook()
{
}