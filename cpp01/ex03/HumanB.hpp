/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:09:25 by uns-35            #+#    #+#             */
/*   Updated: 2024/01/26 16:57:22 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP


#include "Weapon.hpp"


class HumanB
{
private:
    std::string name;
    Weapon*  HumanBweap;
public:
    HumanB( std::string n );
    ~HumanB();
    void setWeapon( Weapon &weap );
    void attack();
};


#endif // !HUMANB_HPP