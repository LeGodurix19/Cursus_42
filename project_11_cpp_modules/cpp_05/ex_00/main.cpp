# include "Bureaucrat.hpp"

int main()
{
    // Test --
    Bureaucrat* bureaucrat = new Bureaucrat("Bob", 2);
    std::cout << "=== Test to high with ++ ========" << std::endl;
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
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete bureaucrat;

    // Test ++
    Bureaucrat* stagiaire = new Bureaucrat("Cafe", 149);
    std::cout << "\n=== Test to low with -- =========" << std::endl;
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
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete stagiaire;

    // Test ToHigh
    Bureaucrat* toHigh;
    std::cout << "\n=== Test to high at start =======" << std::endl;
    try
    {
        toHigh = new Bureaucrat("ToHigh", 0);
        std::cerr << "Bug" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Test ToLow
    Bureaucrat* toLow;
    std::cout << "\n=== Test to low at start ========" << std::endl;
    try
    {
        toLow = new Bureaucrat("ToLow", 420);
        std::cerr << "Bug" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}