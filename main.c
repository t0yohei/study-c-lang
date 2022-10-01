#include <stdio.h>

int main()
{
    // int a;                          //  変数a（キーボードからの値を代入)
    // printf("a=");                   //  キーボードからの入力を促す
    // scanf("%d", &a);                //  キーボードから一文字入力
    // printf("aの値は%dです。\n", a); //  aの値を表示
    // printf("aの値は%dです。\n", a); //  aの値を表示

    int a, b;
    printf("a=");    //  キーボードからの入力を促す
    scanf("%d", &a); //  キーボードから一文字入力
    printf("b=");
    scanf("%d", &b);
    printf("a + b = %dです。\n", a + b);
    printf("a - b = %dです。\n", a - b);
    printf("a * b = %dです。\n", a * b);
    printf("a / b = %dです。\n", a / b);
    printf("a %% b = %dです。\n", a % b);

    // a = 9   ← キーボードから整数値を入力後、改行
    // b = 4   ← キーボードから整数値を入力後、改行
    // a + b = 13
    // a - b = 5
    // a * b = 36
    // a / b = 2
    // a % b = 1
}
