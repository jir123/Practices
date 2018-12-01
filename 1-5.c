/*
     Write a program in C to find the length of a string without using library function.
        Test Data :
        Input the string : w3resource.com

        Expected Output :

        Length of the string is : 15
*/
#include<stdio.h>
#include<string.h>

int  main()
{
    int str[50],  l = 0;

    printf("Enter a string : ");
    scanf("%s", &str);
    printf("%s\n", str);

    while(str[l]!='\0')
    {
        l++;
    }
    printf("sum : %d", l);
    return 0;
}
