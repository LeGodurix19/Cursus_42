# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"
# include "Intern.hpp"


static void testForm(Bureaucrat& bur, Form* form)
{
    std::cout << std::endl << "Sign & Execute " << form->getName() << " : " << std::endl;
    bur.signForm(*form);
    bur.executeForm(*form);
}

static void testIntern(Intern& intern, const std::string &form_name, const std::string &target_name)
{
    Bureaucrat sign("Bob", 1);
    Form *totest = NULL;

    std::cout << std::endl;
    totest = intern.makeForm(form_name, target_name);

    if (totest)
    {
        testForm(sign, totest);
        delete totest;
    }
}

int main()
{
    Intern someRandomIntern;

    std::cout << std::endl << "Normal tests : " << std::endl;
    testIntern(someRandomIntern, "presidential pardon", "Michelon");
    testIntern(someRandomIntern, "robotomy request", "Bender");
    testIntern(someRandomIntern, "shrubbery creation", "Maison");

    std::cout << std::endl << "Doesn't exist tests : " << std::endl;
    testIntern(someRandomIntern, "doesn't exist", "NOP");

    return (0);
}