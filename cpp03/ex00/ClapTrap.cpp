/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:35:15 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/15 15:51:06 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


//ClapTrap constructor
ClapTrap::ClapTrap( std::string name ) {
    this->Name = name;
}

ClapTrap::~ClapTrap() {
}

void ClapTrap::attack( const std::string& target ) {

}
void ClapTrap::takeDamage ( unsigned int amount ) {
    
}
void ClapTrap::beRepaired ( unsigned int amount ) {
    
}