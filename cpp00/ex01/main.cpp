/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:08:21 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/21 11:21:00 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int main() {
    PhoneBook PhoneContacts;
    std::string buff;
    while (1)
    {
        std::cout << "Run a Command: ADD, SEARCH or EXIT\n$> ";
        std::getline(std::cin, buff);
        if ( std::cin.eof() ) {
            std::cout << "PhoneBook Exit..\n";
            exit(0);
        }
        if (buff == "ADD")
            PhoneContacts.add();
        else if (buff == "EXIT") {
            std::cout << "PhoneBook Exit..\n";
            std::exit(0);
        }
        else if (buff == "SEARCH") {
            PhoneContacts.search();
        }
    }
}