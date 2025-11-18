//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int main()
{
    int arr[5];
    int *p=arr;
    int i;
    printf("请输入五个数字\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=arr;
    for(i=0;i<5;i++)
    {
        *p=*p*2;
        p++;
    }
    p=arr;
    for(i=0;i<5;i++)
    {
        printf("%d ",*p);
        p++;
    }
    printf("\n");
    return 0;

}
