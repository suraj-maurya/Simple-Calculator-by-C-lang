#include <stdio.h>
#include <conio.h>

int main()
{
    int n, Result;
    char op;
    printf("Enter the frist number ");
    scanf("%d", &Result);

    while (op != '=')
    {
        printf("Enter the operator ");
        scanf(" %c", &op);
        if (op != '=')
        {

            printf("Enter the next number ");
            scanf("%d", &n);
            if (op == '+')
            {
                Result = Result + n;
                printf("%d\n", Result);
            }
            else if (op == '-')
            {
                Result = Result - n;
                printf("%d\n", Result);
            }
            else if (op == '*')
            {
                Result = Result * n;
                printf("%d\n", Result);
            }
            else if (op == '/')
            {
                Result = Result / n;
                printf("%d\n", Result);
            }
        }
    };
    printf("Total = %d", Result);

    return 0;
}
