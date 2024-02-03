/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:30:18 by uns-35            #+#    #+#             */
/*   Updated: 2024/02/03 22:03:08 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    std::string level;
    Harl harl;

    while( 1 ) {
        if (std::cin.eof())
            return 0;
        std::cout << "Level: ";
        std::getline(std::cin, level);
        harl.complain( level );
    }
}