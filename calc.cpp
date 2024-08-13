#include <iostream>

using std::string, std::cout, std::endl, std::cerr;

class Calc {
public:

    double n1;
    double n2;
    char op;

    Calc(double numb1, char oper, double numb2): n1(numb1), op(oper), n2(numb2) {}

    double Operations() {
        double result;

        switch (op) {
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
                result = n1 / n2;
                return result;
                break;

            default:
                cerr << "Invalide Operation." << std::endl;
                break;
        }
    }
};

int main(int argc, char *argv[]) {

    Calc math(2, '+', 2);

    double result = math.Operations();

    cout << result << endl;

    return 0;
}