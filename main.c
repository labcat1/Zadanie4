#include <stdio.h>
#include <math.h>
double function(double x) {
return x*x-10/sqrt(100-x);}

double functionDerivative(double x) {
    return 2*x+5/((100-x)*sqrt(100-x));
}
double approximation(double x1, double limit) {
    double x2 = x1-function(x1)/functionDerivative(x1);
    while (fabs(x2-x1) > limit) {
        x1 = x2;
        x2 = (x1-function(x1)/functionDerivative(x1));
    }
    return x1;
}
int main(void) {
    double x1;
    printf("Input first approximation:");
    scanf("%lf", &x1);
    double limit;
    printf("Input maximum deviation:");
    scanf("%lf", &limit);
    printf("Approximate zero point: %f", approximation(x1, limit));
}
