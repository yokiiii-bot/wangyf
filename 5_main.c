//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
void f(int *aptr_arr,int len)
{
    int *p=aptr_arr;
    for(int i=len-2;i>=0;i--)
    {
       *(aptr_arr+i+1)= *(aptr_arr+i);
    }
    *aptr_arr=0;
}
int main()
{
    int i;
    int arr[5];
    printf("请输入\n");
    for(i=0;i<5;i++)
    {   
    scanf("%d",&arr[i]);
    }
    
    f(arr,5);
    for(i=0;i<5;i++)
    {   
    printf("%d ",arr[i]);
    }
 printf("\n");
    return 0;
}
