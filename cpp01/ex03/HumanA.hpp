/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:07:51 by uns-35            #+#    #+#             */
/*   Updated: 2024/01/15 10:06:17 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"


class HumanA
{
private:
    std::string name;
    Weapon&  HumanAweap;
public:
    HumanA( std::string n, Weapon& w );
    ~HumanA();
    void attack();
};



#endif // !HUMANA_HPP