#include <stdio.h>

int main(void) {
    int a, b;
    printf("숫자를 넣1으시오 :");
    scanf("%d", &a);
    printf("숫자를 넣2으시오 :");
    scanf("%d", &b);
    int sum = a + b;
    if (sum >= 7)
    {
        printf("%d 대물이네요!\n", sum);
    }
    else
    {
        printf("%d 소1추입니다!\n", sum);
    }
    return 0;
}
