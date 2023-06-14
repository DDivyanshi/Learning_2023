#include <stdio.h>

int bit(int num, int oper_type, int pos) {
    int result = num; 

    switch (operation_type) {
        case 1:
            
            result = result | (0x3 << pos);
            break;
        case 2:
         
            result = result & ~(0x7 << pos);
            break;
        case 3:
          
            result = result ^ (1 << 31);
            break;
        default:
            printf("Invalid operation type\n");
            break;
    }

    return result;
}

int main() {
    int num, operation_type, pos;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    printf("Enter bit position: ");
    scanf("%d", &pos);

    int result = bit(num, operation_type, pos);
    printf("Result: %d\n", result);

    return 0;
}
