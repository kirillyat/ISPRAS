#include "QuadraticEquation.hpp"
#include <iostream>


int main(int argc, char const *argv[]) {

    std::cout.setf(std::ios::fixed);
    std::cout.precision(0);

    double a, b, c, root1, root2;
    int n;

    std::cout << "Введите коэффициенты квадратного уравнения"
              << std::endl << ">>> ";
    std::cin >> a >> b >> c;

    std::cout << "INPUT  : ";
    PrintEquation(a, b, c);
    std::cout << std::endl;

    n = QuadraticEquationSolver(a, b, c, &root1, &root2);

    std::cout << "OUTPUT : ";
    PrintAnalysis(n, &root1, &root2);
    std::cout << std::endl;

    return 0;
}
