#include "Bureaucrat.hpp"

int main() {

    try
    {
        Bureaucrat khalil("KHALIL", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
