#include <stdio.h>

int Greatest(int n1, int n2, int n3) {
    int greatest = num1;
    
    if (n2 > greatest)
        greatest = n2;
    
    if (n3 > greatest)
        greatest = n3;
    
    return greatest;
}

int main() {
    int n1, n2, n3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    int result = Greatest(n1, n2, n3);
    printf("The greatest number is: %d\n", result);
    
    return 0
}
