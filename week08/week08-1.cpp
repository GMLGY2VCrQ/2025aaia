#include<stdio.h>

int main()
{
    int a[10] = {3, 0, 1, 8, 7, 2, 5, 4, 6, 9};
    
    for(int i = 0; i < 10; i++) 
        printf("%d ", a[i]);
    printf("\n");

    for(int k = 0; k < 9; k++) {
        for(int j = 0; j < 9 - k; j++) { 
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

        for(int i = 0; i < 10; i++) 
            printf("%d ", a[i]);
        printf("\n");
    }

    return 0;
}
