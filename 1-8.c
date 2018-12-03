/*Write a program in C to count total number of alphabets, digits and special characters in a string.
    Test Data :
    Input the string : Welcome to w3resource.com

    Expected Output :

    Number of Alphabets in the string is : 21
    Number of Digits in the string is : 1
    Number of Special characters in the string is : 4
*/
#include<stdio.h>
int main(){
    char str[100];

    int i  = 0, alp =0, num = 0, spec = 0;
    gets(str);

    while(str[i] !='\0'){
        if((str[i] >= 'a' && str[i]<='z') || (str[i] >= 'A' && str <= 'Z') ){
            alp++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            num++;
        }
        else
        {
            spec++;
        }

        i++;
    }

    printf("Alphabets : %d\nNumber : %d\nSpecial Character : %d\n", alp, num, spec);

}
