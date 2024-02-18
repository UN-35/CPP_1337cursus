/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:03:19 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/18 12:26:51 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}
ScavTrap::~ScavTrap() {
}
ScavTrap::ScavTrap( ScavTrap const& S ) : ClapTrap( S ) {
    *this = S;
}
ScavTrap& ScavTrap::operator=( ScavTrap const& ) {
    return *this;
}


void guardGate() {
    std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}