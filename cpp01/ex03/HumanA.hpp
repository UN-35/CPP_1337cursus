/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:07:51 by uns-35            #+#    #+#             */
/*   Updated: 2024/01/08 16:02:56 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"


class HumanA
{
private:
    std::string name;
public:
    void attack();
    HumanA();
    ~HumanA();
};

void HumanA::attack() {
    
}

HumanA::HumanA()
{
}

HumanA::~HumanA()
{
}


#endif // !HUMANA_HPP