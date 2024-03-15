/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:48:14 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/15 17:32:08 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( std::string target )
    : AForm( "RobotomyRequestForm", 72, 45 ), target(target) {}


void RobotomyRequestForm::execute( Bureaucrat B ) const {
    if ( B.getGrade() > this->getGradeSign() )
        throw AForm::GradeTooLowException();
    if ( this->getSign() == false )
        throw AForm::FormNotSignedException();
    
    std::cout << "drilling noises" << std::endl;

    srand( time(NULL) );
    if ( rand() % 2 )
        std::cout << target << "has been robotomized successfully" << std::endl;
    else
        std::cout << target << "has been robotomized failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}