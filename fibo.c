#include <stdio.h>
#include <inttypes.h>

long long int fibonacci() {
    static uint64_t first = 0;
    static uint64_t second = 1;
    uint64_t out = first + second;
    first = second;
    second = out;
    return out;
}

int main() {
    for (int i = 0; i < 50; i++) {
        printf("%" PRIu64 "\n", fibonacci());
    }
}
