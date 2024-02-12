/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:40:47 by uns-35            #+#    #+#             */
/*   Updated: 2024/02/12 09:53:11 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"



HumanA::HumanA( std::string n, Weapon& w ) : name(n), HumanAweap(w) {
}
HumanA::~HumanA() {
}

void HumanA::attack() {
    std::cout << name << " attack with their " << HumanAweap.getType() << std::endl;
}
