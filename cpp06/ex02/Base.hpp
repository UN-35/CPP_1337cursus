/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 01:33:25 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/29 02:16:49 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP


class Base {
    public:
        virtual ~Base( void );
};


class A : public Base {};
class B : public Base {};
class C : public Base {};


Base* generate( void );
void identify(Base* p);
void identify(Base& p);


#endif