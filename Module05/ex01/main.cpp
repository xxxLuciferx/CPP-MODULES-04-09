#include "Form.hpp"

int main() 
{
    // try {
    //     Form defaultForm;
    //     Form customForm("CustomForm", 120, 130);

    //     std::cout << "Default Form Name: " << defaultForm.get_name() << std::endl;
    //     std::cout << "Default Form Sign Status: " << (defaultForm.get_signStatus() ? "Signed" : "Not Signed") << std::endl;
    //     std::cout << "Default Form Grade Required to Sign: " << defaultForm.get_gradeToSign() << std::endl;
    //     std::cout << "Default Form Grade Required to Execute: " << defaultForm.get_gradeToExecute() << std::endl;

    //     std::cout << "\nCustom Form Name: " << customForm.get_name() << std::endl;
    //     std::cout << "Custom Form Sign Status: " << (customForm.get_signStatus() ? "Signed" : "Not Signed") << std::endl;
    //     std::cout << "Custom Form Grade Required to Sign: " << customForm.get_gradeToSign() << std::endl;
    //     std::cout << "Custom Form Grade Required to Execute: " << customForm.get_gradeToExecute() << std::endl;

    // } catch (const std::exception& e) {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }
//     {
//     Bureaucrat bureaucrat("Khalil haimer", 50);
//     Form form("Document", 60, 40);

//     bureaucrat.signForm(form);

//     return 0;
// }
    try {
        // Create a bureaucrat and a form
        Bureaucrat bureaucrat("khalil haimer", 50);
        Form form("Document", 60, 40);

        // Display initial state
        std::cout << "Bureaucrat: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade() << std::endl;
        std::cout << "----" << std::endl;
        std::cout << "Form: " << form << std::endl;

        // Attempt to sign the form
        bureaucrat.signForm(form);

        // Display the updated state
        std::cout << "Form after signing attempt: " << form << std::endl;

        // Try to sign the form with a bureaucrat of insufficient grade
        Bureaucrat lowGradeBureaucrat("Jane Doe", 70);
        lowGradeBureaucrat.signForm(form);

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
