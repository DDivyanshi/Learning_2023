#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            
            num = num | 0x00000001;
            break;
        case 2:
            
            num = num & 0x7FFFFFFF;
            break;
        case 3:
            
            num = num ^ 0x00008000;
            break;
        default:
            printf("Invalid operation type\n");
            break;
    }
    
    return num;
}

int main() {
    int num, oper_type;
    
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);
    
    printf("Enter operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);
    
    int result = bit_operations(num, oper_type);
    printf("Result: %d\n", result);
    
    return 0;
}
