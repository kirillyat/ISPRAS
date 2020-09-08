#include <cmath>
#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstdlib>

/*!
    \author kirillyat
    \brief Function to solve quadratic equation
    \param[in] a Coefficient at X^2
    \param[in] b Coefficient at X
    \param[in] c Free member of the equation
    \param[out] root1 Pointer to the root #1
    \param[out] root2 Pointer to the root #2
    \return Quantity of  roots
*/
int QuadraticEquationSolver(double a, double b, double c,
                            double *root1, double *root2);

/*!
    \author kirillyat
    \brief Function to print solution of quadratic equation
    \param[in] a Coefficient at X^2
    \param[in] b Coefficient at X
    \param[in] c Free member of the equation
*/
void foo(double a, double b, double c);


/*!
    \author kirillyat
    \brief Function to compare double to zero
    \param[in] a Doudle value
    \return True if value is near to zero
*/
bool is_zero(double d);


// Constants
struct Constants{
    int INF = -1;             // <Infinity
    double EPS = 0.000000000000001; // <Zero
};
