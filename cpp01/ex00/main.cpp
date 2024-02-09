/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:24:31 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/06 12:11:49 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    randomChump( "RandomFoo" );
    Zombie* newZom = newZombie( "NewFoo" );
    newZom->announce();
    delete newZom;
}
