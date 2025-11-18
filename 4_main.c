//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
void f(int *arr,int length)
{
    int *p=arr;
    for(int i=0;i<length;i++)
    {
        (*p)++;
        p++;
    }

}
int main()
{
    int arr[5];
    int i;
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
