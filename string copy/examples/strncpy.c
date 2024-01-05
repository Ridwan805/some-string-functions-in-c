#include <stdio.h>
#include <string.h>

int main() {

    char source[13] = "Hello World!";
    char destination[6];
     
    strncpy(destination,source,sizeof(destination)); /* THis will store the the characters upto
                                                      sizeof(destination) in the destination string array */ 
    
    destination[sizeof(destination) - 1] = '\0'; // this adds the null charracter at the end of the array
    

    printf("Source is %s\nDestination is %s",source,destination);

    return 0;
}

