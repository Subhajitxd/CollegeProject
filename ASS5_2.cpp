#include <stdio.h>

int main() {
    char character;


    printf("Enter a character: ");
    scanf(" %c", &character);


    switch (character) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", character);
            break;
        default:
            printf("%c is not a vowel.\n", character);
            break;
    }

    return 0;
}

