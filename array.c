#include <stdio.h>


int main(){
    // index     0 1 2 3 4 5 6 7 8 9 
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    double b[10] = {12.3 , 34.3 , 45.3};
    b[2] = 78.9;

    // printf("third element of array a is %d",a[2]);
    printf("second element of array b is %f\n",b[1]);
    printf("third element of array b is %f",b[2]);
    return 0;
}