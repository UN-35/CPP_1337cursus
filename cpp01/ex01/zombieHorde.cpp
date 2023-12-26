/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:45:06 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/26 11:15:37 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie* zombieHorde( int N, std::string name ) {

    Zombie* zzz = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zzz[i].setname(name);
    }
    return zzz;
}

