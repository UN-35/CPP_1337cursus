/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:09:37 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/24 21:27:19 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool Sign;
        const int GradeSign;
        const int GradeExec;
        Form( void );
    public:
        Form( std::string n, int GS, int GE);
        Form( Form const& obj );
        Form& operator=( Form const& obj );

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

        void beSigned( Bureaucrat B );


        ~Form();
};



#endif