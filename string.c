#include <stdio.h>



int main(){
    //declaring a string with 20 spaces , 19 for characters and 1 for '\0'
    // and initializing the string 
    char a[20]= "Hello, World!123456";
    //printing a string
    printf("%s\n",a);
    printf("%30s\n",a);
    printf("%.13s\n",a);
    printf("%30.13s\n",a);
    
    return 0;
} 