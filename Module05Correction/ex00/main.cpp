#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat zz;
    try
    {
        Bureaucrat khalil("joyboy", 7);
        Bureaucrat copy = khalil;
        khalil.decrement();
        khalil.decrement();
        khalil.increment();
        std::cout << khalil;
        std::cout << copy;
    }
    catch(const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << zz;
    return 0;
}
