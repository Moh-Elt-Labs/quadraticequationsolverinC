#include <stdio.h>
#include <math.h>
int main(void)
{
    /* defining variables */
    double a, b, c;
    double r1, r2;
    double bac;

    /* allowing user to input data */
    printf("Please input A value for quadratic equation\n");
    scanf("%lf", &a);
    printf("Please input B value for a quadratic equation\n");
    scanf("%lf", &b);
    printf("Please input C value for a quadratic equation\n");
    scanf("%lf", &c);
    /* bac variable to make code look neater */
    bac =(b * b)-(4 * a * c) ;

    /* removing situations which it is impossible to get roots */
    if ((a == 0) || (bac) < 0)
    {
    printf("invalid option roots not possible as either a = 0 or the roots are complex\n");
    }
    else
    {
        /* finding roots and printing them */
    r1 = (-b +sqrt(bac)) /  (2 * a);
    r2 = (-b -sqrt(bac)) / (2 * a);
     printf("Root 1 is = %lf\n", r1);
      printf("Root 2 is = %lf\n", r2);
    }
    return 0;


}
