/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:54:27 by uns-35            #+#    #+#             */
/*   Updated: 2024/01/26 16:59:26 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB( std::string n ) : name(n), HumanBweap(NULL) {
}
HumanB::~HumanB() {
}

void HumanB::setWeapon( Weapon &weap ) {
    this->HumanBweap = &weap;
}


void HumanB::attack() {
    if (HumanBweap == NULL)
        std::cout << "NO weapon to attack with" << std::endl;
    else
        std::cout << name << " attack with their " << HumanBweap->getType() << std::endl;
}