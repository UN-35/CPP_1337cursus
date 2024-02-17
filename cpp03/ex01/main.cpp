/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:36:05 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/16 11:23:11 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main() {
    ClapTrap clap("clap");
    clap.attack ("the wall");
    clap.takeDamage(2);
    clap.beRepaired(2);
    
}