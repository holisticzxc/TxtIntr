#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
void print_usage() {
    std::cout << "Использование:\n";
    std::cout << "  calculator --operation exp <x>\n";
    std::cout << "  calculator --operation pow <x> <y>\n\n";
    std::cout << "Поддерживаемые операции:\n";
    std::cout << "  exp  - вычисление e^x\n";
    std::cout << "  pow  - вычисление x^y\n\n";
}
int main(int argc, char* argv[]) {
    if (argc == 1) {
        print_usage();
        return 0;
    }
    if (argc < 3 || std::string(argv[1]) != "--operation") {
        std::cerr << "Ошибка: неверный формат аргументов.\n";
        print_usage();
        return 1;
    }
    std::string op = argv[2];
    if (op == "exp") {
        if (argc != 4) {
            std::cerr << "Ошибка: для операции 'exp' требуется один операнд.\n";
            print_usage();
            return 1;
        }
        double x = std::atof(argv[3]);
        double result = std::exp(x);
        std::cout << "e^" << x << " = " << result << std::endl;
    } else if (op == "pow") {
        if (argc != 5) {
            std::cerr << "Ошибка: для операции 'pow' требуется два операнда.\n";
            print_usage();
            return 1;
        }
        double x = std::atof(argv[3]);
        double y = std::atof(argv[4]);
        double result = std::pow(x, y);
        std::cout << x << " ^ " << y << " = " << result << std::endl;
    } else {
        std::cerr << "Ошибка: неизвестная операция '" << op << "'.\n";
        print_usage();
        return 1;
    }
    return 0;
}
