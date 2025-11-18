//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
void swap(int *a, int *b)
{
    void swap(int *a, int *b);
    int temp = *a; 
    *a = *b; 
    *b = temp;
}
int main()
{
    int x,y;
    printf("请输入两个整数\n");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}
