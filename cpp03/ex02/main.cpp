/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:36:05 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/18 17:45:06 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap Scav("Scav");
    FragTrap trap("trap");
    
    Scav.attack ("trap");
    trap.takeDamage(0);
    trap.attack("Scav");
    trap.beRepaired(1);
    Scav.beRepaired(3);

    Scav.guardGate();
    
    trap.highFivesGuys();
}