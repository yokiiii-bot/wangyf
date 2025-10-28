//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    for(i=0;i<4;i++)
    {
       scanf("%d",&arr[i]);
    }
    arr[4]=arr[3];
    arr[3]=arr[2];
    arr[2]=arr[1];
    arr[1]=arr[0];
    arr[0]=0;
    for (i=0;i<5;i++)
    {
        if(i==0)
        printf("%d",arr[i]);
        else
        printf(" %d",arr[i]);
    }
        return 0;



    }


