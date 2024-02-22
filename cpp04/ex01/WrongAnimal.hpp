/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:26:34 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/21 17:18:09 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include "Animal.hpp"



class WrongAnimal {
protected:
    std::string Type;
public:
    WrongAnimal( void );
    WrongAnimal( std::string T );
    WrongAnimal( WrongAnimal const& obj );
    WrongAnimal& operator=( WrongAnimal const& obj );
    ~WrongAnimal( void );

    std::string getType( void ) const;
    void makeSound( void ) const;
};



#endif // !WRONGANIMAL_HPP