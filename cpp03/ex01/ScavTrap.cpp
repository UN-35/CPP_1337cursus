/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:03:19 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/17 23:14:24 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name) {
    this->HitPoints(100);
    this->EnergyPoints = 50;
    this->takeDamage = 20;
}
ScavTrap::~ScavTrap() {
}
ScavTrap::ScavTrap( ScavTrap const& S ) : ClapTrap( S ) {
    *this = S;
}
ScavTrap& ScavTrap::operator=( ScavTrap const& S ) {
    return *this;
}
