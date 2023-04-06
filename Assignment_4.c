#include <stdio.h>
int main()
{

    int i = 1;
    int input;
    scanf("%d", &input);
    for (i; i <= input; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}