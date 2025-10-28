//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int main()
{
    int arr[5];
    int sum=0;
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    arr[4]=sum;
    for(int i=0;i<5;i++)
    {printf("%d ",arr[i]);}
    printf("\b");
    return 0;






}
