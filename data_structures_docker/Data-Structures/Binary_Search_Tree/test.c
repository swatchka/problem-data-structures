#include <stdio.h>

int main(void) {
    
    char str[] = "Hello";
    char * p = str;   // p는 str[0]의 주소
    printf("%c\n", *(p+1)); // 'e'

    return 0;
}
