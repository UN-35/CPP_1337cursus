/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:16:16 by uns-35            #+#    #+#             */
/*   Updated: 2024/01/26 17:01:45 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType() {
    return type;
}
void    Weapon::setType(std::string T) {
    type = T;
}

Weapon::Weapon( std::string T)
{
    this->type = T;
}

Weapon::~Weapon()
{
}
