/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:09:34 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/08 13:10:20 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string n, int GS, int GE ) : name(n), GradeSign(GS), GradeExec(GE) {
}

Form::~Form()
{
}