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

    if (isZero(a)) {
        if (isZero(b)) {
            return (isZero(c)) ? INF: 0;
        } else { /* if (b != 0) */
            *root1 = -c/b;
            return 1;
        }
    } else { /* if (a != 0) */
        D = b*b - 4*a*c;
        if (D < 0) {
            return 0;
        } else if (isZero(D)) {
            *root1 = -b/(2*a);
            return 1;
        } else { /* if(D != 0) */
            *root1 = (-b + sqrt(D))/(2*a);
            *root2 = (-b - sqrt(D))/(2*a);
            return 2;
        }
    }
}



void PrintEquation(double a, double b, double c)
{
    bool af = notZero(a),
         bf = notZero(b),
         cf = notZero(c);

    if (af) {
        std::cout << a << "x^2 ";
        if (bf || cf)
            std::cout << "+ ";
    }
    if (bf) {
        std::cout << b << "x ";
        if (cf)
            std::cout << "+ ";
    }
    if (cf) {
        std::cout << c << " = 0";
    }
}




void PrintAnalysis(int AmountOfRoots,
                   const double *root1,
                   const double *root2)
{
    switch (AmountOfRoots) {
        case INF:
            std::cout << "Infinity amount of roots" << std::endl;
        break;
        case 0:
            std::cout << "No roots" << std::endl;
        break;
        case 1:
            std::cout << "Only one root: " << root1 << std::endl;
        break;
        case 2:
            std::cout << "Two roots: " << root1 << " and " << root2 << std::endl;
        break;
    }
}


bool  isZero(double d)
{
    return std::fabs(d) < EPS;
}


bool notZero(double d)
{
    return !isZero(d);
}
