#include <stdio.h>
#include <float.h>

int main()
{
    int height;
    int width;

    while (1) {
        printf("Please enter width and height:\n");
        scanf("%d", &width);
        if (width == 0){
            printf("End\n");
            break;
        }
        scanf("%d", &height);
          if (height == 0){
            printf("End\n");
            break;
        }
        for (int i =0; i < height; i++){

            // base case for top and bottom rows
            if ( i == 0 || i == height-1){
                printf("+");
                for (int k = 1; k < width -1; k++){
                    printf("-");
                }
                if (width != 1){
                    printf("+\n");
                } else {
                    printf("\n");
                }    
            } else {
                for (int j = 0; j < width; j++){
                    if (j != 0 && j != width -1){
                        printf("~");
                    } else if (j == 0) {
                        printf("|");
                    } else {
                        printf("|\n");
                    }
                }
            }

        }
    }
}