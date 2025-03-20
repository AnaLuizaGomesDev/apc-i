#include <stdio.h>

int main(){
    printf("%8.0i %1.1i\n",1,1);
    printf("%7.1i %1.1i %1.1i\n",1,2,1);
    printf("%5.1i %1.1i %1.1i %1.1i %1.1i\n",1,2,3,2,1);
    printf("%3.1i %1.1i %1.1i %1.1i %1.1i %1.1i %1.1i\n",1,2,3,5,3,2,1);
    printf("%i %1.1i %1.1i %1.1i %1.1i %1.1i %1.1i %1.1i %1.1i\n",1,2,3,5,8,5,3,2,1);
    return 0;
}