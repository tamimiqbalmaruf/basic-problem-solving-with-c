#include <stdio.h>

int main()
{
    char X;
    scanf("%c", &X);

    int charNumber = X;

    if (charNumber >= 97 && charNumber <= 122)
    {
        printf("%c", charNumber - 32);
    }
    else if (charNumber >= 65 && charNumber <= 90)
    {
        printf("%c", charNumber + 32);
    }

    return 0;
};