//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int main()
{
   int a=0;
   scanf("%d",&a);
   int *p=&a;
   *p=*p+10;
   printf("%d %p",*p,p);

   return 0;
}
