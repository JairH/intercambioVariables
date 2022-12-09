#include <stdio.h>

int main () {
    int a = 2;
    int b = 3;
    printf("a= %d \n",a);
    printf("b= %d \n",b);
    a = (a ^ b);
    b = (a ^ b);
    a = (a ^ b);
    printf("a= %d \n",a);
    printf("b= %d \n",b);

}
