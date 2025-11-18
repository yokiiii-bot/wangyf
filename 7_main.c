//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
void bubble_sort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(*(arr+j)>*(arr+j+1))
            {int a=*(arr+j);
             *(arr+j)=*(arr+j+1);
            *(arr+j+1)=a;
            }
        }
    }
}
int main()
{
    int arr[10];
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("请输入\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
