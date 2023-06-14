Q1.c
#include <stdio.h>

void printExponent(double x) {
    
    unsigned long long* ptr = (unsigned long long*)&x;
    
   
    unsigned long long exponent = (*ptr & 0x7FF0000000000000) >> 52;
    
   
    printf("Exponent in hexadecimal: 0x%llX\n", exponent);
    
    
    printf("Exponent in binary: 0b");
    int i;
    for (i = 11; i >= 0; i--) {
        unsigned long long mask = 1ULL << i;
        printf("%d", (exponent & mask) ? 1 : 0);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    
    return 0;
}
