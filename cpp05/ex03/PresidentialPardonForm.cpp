/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:03:35 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/15 17:31:55 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm( std::string target )
    : AForm( "PresidentialPardonForm", 25, 5), target( target ) {}

void PresidentialPardonForm::execute( Bureaucrat B ) const {
    if ( B.getGrade() > this->getGradeSign() )
        throw AForm::GradeTooLowException();
    if ( this->getSign() == false )
        throw AForm::FormNotSignedException();
    
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
