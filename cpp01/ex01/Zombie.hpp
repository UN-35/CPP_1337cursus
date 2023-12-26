/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:44:51 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/26 11:18:55 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>



class Zombie
{
private:
    std::string name;
public:
    Zombie();
    void setname(std::string name);
    std::string getname();
    ~Zombie();
};


//funcs

Zombie* zombieHorde( int N, std::string name );


#endif