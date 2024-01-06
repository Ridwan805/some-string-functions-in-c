#include <stdio.h>
#include <string.h>

int main(){
    char str1[100] = "abcd";
    char str2[100] = "abce";

    if( strcmp(str1,str2) == 0){
        printf("both the strings are equal");
    }
    else if (strcmp(str1,str2) == 1){
        printf("str1 is greater than str2");
    }
    else if(strcmp(str1,str2) == -1){
        printf("str2 is greater than str1 ");
    }

    return 0;
}
