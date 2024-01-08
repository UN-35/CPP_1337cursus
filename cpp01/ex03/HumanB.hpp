/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:09:25 by uns-35            #+#    #+#             */
/*   Updated: 2024/01/08 16:08:22 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP


#include "Weapon.hpp"


class HumanB
{
private:
    std::string name;
public:
    void attack();
    void setWeapon( Weapon weap );
    HumanB();
    ~HumanB();
};

void HumanB::setWeapon( Weapon weap ) {
    //set the fuckin weapon mman
}

void HumanB::attack()
{
    //guess this is what i have todo just need to complete it //or if not try ro look into it!!!!!
    Weapon weapon;
    std::cout << name << "attack with their" << weapon.getType() << std::endl;
}


HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}


#endif // !HUMANB_HPP