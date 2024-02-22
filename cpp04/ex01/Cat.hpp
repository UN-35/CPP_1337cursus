/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:23:14 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/22 14:57:57 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal {
private:
    Brain* catBrain;
public:
    Cat( void );
    Cat( Cat const& obj );
    Cat& operator=( Cat const& obj);
    ~Cat( void );

    void makeSound( void ) const;
};





#endif // !CAT_HPP