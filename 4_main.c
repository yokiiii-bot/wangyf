//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int power(int a,int b){
    int result=1;
    for (int i=0;i<b;i++)
    {result*=a;}
    return result;
}
int main()
{
    int sum=power(1,2)+power(2,2)+power(3,2)+power(4,2)+power(5,2);
    printf("%d\n",sum);
    return 0;
}
