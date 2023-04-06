#include <stdio.h>
int main()
{

    int input;
    scanf("%d", &input);
    if (input % 3 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}