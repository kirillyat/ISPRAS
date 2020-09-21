#ifndef QUARDRATIC_EQUATION_H
#define QUARDRATIC_EQUATION_H



// Constants
const int INF = -1;         // < Infinity
const double EPS = 1e-6;    // < Zero



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
    \brief Function to print equation
    \param[in] a Coefficient at X^2
    \param[in] b Coefficient at X
    \param[in] c Free member of the equation
*/
void PrintEquation(double a, double b, double c);


/*!
    \author kirillyat
    \brief Function to print analysis of solution
    \param[in] AmountOfRoots Amount Of Roots
    \param[in] root1 Pointer to the root #1
    \param[in] root2 Pointer to the root #2
*/
void PrintAnalysis(int AmountOfRoots,
                   const double *root1,
                   const double *root2);



#endif // QUARDRATIC_EQUATION_H
