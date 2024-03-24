/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:09:37 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/24 21:27:39 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm {
    private:
        const std::string name;
        bool Sign;
        const int GradeSign;
        const int GradeExec;
        AForm( void );
    public:
        AForm( std::string n, int GS, int GE);
        AForm( AForm const& obj );
        AForm& operator=( AForm const& obj );
        virtual ~AForm();

        std::string getName() const;
        bool getSign() const;
        int getGradeSign() const;
        int getGradeExec() const;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class FormNotSignedException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        void beSigned( Bureaucrat B );
        virtual void execute( Bureaucrat B ) const = 0;

};


std::ostream& operator<<( std::ostream& os, const AForm& form );


#endif