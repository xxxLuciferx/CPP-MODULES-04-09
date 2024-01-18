#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat zz;
    try
    {
        Bureaucrat khalil("Khalil", 7);
        khalil.decrement();
        khalil.decrement();
        khalil.increment();
        std::cout << khalil;
    }
    catch(const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << zz;
    return 0;
}
