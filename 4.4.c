#include <stdio.h>
int main()
{
    char L;

    printf("Enter a letter: ");
    scanf("%c", &L);

    switch (L) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.\n", L);
            break;
        default:
            printf("%c is not a vowel.\n", L);
            break;
    }

    return 0;
}
