/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:28:47 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/03 01:13:47 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <iterator>
#include <queue>


template <typename T>
class MutantStack : public std::stack<T> {
    private :

    public :
        MutantStack( void ) {}
        MutantStack( MutantStack const& obj ) {
            *this = obj;
        }
        MutantStack& operator=( MutantStack const& obj ) {
            if ( this != &obj )
                MutantStack::stack::operator=(obj);
            return *this;
        } 
        ~MutantStack( void ) {}

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {
            return this->c.begin();
        };
        iterator end() {
            return this->c.end();
        };
};




#endif