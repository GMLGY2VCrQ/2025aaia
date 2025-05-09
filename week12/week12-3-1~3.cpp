// week12-3a.cpp
// SOIT108
#include <stdio.h>

int main() {
    int s;
    scanf("%d", &s);
    int ans = 1.2 * 60 * 60 / s;
    printf("%d", ans);
    return 0;
}


// week12-3b.cpp
// SOIT108 判斷是否為閏年

#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);
    if (y % 400 == 0) printf("%d is a leap year.\n", y);
    else if (y % 100 == 0) printf("%d is not a leap year.\n", y);
    else if (y % 4 == 0) printf("%d is a leap year.\n", y);
    else printf("%d is not a leap year.\n", y);
}


// week12-3c.cpp
// SOIT108_Base_011
#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    int ans = (x1 - x2) * (y1 - y2);
    if (ans < 0) ans = -ans;
    printf("%d", ans);
    return 0;
}