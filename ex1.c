#include <stdio.h>
#define PI 3.14159

int main()
{
    int r;

    printf("Enter a number from 1 to 20: \n");
    scanf("%d", &r);
        if (r > 20 || r < 1){ 
            printf("Number is not in the range from 1 to 20 \n");
        } else {
            printf("Here are the first %d ordinal numbers: \n", r);
            printf("1st \n");
            if (r >= 2) {
                printf("2nd \n");
            } if (r >=3){
                printf("3rd \n");
            } for (int i =4; i <= r; i++){
                printf("%dth \n",i);
            }

        }
}