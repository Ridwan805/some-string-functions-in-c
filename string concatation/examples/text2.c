#include <stdio.h>
#include <string.h> 

int main(){
    char str1[100] = "Hello ";
    char str2[100] = "everyone!";
    char final [100] = "";
    strcat(final,&str1[1]); //here e is at index 1 so we start it from there.
    strcat(final,str2);
    printf("The string concatation of str1 from the letter e "
    "and str 2 is " 
    "%s+ %s = %s",str1,str2,final);
}


