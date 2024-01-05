#include <stdio.h>
#include <string.h>

int main() {

    char str1[2000] = "Hello World!";
    char str2[2000];
    char str3[2000];
     
    strcpy(str3,strcpy(str2,str1));

    printf("Str1 is %s\nStr2 is %s\nStr3 is %s",str1,str2,str3);

    return 0;
}


