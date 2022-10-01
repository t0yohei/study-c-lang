#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("年数を入力してください：");
    //  キーボードから整数を入力
    scanf("%d", &n);
    if (n % 400 == 0)
    {
        printf("閏年です");
    }
    else if (n % 100 == 0)
    {
        printf("閏年ではありません");
    }
    else if (n % 4 == 0)
    {
        printf("閏年です");
    }
    else
    {
        printf("閏年ではありません");
    }
}
