#include <stdio.h>
#include <string.h>

int main(){

    char str1[40]="welcome ";
    char str2[40];
    int n;

    // strlen
    printf("%d\n",strlen(str1));

    //strcpy
    strcpy(str2,str1);
    printf("%s\n",str2);

    //strcmp
    printf("%d\n",strcmp(str1,str2));

    //strcat
    strcat(str2,str1);
    printf("%s\n",str2);

    return 0;
}