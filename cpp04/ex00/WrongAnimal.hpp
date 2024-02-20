/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:26:34 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 17:09:06 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include "Animal.hpp"



class WrongAnimal {
protected:
    std::string Type;
public:
    WrongAnimal();
    WrongAnimal( WrongAnimal const& obj );
    WrongAnimal& operator=( WrongAnimal const& obj );
    ~WrongAnimal();

    std::string getType( void );
    void makeSound( void );
};



#endif // !WRONGANIMAL_HPP