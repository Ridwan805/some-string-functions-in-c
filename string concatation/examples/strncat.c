#include <stdio.h>
#include <string.h> 

int main(){
    char str1[100] = "Hello ";
    char str2[40] = "everyone!"; // here we want to take the character upto r
    strncat(str1, str2, 4); // we gave 4 as the argument so that it takes the characters before y
    printf("%s", str1);
}


