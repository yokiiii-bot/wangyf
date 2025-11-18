//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr_ptr;
    int num=5;
    arr_ptr=(int*)malloc(num*sizeof(int));
    printf("请输入\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr_ptr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr_ptr[i]);
    }
    printf("\n");
    free(arr_ptr);
    arr_ptr=NULL;
    return 0;
}


