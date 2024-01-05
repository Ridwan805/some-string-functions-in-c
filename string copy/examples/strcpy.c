#include <stdio.h>
#include <string.h>

int main() {

    char source[13] = "Hello World!";
    char destination[13];
     
    strcpy(destination,source);

    printf("Source is %s\nDestination is %s",source,destination);

    return 0;
}


