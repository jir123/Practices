/*
    Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
    Test Data : 7 9
    Expected Output :
    The coordinate point (7,9) lies in the First quadrant.
*/
#include<stdio.h>

int main(){

    int x,y;
    char ch;

    while(1){
        printf("Press any key to continue. If exit enter Y or y! ");
        scanf("%s", &ch);
        if(ch ==  'y' || ch == 'Y'){
            break;
        }
        else{
            printf("\nEnter a coordinate point in (x, y) : ");
            scanf("%d", &x);
            scanf("%d", &y);

            if(x == 0 && y == 0){
                printf("(%d, %d) is in origin point.\n\n", x,y);
            }
            else if (x > 0 && y > 0){
               printf("(%d, %d) is in first coordinate.\n\n", x,y);
            }
            else if (x < 0 && y > 0){
               printf("(%d, %d) is in second coordinate.\n\n", x,y);
            }
            else if (x < 0 && y < 0){
               printf("(%d, %d) is in third coordinate.\n\n", x,y);
            }
            else if (x > 0 && y < 0){
               printf("(%d, %d) is in fourth coordinate.\n\n", x,y);
            }
        }
    }

    return 0;
}
