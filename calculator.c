#include <stdio.h>
int main()
{
    float a;
    char b;
    float c;
    float result;
    printf("enter the value of a\n");
    scanf("%f", &a);
    printf("enter the Operator\n");
    scanf("\n%c", &b);
    printf("enter the value of c\n");
    scanf("%f", &c);
    switch (b)
    {
    case '-':
        result = a - c;
        printf("Result is : %.3f", result = a - c);
        break;
    case '+':
        result = a + c;
        printf("Result is : %.3f", result = a + c);
        break;
    case '*':
        result = a * c;
        printf("Result is : %.3f", result = a * c);
        break;
    case '/':
        result = a / c;
        printf("Result is : %.3f", result = a / c);
        return 0;
    }
}
