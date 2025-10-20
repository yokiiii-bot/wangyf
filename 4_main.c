//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("请输入三个整数");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c &&a+c>b &&b+c>a)
    {printf("可以组成三角形");}
    else
    {printf("不可以组成三角形");}
    return 0;


}
