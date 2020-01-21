#include <stdio.h>
#include <float.h>

int main()
{
    double r;
    double sum = 0;
    double min = DBL_MAX;
    double max = - DBL_MAX;
    double product = 1;

        printf("Enter 10 floating-point numbers: \n");
        for (int i = 0; i < 10; i++) {
            scanf("%lf", &r);
            if (r > max){
                max = r;
            }
            if (r < min){
                min = r;
            }
            sum+=r;
            product*=r;
        }
        printf("Sum is %.5lf \n",sum);
        printf("Min is %.5lf \n", min);
        printf("Max is %.5lf \n", max);
        printf("Product is %.5lf \n", product);
}