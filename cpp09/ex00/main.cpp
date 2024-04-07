/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:25:11 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/06 22:52:25 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int ac, char **av ) {
    try {
        if ( ac != 2)
            throw std::runtime_error( "Error: need two args exactly." );
        BitcoinExchange obj;
        obj.exec( av[1] );
    } catch ( std::exception const& e ) {
        std::cout << e.what() << std::endl;
    }
}