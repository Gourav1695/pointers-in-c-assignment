// some programes to p[ractice]!!..
// function which returnss sum , average and standard deviation..
#include<stdio.h>
#include<math.h>
void stats (int*,int*,double*);
int main()
{
    int sum,avg;
    double stdev;
    stats(&sum,&avg,&stdev);//function call by refference..
    printf("Sum=%d\n Average=%d\n Standerd deviation=%lf\n",sum,avg,stdev);
    return 0;

}

void stats (int*sum ,int *avg,double*stdev)
    {
        int a,b,c,d,e;
        printf("\n Enter 5 numbers: ");
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        *sum=a+b+c+d+e;
        *avg=*sum/5;
        // calculation of sd
        *stdev=sqrt((pow((a-*avg),2.0)+pow((b-*avg),2.0)+pow((c-*avg),2.0)+pow((d-*avg),2.0)+pow((e-*avg),2.0))/4);


    }

