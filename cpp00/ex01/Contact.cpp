/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:05:34 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/20 14:15:45 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

void Contact::AddInfo(std::string Info[5]) {
    FirstName = Info[0];
    LastName = Info[1];
    NickName = Info[2];
    PhoneNumber = Info[3];
    DarkestSecret = Info[4];
}
void    PrintTen(std::string str)
{
    int i = -1;
    if (str.length() <= 10)
        std::cout << std::setw(10) << str;
    else
    {
        while (str[++i] && i < 9)
            std::cout << std::setw(10) << str[i];
        std::cout << ".";
    }
}

void    Contact::printer(int i)
{
    std::cout << std::setw(10) << i;
    std::cout << "|";
    PrintTen(FirstName);
    std::cout << "|";
    PrintTen(LastName);
    std::cout << "|";
    PrintTen(NickName);
    std::cout << std::endl;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}