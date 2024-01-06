#include <stdio.h>
#include <string.h> 

int main(){
    
    char str1[100] = "strong";
    char final [100] = "";
    //suppose we want to store only s of strong in final
    strncat(final,&str1[0],1);
    printf("%s", final);
} 


