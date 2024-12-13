#include <stdio.h>

int main()
{
    int code, password;
    printf("enter code id\n");
    scanf("%d", &code);

    switch (code)
    {
    case 2015:
        printf("Hii manish\n");

        printf("enter password\n");
        scanf("%d", &password);

        switch (password)
        {
        case 1993:
            printf("mission was started in area 502.6 watt\n");
            break;

        default:
            printf("password worng\n");
            break;
        }
        break;
    case 1586:
        printf("Hii rohan\n");
        break;
    case 3252:
        printf("Hii dumb\n");
        break;
    default:
        printf("request invalid\n tyr again");
    }
    return 0;
}