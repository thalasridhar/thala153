/**
 * C program to check even or odd number using conditional operator
 */

#include <stdio.h>

int main()
{
    int num;

    /*
     * Input a number from user
     */
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    /* if(n%2==0) then it is even */
    (num%2 == 0) ? printf("The number is EVEN") : printf("The number is ODD");

    return 0;
}
