#include "QuadraticEquation.hpp"
#include <iostream>
#include <cstring>

void demo()
{
    std::cout.setf(std::ios::fixed);
    std::cout.precision(1);

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

    return;
}

void tests ()
{

}


int main(int argc, char *argv[])
{
    if (argv[1] == NULL)
        demo();
    else if (strcmp(argv[1], "-test") == 0)
        tests();

    return 0;
}
