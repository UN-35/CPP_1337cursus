/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:16:24 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/20 18:50:19 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void PrintUpper( std::string str )
{
    char c = 0;
    int i = -1;
    while ( str[++i] ) {
        if ( str[i] >= 'a' && str[i] <= 'z' ) {
            c = str[i] - 32;
            std::cout << c;
        }
        else
            std::cout << str[i];
    }
}

int main( int ac, char **av ) {
    if ( ac == 1 )
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        int i = 0;
        while ( ++i < ac )
            PrintUpper( av[i] );
        std::cout << std::endl;
    }
}