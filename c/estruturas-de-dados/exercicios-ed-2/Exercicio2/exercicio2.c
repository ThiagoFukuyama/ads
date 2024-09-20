
#include <stdio.h>

int main()
{
    char letters[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite a %da letra: ", i + 1);
        scanf(" %c", &letters[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\n%d - %c", i + 1, letters[i]);
    }

    return 0;
}
