#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", 145, 137),
		target("Default target")
{
	std::cout << "Default constructor called for Shrubbery Creation Form))" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& newTarget )
	: Form("ShrubberyCreationForm", 145, 137),
		target(newTarget)
{
	std::cout << "Target constructor called for Shrubbery Creation Form))" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &valueToCopy ) 
	: Form("ShrubberyCreationForm", 145, 137),
		target(valueToCopy.target)
{
	std::cout << "Copy constructor called for Shrubbery Creation Form))" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &valueToCopy ) 
{
	target = valueToCopy.target;
	std::cout << "Copy assignement constructor called for Shrubbery Creation Form))" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
	std::cout << "Destructor called for Shrubbery Creation Form))" << std::endl;
}

std::string		ShrubberyCreationForm::getTarget()
{
	return (this->target);
}

void	ShrubberyCreationForm::executeSpecificForm() const
{	
	std::ofstream outfile;
  	std::string   targetShrubbery;

 	targetShrubbery = target + "_shrubbery";
 	outfile.open(targetShrubbery.c_str());

 	if (!outfile)
  	  throw ShrubberyCreationForm::ShrubberyFailureException();

	outfile << std::endl << std::endl
          << "                     **    ***  " << std::endl
		    	<< "                    ****  *****" << std::endl
		    	<< "                     ||    / \\  " << std::endl
          << std::endl << std::endl
		    	<< "                        ###  " << std::endl
		    	<< "                       #o### " << std::endl
		    	<< "                     #####o### " << std::endl
		    	<< "                    #o#\\#|#/###  " << std::endl
		    	<< "                     ###\\|/#o# " << std::endl
		    	<< "                      # ]|[  # " << std::endl
		    	<< "                        ]|[  " << std::endl
          << std::endl << std::endl
		    	<< "                                              ." << std::endl
		    	<< "                                   .         ;" << std::endl
		    	<< "      .              .              ;%     ;;" << std::endl
		    	<< "        ,           ,                :;\%  \%;" << std::endl
		    	<< "         :         ;                   :;%;'     .," << std::endl
		    	<< ",.        %;     %;            ;        %;'    ,;" << std::endl
		    	<< "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl
		    	<< "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl
		    	<< "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl
		    	<< "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl
		    	<< "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl
		    	<< "         `:%;.  :;bd%;          %;@%;'" << std::endl
		    	<< "           `@%:.  :;%.         ;@@%;'" << std::endl
		    	<< "             `@%.  `;@%.      ;@@%;" << std::endl
 		    	<< "              `@%%. `@%%    ;@@%;" << std::endl
		    	<< "                 ;@%. :@%%  %@@%;" << std::endl
		    	<< "                   %@bd%%%bd%%:;" << std::endl
		    	<< "                     #@%%%%%:;;" << std::endl
		    	<< "                     %@@%%%::;" << std::endl
		    	<< "                     %@@@%(o);  . '" << std::endl
		    	<< "                     %@@@o%;:(.,'" << std::endl
		    	<< "                 `.. %@@@o%::;" << std::endl
		    	<< "                    `)@@@o%::;" << std::endl
		    	<< "                     %@@(o)::;" << std::endl
 		    	<< "                   .%@@@@%::;" << std::endl
		    	<< "                    ;%@@@@%::;." << std::endl
		    	<< "                   ;%@@@@%%:;;;." << std::endl
		    	<< "               ...;%@@@@@%%:;;;;,.. " << std::endl
          << std::endl << std::endl; 

	outfile.close();

	std::cout << "You can check the creation of the shrubbery trees by executing" 
				<< std::endl
				<< " >> cat " << target << "_shrubbery"
				<< std::endl;
}

const char* ShrubberyCreationForm::ShrubberyFailureException::what () const throw ()
{
	return "Shrubbery Creation has failed.";
}