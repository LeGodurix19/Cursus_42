# include "Bureaucrat.hpp"

int main()
{
    Bureaucrat* bureaucrat = new Bureaucrat("Bob", 2);
    Bureaucrat* stagiaire = new Bureaucrat("Cafe", 149);
    
    // Test --
    try
    {
        std::cout << *bureaucrat << std::endl;
        bureaucrat->up();
        std::cout << bureaucrat->getName() << " upgraded !" << std::endl;
        std::cout << *bureaucrat << std::endl;
        bureaucrat->up();
        std::cerr << "Bug" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Error" << e.what() << std::endl;
    }

    // Test ++
    try
    {
        std::cout << *stagiaire << std::endl;
        stagiaire->down();
        std::cout << stagiaire->getName() << " downgraded !" << std::endl;
        std::cout << *stagiaire << std::endl;
        stagiaire->down();
        std::cerr << "Bug" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Error" << e.what() << std::endl;
    }

    Bureaucrat* toHigh;
    Bureaucrat* toLow;

    // Test ToHigh
    try
    {
        toHigh = new Bureaucrat("ToHigh", 0);
        std::cerr << "Bug" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Error" << e.what() << std::endl;
    }
    
    try
    {
        toLow = new Bureaucrat("ToLow", 420);
        std::cerr << "Bug" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Error" << e.what() << std::endl;
    }
    
    delete bureaucrat;
    delete stagiaire;
}