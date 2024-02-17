/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:35:15 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/16 17:35:55 by uns-35           ###   ########.fr       */
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
ClapTrap::ClapTrap( ClapTrap const& C ) {
    *this = C;
}
// Copy assignment
ClapTrap& ClapTrap::operator=( ClapTrap const& C ) {
    if (this != &C)
        *this = C;
    return *this;
}
ClapTrap::~ClapTrap() {
}
void ClapTrap::attack( const std::string& target ) {
    if ( EnergyPoints > 0 && HitPoints > 0 ) {
        std::cout << this->Name << " attack " << target << std::endl;
        this->EnergyPoints--;
    }
}
void ClapTrap::takeDamage ( unsigned int amount ) {
    if ( EnergyPoints > 0 && HitPoints > 0 ) {
        this->HitPoints -= amount;
        std::cout << this->HitPoints << std::endl;
    }
}
void ClapTrap::beRepaired ( unsigned int amount ) {
    if ( HitPoints > 0 && EnergyPoints > 0 ) {
        this->AttackDamage += amount;
        this->EnergyPoints--;
        std::cout << this->AttackDamage << std::endl;
        std::cout << this->EnergyPoints << std::endl;
    }
}


void ClapTrap::setName( std::string name ) {
    this->Name = name;
}