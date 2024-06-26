/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:36:05 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/18 16:01:28 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("clap");
    ClapTrap trap("trap");
    
    clap.attack ("trap");
    trap.takeDamage(0);
    trap.attack("clap");
    trap.beRepaired(1);
    clap.beRepaired(3);
    
    
}