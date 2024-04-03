/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:40:35 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/02 05:05:54 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        std::vector<int> vect;
        unsigned int N;
    public:
        Span( void );
        Span( unsigned int N );
        Span( Span const& obj );
        Span& operator=( Span const& obj );
        ~Span();

        unsigned int getN() const;
        std::vector<int> getVect() const;

        void addNumber( int n );
        void addRange( std::vector<int>::iterator begin, std::vector<int>::iterator end );

        unsigned int longestSpan();
        unsigned int shortestSpan();
};



#endif