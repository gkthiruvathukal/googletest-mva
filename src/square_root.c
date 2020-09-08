/* module to be tested */

#include <math.h>

#include "square_root.h"
 
double square_root(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    } else {
        return sqrt(a);
    }
}
