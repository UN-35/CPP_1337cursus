/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:24:31 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/24 11:37:05 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

    std::string name;
    std::getline( std::cin, name );    
    randomChump( name );
    Zombie* newZom = newZombie( name );
    newZom->announce();
    delete newZom;
}


