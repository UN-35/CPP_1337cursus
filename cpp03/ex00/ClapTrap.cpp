/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:35:15 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/16 11:36:20 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


//ClapTrap constructor
ClapTrap::ClapTrap( std::string name ) {
    this->Name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}
// Copy Constructor
ClapTrap::ClapTrap( ClapTrap& ) {
}
// Copy assignment
ClapTrap& ClapTrap::operator=( ClapTrap const& ) {
    return *this;
}

ClapTrap::~ClapTrap() {
}

void ClapTrap::attack( const std::string& target ) {
    std::cout << this->Name << " attack " << target << std::endl;
}
void ClapTrap::takeDamage ( unsigned int amount ) {
    this->HitPoints -= amount;
    std::cout << this->HitPoints << std::endl;
}
void ClapTrap::beRepaired ( unsigned int amount ) {
    if (this->EnergyPoints <= 0)
        return ;
    this->AttackDamage += amount;
    this->EnergyPoints -= amount;
    std::cout << this->AttackDamage << std::endl;
    std::cout << this->EnergyPoints << std::endl;
}