#include <stdio.h>

int MaxIfElse(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int MaxTernary(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int maxIfElse = MaxIfElse(num1, num2);
    int maxTernary = MaxTernary(num1, num2);
    
    printf("Using if-else, the biggest number is: %d\n", maxIfElse);
    printf("Using ternary operator, the biggest number is: %d\n", maxTernary);
    
    return 0;
}

