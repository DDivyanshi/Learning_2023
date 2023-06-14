#include <stdio.h>

int Vowel(char c) {
    int Vowel = 0; 
    
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            Vowel = 1; 
            break;
        default:
            Vowel = 0; 
            break;
    }
    
    return isVowel;
}

int main() {
    char character;
    
    printf("Enter a character: ");
    scanf(" %c", &character);
    
    int result = Vowel(character);
    
    if (result == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }
    
    return 0;
}
