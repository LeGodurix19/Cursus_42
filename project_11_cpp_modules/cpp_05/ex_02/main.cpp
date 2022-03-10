# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"

static void testForm(Bureaucrat* bur, Form* form)
{
    std::cout << std::endl << "Sign & Execute " << form->getName() << " : " << std::endl;
    bur->signForm(*form);
    bur->executeForm(*form);
}

int main()
{
    ShrubberyCreationForm* shrub = new ShrubberyCreationForm("Patrick");
    RobotomyRequestForm* robot = new RobotomyRequestForm("Bob");
    PresidentialPardonForm* pardon = new PresidentialPardonForm("Pef");

    Bureaucrat* bob = new Bureaucrat("Bob", 120);
    Bureaucrat* james = new Bureaucrat("James", 33);
    Bureaucrat* meg = new Bureaucrat("Meg", 1);

    std::cout << "Normal tests : " << std::endl;

    testForm(bob, shrub);
    testForm(james, robot);
    testForm(meg, pardon);

    std::cout << std::endl << "AlreadySigned & ToLow tests : " << std::endl;

    testForm(bob, pardon);

    delete shrub;
    delete robot;
    delete pardon;

    delete bob;
    delete james;
    delete meg;

    return (0);
}