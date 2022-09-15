#include<stdio.h>
#include<math.h>
void main()
{
    double interval ;
    int i;
    for(i=0;i<30;i++)
    {
        interval = i/10.0;
        printf("sin(%f) = %f \t \n",interval,fabs(sin(interval)));
    }
printf("\n+++++++\n");
}