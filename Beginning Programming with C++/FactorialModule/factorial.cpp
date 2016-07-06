//
// factorial - this module includes the factorial function
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
#include "factorial.h"
//
// factorial - return the factorial of the argument
//             provided. Returns a 1 for invalid arguments
//             such as negative numbers.
int factorial(int nTarget)
{
    // start with an accumulator that's initialized to 1
    int nAccumulator = 1;
    for (int nValue = 1; nValue <= nTarget; nValue++)
    {
        nAccumulator *= nValue;
    }

    return nAccumulator;
}
