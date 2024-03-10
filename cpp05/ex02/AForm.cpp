/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:09:34 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/08 22:43:02 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( std::string n, int GS, int GE ) : name(n), Sign(false), GradeSign(GS), GradeExec(GE) {
}


std::string AForm::getName() const {
    return name;
}
bool AForm::getSign() const {
    return Sign;
}
int AForm::getGradeSign() const {
    return GradeSign;
}
int AForm::getGradeExec() const {
    return GradeExec;
}


const char* AForm::GradeTooHighException::what() const throw() {
    return "GradeTooHighException";
}
const char* AForm::GradeTooLowException::what() const throw() {
    return "GradeTooLowException";
}
const char* AForm::FormNotSignedException::what() const throw() {
    return "FormNotSignedException";
}

void AForm::beSigned( Bureaucrat B) {
    if ( B.getGrade() <= GradeSign )
        Sign = true;
    else
        throw GradeTooLowException();
}

AForm::~AForm()
{
}