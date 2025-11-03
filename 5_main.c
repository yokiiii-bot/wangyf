//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int arithmeticSum(int a1,int an,int step)
{
   int n=(an-a1)/step+1;
   return(a1+an)*n/2;

}
int main()
{
    int sum=arithmeticSum(1, 100, 1);
    printf("%d\n",sum);
    return 0;
}



