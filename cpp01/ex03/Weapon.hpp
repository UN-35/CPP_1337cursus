/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:06:23 by uns-35            #+#    #+#             */
/*   Updated: 2024/01/26 17:28:13 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
// #include "HumanA.hpp"
// #include "HumanB.hpp"


class Weapon
{
private:
    std::string type;
public:
    std::string getType();
    void setType(std::string T);
    Weapon(std::string T);
    ~Weapon();
};




#endif //!WEAPON_HPP