/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:35:15 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/18 16:17:34 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


//ClapTrap constructor
ClapTrap::ClapTrap( void ) : HitPoints(10), EnergyPoints(10), AttackDamage(0){
    std::cout << "This is ClapTrap constructor!!" << std::endl;
}
ClapTrap::ClapTrap( std::string name ) : HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "This is ClapTrap constructor!!" << std::endl;
    Name = name;
}
// Copy Constructor
ClapTrap::ClapTrap( ClapTrap const& C ) {
    std::cout << "This is ClapTrap copy constructor!!" << std::endl;
    *this = C;
}
// Copy assignment
ClapTrap& ClapTrap::operator=( ClapTrap const& C ) {
    if (this != &C) {
        AttackDamage = C.AttackDamage;
        HitPoints = C.HitPoints;
        EnergyPoints = C.EnergyPoints;
        Name = C.Name;
    }
    return *this;
}
ClapTrap::~ClapTrap() {
    std::cout << "This is ClapTrap destructor!!" << std::endl;
}
void ClapTrap::attack( const std::string& target ) {
    if ( EnergyPoints > 0 && HitPoints > 0 ) {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << EnergyPoints << " points of damage!" << std::endl;
        this->EnergyPoints--;
    }
}
void ClapTrap::takeDamage ( unsigned int amount ) {
    if ( EnergyPoints > 0 && HitPoints > 0 ) {
        if (HitPoints >= amount)
            HitPoints -= amount;
        else
            HitPoints = 0;
        std::cout << "ClapTrap " << Name << " takes damage, decrementing hit points by " << amount << std::endl;
    }
}
void ClapTrap::beRepaired ( unsigned int amount ) {
    if ( HitPoints > 0 && EnergyPoints > 0 ) {
        AttackDamage += amount;
        EnergyPoints--;
        std::cout << "ClapTrap " << Name << " been repaired, encrementing attack damage by "<< amount <<  std::endl;
    }
}
