/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:36:10 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/13 16:03:34 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Intern : public AForm {
    private :
        Intern( void );
    public :
        Intern( const Intern& obj );
        Intern& operator=( const Intern& obj );
        ~Intern();
        AForm* makeForm( std::string Fname, std::string Ftarget );

};



#endif