/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:16:24 by yoelansa          #+#    #+#             */
/*   Updated: 2023/12/21 16:00:30 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( int ac, char **av ) {
    int i = 0;
    int j;
    if ( ac == 1 )
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        while ( ++i < ac ) {
            j = -1;
            while ( av[i][++j] ) {
                av[i][j] = toupper(av[i][j]);
            }
            std::cout << av[i];
        }
        std::cout << std::endl;
    }
}