/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:05:34 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/20 22:39:26 by yoelansa         ###   ########.fr       */
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
    if (str.length() <= 10)
        std::cout << str;
    else
    {
        int i = -1;
        while (str[++i] && i < 9)
            std::cout << str[i];
        std::cout << ".";
    }
}

void    Contact::PrintIndex()
{
    std::cout << "\nFirstName: " << FirstName << std::endl;
    std::cout << "LastName: " << LastName << std::endl;
    std::cout << "NickName: " << NickName << std::endl;
    std::cout << "PhoneNumber: " << PhoneNumber << std::endl;
    std::cout << "DarkestSecret: " << DarkestSecret << std::endl << std::endl;
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
    std::cout << "\n\nWhich one on the list you want to know more about?\n==> ";
}

Contact::Contact()
{
}

Contact::~Contact()
{
}