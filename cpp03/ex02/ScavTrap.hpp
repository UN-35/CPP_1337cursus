/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:26:27 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/18 17:39:51 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( ScavTrap const& S );
    ScavTrap& operator=( ScavTrap const& S );
    ~ScavTrap();

    void attack( const std::string& target );


    void guardGate();
};




#endif // !SCAVTRAP_HPP