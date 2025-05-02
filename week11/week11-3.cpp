// week11-3b.cpp
// SOIT107 ADVANCE 009 C C++
#include <iostream>
using namespace std;

int max_digit(int n) {
    int ans = 0;
    while (n > 0) {
        if (n % 10 > ans) ans = n % 10;
        n = n / 10;
    }
    return ans;
}