/*
    Write a program in C to count total number of vowel or consonant in a string.
    Test Data :
    Input the string : Welcome to w3resource.com

    Expected Output :

    The total number of vowel in the string is : 9
    The total number of consonant in the string is : 12
*/
#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i = 0, vowel = 0, consonant = 0;

    while(str[i] != '\0'){

        if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u' || str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'){
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonant++;
        }

        i++;
    }

    printf("Vowel : %d\nConsonant %d\n", vowel, consonant);

    return 0;
}
