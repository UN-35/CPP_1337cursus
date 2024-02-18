/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:36:05 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/18 16:14:28 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main() {
    ScavTrap Scav("Scav");
    ScavTrap trap("trap");
    
    Scav.attack ("trap");
    trap.takeDamage(0);
    trap.attack("Scav");
    trap.beRepaired(1);
    Scav.beRepaired(3);

    Scav.guardGate();
}