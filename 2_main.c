//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int main()
{
    int a,b,c,i;
    for(i=100;i<=999;i++)
    {
        a=i/100;
        b=(i/10)%10;
        c=i%10;
        if(i==a*a*a+b*b*b+c*c*c)
       { printf("%d ",i);}
    }
    printf("\b");
    return 0;
}
