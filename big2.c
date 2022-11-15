#include <stdio.h>
biggest()
{
    int num1, num2;
    // Ask user to enter the two numbers
    printf("Please Enter Two different values\n");
    // Read two numbers from the user
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is Largest amongst all the numbers\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is Largest amongst all the numbers\n", num2);
    }
    else
    {
        printf("Both are Equal numbers\n");
    }
   // return 0;
}
