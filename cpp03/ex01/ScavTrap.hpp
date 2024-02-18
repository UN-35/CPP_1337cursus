/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:26:27 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/18 12:25:45 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
    ScavTrap( void );
public:
    ScavTrap( std::string name );
    ScavTrap(ScavTrap const&);
    ScavTrap& operator=(ScavTrap const&);
    void guardGate();
    ~ScavTrap();
};




#endif // !SCAVTRAP_HPP