#include <stdio.h>
#include <string.h>

int main(){
    char str1[100] = "abdcasf01521786";
    char str2[100] = "0123456789";


    int x = strcspn(str1,str2);

    printf("the first match index is: %d", x);

    char *rest = str1 + x; 

    printf("\nThe string or number of characters after the match is found is %s ", rest);


    return 0;

}




