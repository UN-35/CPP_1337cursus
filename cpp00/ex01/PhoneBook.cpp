/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:06:27 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/21 14:42:39 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int    PhoneNumPars(std::string nbr) {
    int i = -1;
    while ( nbr[++i] ) {
        if (nbr[0] != '+' && !std::isdigit(nbr[i])) {
            std::cout << "ERROR : Invalide Phone number\n";
            return 1;
        }
    }
    return 0;
}

void    PhoneBook::add() {
    std::string Info[5];
    int i = 0;
    while( i < 5 ) {
        if (i == 0)
            std::cout << "Enter the FirstName:\n$ add> ";
        else if (i == 1)
            std::cout << "Enter the LastName:\n$ add> ";
        else if (i == 2)
            std::cout << "Enter the NickName:\n$ add> ";
        else if (i == 3)
            std::cout << "Enter the PhoneNumber:\n$ add> ";
        else if (i == 4)
            std::cout << "Enter the DarckestSecret:\n$ add> ";
        std::getline( std::cin, Info[i] );
        if ( i == 3 ) {
            if (PhoneNumPars(Info[i])) {
                std::cout << "ADD Exit..\n";
                return ;
            }
        }
        else if ( std::cin.eof() ) {
            std::cout << "PhoneBook Exit..\n";
            exit(1);
        }
        i++;
    }
    contacts[nb % 8].AddInfo( Info );
    nb++;
}

void    PhoneBook::search()
{
    int i;
    std::string str;
    if (nb == 0) {
        std::cout << "ERROR : There is no Contact to search for!\n\n";
        return ;
    }
    i = -1;
    while ( ++i < nb ) {
        contacts[i].printer(i);
    }
    std::cout << "\nWhich one on the list you want to know more about?\n$> Search> ";
    std::getline(std::cin, str);
    if ( std::cin.eof()) {
        std::cout << "PhoneBook Exit..\n";
        std::exit(1) ;
    }
    if ( str.length() > 2) {
        std::cout << "\nERROR : Undefined Contact\n";
        return ;
    }
    i = -1;
    while ( ++i < nb ) {
        if (std::stoi(str) - i == 0) {
            contacts[std::stoi(str)].PrintIndex();
        }
    }
    if (i == nb) {
        std::cout << "\nERROR : Undefined contact\n";
        return ;
    }
}

PhoneBook::PhoneBook()
{
    nb = 0;
}

PhoneBook::~PhoneBook()
{
}