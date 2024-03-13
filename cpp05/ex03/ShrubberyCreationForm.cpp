/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:13:50 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/09 13:12:32 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): AForm( "ShrubberyCreationForm" , 145, 137 ), target( target ) {
}

void ShrubberyCreationForm::execute( Bureaucrat B ) const {
    if ( B.getGrade() > this->getGradeSign() )
        throw AForm::GradeTooLowException();
    if ( this->getSign() == false )
        throw AForm::FormNotSignedException();
    std::ofstream file;
    file.open( (target + "_shrubbery").c_str());

    file << "        '.,\
          'b      *\
           '$    #.\
            $:   #:\
            *#  @):\
            :@,@):   ,.**:'\
  ,         :@@*: ..**'\
   '#o.    .:(@'.@*\"'\
      'bq,..:,@@*'   ,*\
      ,p$q8,:@)'  .p*'\
     '    '@@Pp@@*'\
           Y7'.'\
          :@):.\
         .:@:'.\
       .::(@:." << std::endl;
    file.close();
}


ShrubberyCreationForm::~ShrubberyCreationForm() {
}