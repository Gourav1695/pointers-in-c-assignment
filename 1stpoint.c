// sum=calsum(a,b,c);
// f=factr(a)
#include<stdio.h>
int main()
{
    int i=3;
    printf("Address of i = %u\n",&i);
    printf("Value of i=%d\n",i);
    printf("Value of i=%d\n",*(&i));
    return 0;
    

}