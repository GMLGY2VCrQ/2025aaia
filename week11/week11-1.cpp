#include <stdio.h>

// 函式/函數 function
// 前面定義函式
// 送出 int 整數
// 送進來整數a, 整數b
int addnum(int a, int b) {
    printf("在函式 addnum() 裡，得到參數a:%d b:%d\n", a, b);
    int ans = a + b;
    printf("算出答案 %d 要 return 出去囉~\n", ans);
    return ans; // 把算出來的結果傳出去
}

int main() {
    // 主要的函式、主程式
    printf("在 main() 裡呼叫 addnum() 囉~\n");
    int ans = addnum(2, 3);
    printf("在 main() 裡得到答案:%d\n", ans);
}