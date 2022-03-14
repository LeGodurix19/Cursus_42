# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"
# include "Intern.hpp"

static void testForm(Bureaucrat& bur, Form* form)
{
    std::cout << "\n -> Sign" << std::endl;
    bur.signForm(*form);

    std::cout << "\n -> Exec" << std::endl;
    bur.executeForm(*form);
}

static void testIntern(Intern& intern, const std::string &form_name, const std::string &target_name)
{
    Bureaucrat sign("Bob", 1);
    Form *totest = NULL;

    totest = intern.makeForm(form_name, target_name);

    if (totest)
    {
        testForm(sign, totest);
        delete totest;
    }
    else
        std::cout << "\nError from intern" << std::endl;
}

int main()
{
    Intern someRandomIntern;

    std::cout << "=== Normal tests ============" << std::endl;
    testIntern(someRandomIntern, "presidential pardon", "Michelon");
    testIntern(someRandomIntern, "robotomy request", "Bender");
    testIntern(someRandomIntern, "shrubbery creation", "Maison");

    std::cout << "\n=== Error tests =============" << std::endl;
    testIntern(someRandomIntern, "doesn't exist", "NOP");

    return (0);
}