//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        int num;
        do{
            scanf("%d",&num);
        }
        while (num % 2 !=0);
        arr[i]=num;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\b");
    return 0;


}
