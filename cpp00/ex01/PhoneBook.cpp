/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:06:27 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/20 14:04:45 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::add() {
    std::string Info[5];
    int i = 0;
    while(i < 5)
    {
        std::cout << "enter\n";
        std::getline(std::cin, Info[i]);
        i++;
    }
    contacts[nb % 8].AddInfo(Info);
    nb++;
}

void    PhoneBook::search()
{
    int i = 0;
    while (i < nb)
    {
        contacts[i].printer(i);
        i++;
    }
}

PhoneBook::PhoneBook()
{
    nb = 0;
}

PhoneBook::~PhoneBook()
{
}