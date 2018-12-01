/*
    Write a C program to find the eligibility of admission for a professional course based on the following criteria.
    Marks in Maths >=65
    Marks in Phy >=55
    Marks in Chem>=50
    Total in all three subject >=180
    or
    Total in Math and Subjects >=140

    Test Data :
    Input the marks obtained in Physics :65
    Input the marks obtained in Chemistry :51
    Input the marks obtained in Mathematics :72
    Expected Output :
    The candidate is eligible for admission

*/

#include<stdio.h>

int main()
{
    int math, phy, chem , total_three = 0, total_math_physubject = 0, total_math_chysubject = 0;

    while(1){
        printf("Enter Mathematics marks : ");
        scanf("%d", &math);
        printf("Enter Physics marks : ");
        scanf("%d", &phy);
        printf("Enter chemistry marks : ");
        scanf("%d", &chem);

        total_three = (math+phy+chem);
        total_math_physubject = (math+phy);
        total_math_chysubject = (math+chem);

        if(math >= 65 && phy >= 55 && chem >= 50){
            if(total_three >= 180 || total_math_physubject >= 140 || total_math_chysubject >= 140){
                printf("The candidate is eligible for admission.\n");
            }else{
                printf("Sorry! The candidate is not eligible for admission.\n");
            }
        }else{
            printf("Sorry! The candidate is not eligible for admission.\n");
        }

    }

    return 0;

}
