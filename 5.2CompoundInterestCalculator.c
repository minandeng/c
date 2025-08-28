#include <stdio.h>
#include <math.h>


int main(){


    double totalamount = 0.0;
    double principal = 0.0;
    double rate = 0.0;
    int period = 0;
    int time = 0;

    printf("Enter Principal: ");
    scanf("%lf", &principal);

    printf("Enter Rate: ");
    scanf("%lf", &rate);

    printf("Enter No. of Period/s Compounded: ");
    scanf("%d", &period);

    printf("Enter Length of Investment(years): ");
    scanf("%d", &time);

    rate = rate / 100;

    totalamount = principal * pow((1 + rate / period), period * time);

    printf("The Total Interest Accumulated after %d year/s will be $%.2lf.", time, totalamount);







    return 0;
}
