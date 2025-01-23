#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

int main() {
    double total_summ;
    std::string paralyzed;

    if (!(std::cin >> total_summ)) {
        std::cerr << "Error: Numeric operand expected" << std::endl;
    }

    while (std::cin >> paralyzed) {
        if (paralyzed == "+" || paralyzed == "-" || paralyzed == "*" || paralyzed == "/" || paralyzed == "**" || paralyzed == ":") {
            double curr_num;
            if (!(std::cin >> curr_num)) {
                std::cerr << "Error: Numeric operand expected" << std::endl;
            }

            if (paralyzed == "+") {
                total_summ += curr_num;
            }
            else if (paralyzed == "-") {
                total_summ -= curr_num;
            }
            else if (paralyzed == "*") {
                total_summ *= curr_num;
            }
            else if (paralyzed == "/") {
                total_summ /= curr_num;
            }
            else if (paralyzed == "**") {
                total_summ = std::pow(total_summ, curr_num);
            }
            else if (paralyzed == ":") {
                total_summ = curr_num;
            }
        }
        else if (paralyzed == "=") {
            std::cout << total_summ << std::endl;
        }
        else if (paralyzed == "c") {
            total_summ = 0;
        }
        else if (paralyzed == "q") {
            break;
        }
        else {
            std::cerr << "Error: Unknown token " << paralyzed << std::endl;
            break;
        }
    }
}