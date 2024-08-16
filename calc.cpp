#include <iostream>
#include <cstdlib>  // For std::atof

using std::string, std::cout, std::endl, std::cerr, std::cin, std::atof;

class Calc {
public:

    double n1;
    double n2;
    char op;

    Calc(double numb1, char oper, double numb2): n1(numb1), op(oper), n2(numb2) {}

    double Operations() 
    {
        double result;

        switch (op) 
        {

            case '+':
                result = n1 + n2;
                return result;
                break;

            case '-':
                result = n1 - n2;
                return result;
                break;

            case '*':
                result = n1 * n2;
                return result;
                break;

            case '/':
            if (n2 == 0)
            {

                cerr << "Error: Division by zero." << endl;

            } else {
                
                result = n1 / n2;
                return result;
                break;

            }

            default:
                cerr << "Invalide Operation." << endl;
                return 0;
                break;

        }

    }

};

int main(int argc, char *argv[]) {

    if (argc != 4)
    {
        cerr << "Usage: " << argv[0] << "<value1> <operator> <value2>" << endl;
    }

    // Convert the arguments from string to double and char
    double numb1 = std::atof(argv[1]);
    char oper = argv[2][0];
    double numb2 = std::atof(argv[3]);
    
    Calc math(numb1, oper, numb2);
    double result = math.Operations();
    
    cout << "Result: " << result << endl;

    return 0;
}