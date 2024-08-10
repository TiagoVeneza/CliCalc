#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Calc {
public:

    float n1;
    float n2;
    string op;

    Calc(float numb1, string oper, float numb2): n1(numb1), op(oper), n2(numb2) {}

    float Operations() {
        float result;

        if (op == "+") {

            result = n1 + n2;

        } else if (op == "-") {

            result = n1 - n2;

        } else if (op == "*") {

            result = n1 * n2;

        } else if (op == "/") {

            if (n2 == 0)
            {

                std::cerr << "Erro: Zero division." << std::endl;

            } else {

                result = n1 / n2;

            }

        } else
        {
            std::cerr << "Invalide Operation." << std::endl;
            result = 0; // Ou algum valor de erro apropriado
        }
        
        
        return result;

    }
};

int main() {

    Calc math(5, "/", 0);

    float result = math.Operations();

    cout << result << endl;

    return 0;
}