#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int main(void) {
    uint64_t u = UINT32_MAX; // 0xFFFFFFFF, 4294967295
    u = u + 1;               // 정의된 래핑 -> 0
    printf("%u\n", u);       // 0
    printf("0x%08x\n", u);   // 0x00000000
    return 0;
}

