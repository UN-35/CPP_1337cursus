/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:21:05 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/07 16:46:04 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sys/time.h>


bool flag = false;
unsigned int tmp;

template <typename T, typename F, typename S>
void algo( int ac, T cont, F fir, S sec ) {
    struct timeval start, end;
    long second, micro;
    
    gettimeofday( &start, NULL );
    for ( size_t i = 0; i < cont.size(); i++ ) {
        if ( cont[i].first > cont[i].second )
            std::swap( cont[i].first, cont[i].second );
    }
    for ( size_t i = 0; i < cont.size(); i++ )
        fir.push_back(cont[i].first);
    for ( size_t i = 0; i < cont.size(); i++ )
        sec.push_back(cont[i].second);
    std::sort( fir.begin(), fir.end() );
    for ( size_t i = 0; i < sec.size(); i++ )
        fir.insert(std::lower_bound( fir.begin(), fir.end(), sec[i] ), sec[i] );
    if ( flag )
        fir.insert(std::lower_bound( fir.begin(), fir.end(), tmp ), tmp );

    std::cout << "\nAfter: ";
    
    for ( size_t i = 0; i < fir.size(); i++ )
        std::cout << fir[i] << " ";
    
    gettimeofday( &end, NULL );
    second = end.tv_sec - start.tv_sec;
    micro = end.tv_usec - start.tv_usec;
    long diff = ( second / 1000000 ) + micro;
    std::cout << "\nTime to process a range of " << ac << " elements with std::vector : " << diff  << " us" << "\n";
}


void parseInput( char *av1, char *av2 ) {
    if (std::atoi(av1) < 0 || std::atoi(av2) < 0) {
        std::cerr << "Invalid Input: Number Less Than 0\n";
        exit(0);
    }
}

int main( int ac, char **av ) {
    if ((ac - 1) % 2 != 0) {
        flag = true;
        tmp = std::atoi( av[ac - 1] );
        if ( std::atoi( av[ac - 1] ) < 0 )
            exit (1);
        ac--;
    }

    std::cout << "Before: ";
    if ( ac < 6 ) {
        for ( int i = 1; i < ac; i++ )
            std::cout << av[i] << " ";
    } else {
        for ( int i = 1; i < 6; i++ )
            std::cout << av[i] << " ";
        std::cout << "[...]";
    }

    std::vector<std::pair<unsigned int, unsigned int> > vect;
    for ( int i = 1; i < ac; i += 2 ) {
        if ( isdigit( *av[i] ) ) {
            parseInput( av[i], av[i + 1] );
            vect.push_back( std::make_pair(std::atoi( av[i] ), std::atoi( av[i + 1] ) ) );
        }
    }
    std::vector<unsigned int> vect1, vect2;
    algo( ac, vect, vect1, vect2);
}



