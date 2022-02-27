// functionthat returns average and percentage
#include <stdio.h>
void result(int,int,int,float*,float*);
int main()
{
    float avg,per;
    int a,b, c;
    printf("enter marks in three subjects");
    scanf("%d%d%d",&a,&b,&c);
    result(a,b,c,&avg,&per);
    printf("Average=%f\n Persentage=%f\n",avg,per);
    return 0;

}
void result(int a,int b,int c,float*avg,float*per)
{
    *per=*avg=(a+b+c)/3.0;
    
}