//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int main()
{
    int i=100;
    
    while(i<=999)
    {
        int a=i/100;
        int b=(i/10)%10;
        int c=i%10;
        if (a*a*a+b*b*b+c*c*c==i)
       {
        printf("%d ",i);
      }
     i++;
  
    }
     
      printf("\b");
     return 0;
}
