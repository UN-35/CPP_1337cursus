/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:24:31 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/26 10:38:36 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    randomChump( "RandomFoo" );
    Zombie* newZom = newZombie( "NewFoo" );
    newZom->announce();
    delete newZom;
}


