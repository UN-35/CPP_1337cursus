/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:08:21 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/20 14:04:56 by yoelansa         ###   ########.fr       */
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
        if (buff == "ADD")
            PhoneContacts.add();
        else if (buff == "EXIT")
            std::exit(0);
        else if (buff == "SEARCH")
            PhoneContacts.search();

    }
}