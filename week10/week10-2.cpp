#include <stdio.h>

int main()
{
    printf("enter an INT");
    int n;
    scanf("%d", &n);

    while(n>0){
        printf("數字%d剝皮剝出:%d\n", n, n%10); //都要打
        n = n/10;
    }

    return 0;
}
