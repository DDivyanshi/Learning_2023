#include <stdio.h>


void swap(void* a, void* b, size_t size) {
    unsigned char* ptr_a = (unsigned char*)a;
    unsigned char* ptr_b = (unsigned char*)b;
    
    while (size--) {
        unsigned char temp = *ptr_a;
        *ptr_a++ = *ptr_b;
        *ptr_b++ = temp;
    }
}

int main() {
    int x = 10;
    int y = 20;
    
    printf("Before swap: x = %d, y = %d\n", x, y);
    
    
    swap(&x, &y, sizeof(int));
    
    printf("After swap: x = %d, y = %d\n", x, y);
    
    double a = 3.14;
    double b = 2.71;
    
    printf("Before swap: a = %lf, b = %lf\n", a, b);
    
    
    swap(&a, &b, sizeof(double));
    
    printf("After swap: a = %lf, b = %lf\n", a, b);
    
    return 0;
}
