/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:09:34 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/13 13:14:34 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string n, int GS, int GE ) 
    : name(n), Sign(false), GradeSign(GS), GradeExec(GE) {
    
    if (GradeSign < 1 || GradeExec < 1)
        throw Form::GradeTooHighException();
    else if (GradeSign > 150 || GradeExec > 150)
        throw Form::GradeTooLowException();
}


Form::Form( Form const& obj ) 
    : name(obj.name), Sign(obj.Sign), 
    GradeSign(obj.GradeSign), 
    GradeExec(obj.GradeExec) {}

Form& Form::operator=( Form const& obj ) {
    Sign = obj.Sign;
    return *this;
}

Form::~Form() {}

std::string Form::getName() const {
    return name;
}
bool Form::getSign() const {
    return Sign;
}
int Form::getGradeSign() const {
    return GradeSign;
}
int Form::getGradeExec() const {
    return GradeExec;
}


const char* Form::GradeTooHighException::what() const throw() {
    return "GradeTooHighException";
}
const char* Form::GradeTooLowException::what() const throw() {
    return "GradeTooLowException";
}


void Form::beSigned( Bureaucrat B) {
    if ( B.getGrade() <= GradeSign )
        Sign = true;
    else
        throw GradeTooLowException();
}
