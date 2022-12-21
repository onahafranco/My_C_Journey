/* a code that takes a number and raise the number to the power 
of the squareroot of another number*/


#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2;
    double result;
     printf("input first number here: ");
     scanf("%lf", &num1);
     printf("input second number here: ");
     scanf("%lf", &num2);

    result = pow(num1, sqrt(num2));
    printf("%.2lf", result);

    return 0;
    
     
}
