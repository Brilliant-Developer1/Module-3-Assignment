#include <stdio.h>
int main()
{

    int punjabi = 1000;
    int my_shoe = 500;
    int input;
    int sum = punjabi + my_shoe;
    scanf("%d", &input);

    if (input >= sum)
    {
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }
    else if (input > punjabi)
    {
        printf("I will buy Punjabi");
    }

    else
        (
            printf("Bad luck!"));

    return 0;
}