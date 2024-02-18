/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:25:51 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/18 17:36:06 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ScavTrap{
public:
    FragTrap( void );
    FragTrap( std::string name);
    FragTrap( FragTrap const& F );
    FragTrap& operator=( FragTrap const& F );
    ~FragTrap();
    void highFivesGuys( void );
};


#endif // !FRAGTRAP_HPP