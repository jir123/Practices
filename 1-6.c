/*
    Write a program in C to separate the individual characters from a string. Go to the editor
    Test Data :
    Input the string : w3resource.com

    Expected Output :

    The characters of the string are :
    w  3  r  e  s  o  u  r  c  e  .  c  o  m
*/
#include <string.h>
#include <stdio.h>

main() {

  char str[50];
  int i;

  printf("Input a string : ");

  scanf("%s", &str);
 // int strLength = strlen(str);

  for (i = 0; i < strlen(str); i++) {

        printf(" %c ", str[i]);

  }

  return 0;
}

