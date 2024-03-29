/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 01:53:52 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/29 02:55:03 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.hpp"

Base* generate( void ) {
    srand( time( NULL ) );
    int random = rand() % 3;
    if (!random)
        return new A;
    else if (random == 1)
        return new B;
    else
        return new C;
}

void identify( Base* p ) {
    if ( dynamic_cast<A*>( p ) )
        std::cout << "A" << std::endl;
    else if ( dynamic_cast<B*>( p ) )
        std::cout << "B" << std::endl;
    else if ( dynamic_cast<C*>( p ) )
        std::cout << "C" << std::endl;
    else
        std::cout << "Undefined" << std::endl;
}

void identify( Base& p ) {
    try {
        ( void )dynamic_cast<A&>( p );
        std::cout << "A" << std::endl;
    } catch( std::exception &e ) {
        try {
            ( void )dynamic_cast<B&>( p );
            std::cout << "B" << std::endl;
        } catch( std::exception &e ) {
            try {
                ( void )dynamic_cast<C&>( p );
                std::cout << "C" << std::endl;
            } catch (std::exception &e ) {
                std::cout << "Cast Failed" << std::endl;
            }
        }
    }
}

int main() {
    Base *ptr = generate();
    Base &ref = *ptr;
    identify(ptr);
    identify(ref);
    delete ptr;
    return 0;
}