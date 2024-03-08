/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:09:37 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/08 13:09:47 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>


class Form {
    private:
        std::string name;
        bool Sign;
        const int GradeSign;
        const int GradeExec;
        Form( void );
    public:
        Form( std::string n, int GS, int GE);
        ~Form();
};





#endif