#include <stdio.h>

int main()
{
    int i , sum = 0;
    for(int i = 1 ; i <= 10 ; i++){
        sum = sum + i;  /*  sum += i  */
    }
    printf("sum = %d\n" , sum);

    return 0;
}
