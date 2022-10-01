#include <stdio.h>

int main()
{
    int width, heigth;
    printf("長方形の幅: "); //  キーボードからの入力を促す
    scanf("%d", &width);    //  キーボードから一文字入力
    printf("長方形の高さ: ");
    scanf("%d", &heigth);
    printf("長方形の面積は %dmです。\n", width * heigth);

    // 長方形の幅： 9   ← キーボードから整数値を入力後、改行
    // 長方形の高さ： 4   ← キーボードから整数値を入力後、改行
    // 長方形の面積は、36mです。
}
