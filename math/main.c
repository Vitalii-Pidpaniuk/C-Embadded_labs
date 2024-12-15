#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double ReadA()
{
    double a;
    printf("Please, enter A:");
    scanf("%lf", &a);
    return a;
}

double CountZ1(double a)
{

    return cos(a) + cos(2*a) + cos(6*a) + cos(7*a);
}

double CountZ2(double a)
{
    return 4 * cos(a/2) * cos(5*a/2) * cos(4*a);
}

int main() {
    double a = 0, z1, z2;
    a = ReadA();
    printf("Z1 = %f\n", CountZ1(a));
    printf("Z2 = %f\n", CountZ2(a));

    return 0;
}

