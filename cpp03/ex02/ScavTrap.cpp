/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:03:19 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/18 17:40:18 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"



ScavTrap::ScavTrap( void ) : ClapTrap() {
    std::cout << "This is ScavTrap default constructor!!" << std::endl;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
    std::cout << "This is ScavTrap constructor!!" << std::endl;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}
ScavTrap::~ScavTrap() {
    std::cout << "This is ScavTrap destructor!!" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const& S ) : ClapTrap( S ) {
    std::cout << "This is ScavTrap copy constructor!!" << std::endl;
    *this = S;
}
ScavTrap& ScavTrap::operator=( ScavTrap const& S ) {
    if (this != &S) {
        AttackDamage = S.AttackDamage;
        HitPoints = S.HitPoints;
        EnergyPoints = S.EnergyPoints;
        Name = S.Name;
    }
    return *this;
}


void ScavTrap::attack( const std::string& target ) {
    if ( EnergyPoints > 0 && HitPoints > 0 ) {
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << EnergyPoints << " points of damage!" << std::endl;
        this->EnergyPoints--;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
}