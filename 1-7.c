/*
    Write a C program that takes minutes  as input, and calculates the number of hour and  number of minutes.
    Expected Output :
    Input minutes: 137
    Output: 10 hours 17 minutes
*/
#include<stdio.h>

int main(){

    int hour, minute;



    while(1){
        printf("Input hours (exit to press 0) : ");
        scanf("%d", &minute);
        if(minute == 0){
            break;
        }
        else{

           hour = minute/60;
           minute = minute%60;

           printf(" %d hours %d minutes \n", hour, minute);

        }

    }

    return 0;
}
