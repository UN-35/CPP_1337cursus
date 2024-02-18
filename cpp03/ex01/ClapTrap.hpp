/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:35:30 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/18 12:12:56 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <iostream>

class ClapTrap
{
protected:
    std::string Name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;
public:
    ClapTrap( std::string name );
    ClapTrap( ClapTrap const& );
    ClapTrap& operator=( ClapTrap const& );
    ~ClapTrap();
    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
    void setName( std::string name );
};


#endif