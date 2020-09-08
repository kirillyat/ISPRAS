#include <cmath>
#include <iostream>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include "QuadraticEquation.hpp"



int QuadraticEquationSolver(double a, double b, double c,
                            double *root1, double *root2)
{
    double D;

    if (is_zero(a)) {
        if (is_zero(b)) {
            return (is_zero(c)) ? Constants:INF: 0;
        } else { /* if (b != 0) */
            *root1 = -c/b;
            return 1;
        }
    } else { /* if (a != 0) */
        D = b*b - 4*a*c;
        if (D < 0) {
            return 0;
        } else if (is_zero(D)) {
            *root1 = -b/(2*a);
            return 1;
        } else { /* if(D != 0) */
            *root1 = (-b + sqrt(D))/(2*a);
            *root2 = (-b - sqrt(D))/(2*a);
            return 2;
        }
    }
}


void foo(double a, double b, double c)
{
    double x, y;

    std::cout << "INPUT : " << a << "*X^2 + " << b << "*X + " << c << std::endl;

    switch (QuadraticEquationSolver(a, b, c, &x, &y)) {
        case Constants:INF:
            std::cout << "Infinity amount of roots" << std::endl;
        break;
        case 0:
            std::cout << "No roots" << std::endl;
        break;
        case 1:
            std::cout << "Only one root: " << x << std::endl;
        break;
        case 2:
            std::cout << "Two roots: " << x << " and " << y << std::endl;
        break;
    }
}


bool is_zero(double d)
{
    return std::fabs(d) < Constants:EPS;
}



int main(int argc, char const *argv[]) {

    double a, b, c;
    std::cin >> a >> b >> c;
    foo(a, b, c);

    return 0;
}
