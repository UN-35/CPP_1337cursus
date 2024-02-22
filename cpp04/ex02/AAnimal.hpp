/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:49:38 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/22 16:53:44 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
protected:
    std::string type;
public:
    AAnimal( void );
    AAnimal( std::string T );
    AAnimal( AAnimal const& obj );
    AAnimal& operator=( AAnimal const& obj );
    virtual ~AAnimal( void );

    virtual void makeSound( void ) const = 0;
    std::string getType( void ) const;
};



#endif // !AANIMAL_HPP