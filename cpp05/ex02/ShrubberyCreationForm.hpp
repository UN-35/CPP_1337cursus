/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:11:25 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/09 12:38:20 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>


class ShrubberyCreationForm : public AForm {
    private:
        ShrubberyCreationForm();
        std::string target;
    public:
        ShrubberyCreationForm( std::string target );
        ~ShrubberyCreationForm();
        void execute( Bureaucrat B ) const;
};




#endif