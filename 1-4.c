/*
    Write a program in C to display the pattern like right angle triangle using an asterisk.
    The pattern like :

    *
    **
    ***
    ****
*/

#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for(i = 0; i<n ; i++)
    {
        for(j = 0; j<i; j++){
            printf("*");
        }

         printf("\n");

    }

    return 0;
}
