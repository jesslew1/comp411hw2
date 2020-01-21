#include <stdio.h>
#include <float.h>

int main()
{
    int arr[6];
    // while (1){
        printf("Enter six integers:\n");
        for (int i = 0; i < 6; i++) {
            scanf("%d", &arr[i]);
        }
        printf("1234567890bb1234567890\n");
        for (int i = 0; i < 3; i++){
            printf("%*d  ", 10, arr[i*2]);
            printf("%*d\n", 10, arr[i*2 +1]);

        }
    // }    
}