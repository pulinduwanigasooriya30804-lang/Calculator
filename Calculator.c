#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator1 ;
    float num3,num2,result ;
    printf("Enter the first number : ");
    scanf("%f" ,&num3);
    printf("Enter the second number : ");
    scanf("%f" , &num2);
    printf("Enter the operator(+,-,*,/) :");
    scanf(" %c",&operator1);
    if ( operator1 == '+')
    {
        printf ("Your answer is : %.2f",num3+num2);
    }
    else if ( operator1 == '-')
    {
        printf ("Your answer is : %.2f",num3-num2);
    }
    else if ( operator1 == '*')
    {
        printf("Your answer is : %.2f",num3*num2);
    }
    else if ( operator1 == '/')
    {
        printf("Your answer is : %.2f",num3/num2);
    }

    return 0;
}
