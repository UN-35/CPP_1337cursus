/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:08:21 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/20 18:36:22 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int main() {
    PhoneBook PhoneContacts;
    std::string buff;
    while (1)
    {
        std::getline(std::cin, buff);
        if ( std::cin.eof() )
            exit(0);
        if (buff == "ADD")
            PhoneContacts.add();
        else if (buff == "EXIT")
            std::exit(0);
        else if (buff == "SEARCH")
            PhoneContacts.search();

    }
}