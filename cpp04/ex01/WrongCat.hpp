/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:27:46 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 16:28:28 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:
    /* data */
public:
    WrongCat();
    WrongCat( WrongCat const& obj );
    WrongCat& operator=( WrongCat const& obj );
    ~WrongCat();
};


#endif // !WRONGCAT_HPP