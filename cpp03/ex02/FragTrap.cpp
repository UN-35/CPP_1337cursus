/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:25:35 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/18 17:43:03 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap ( void ) {
    std::cout << "This is FragTrap Default constructor!!" << std::endl;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}
FragTrap::FragTrap( std::string name ) : ScavTrap( name ) {
    std::cout << "This is FragTrap constructor!!" << std::endl;
    Name = name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}
FragTrap::FragTrap( FragTrap const& F ) : ScavTrap( F ){
    std::cout << "This is FragTrap copy constructor!!" << std::endl;
    *this = F;
}
FragTrap& FragTrap::operator=( FragTrap const& F ) {
    if (this != &F) {
        HitPoints = F.HitPoints;
        EnergyPoints = F.EnergyPoints;
        AttackDamage = F.AttackDamage;
        Name = F.Name;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "This is FragTrap destructor!!" << std::endl;
}



void FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << Name << " says high Fives Guys" << std::endl;
}