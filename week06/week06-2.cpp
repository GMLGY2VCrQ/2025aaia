#include <stdio.h>

int main()
{
    if(999) printf("999 good 成立\n");
    if(2) printf("2 good 成立\n");
    if(1) printf("1 good 成立\n");
    if(0) printf("0 不成立\n");
    if(-1) printf("-1 good 成立\n");
    while(1) printf("1 good 成立\n");
}