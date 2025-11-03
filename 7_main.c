//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
void reverseArray(int arr[],int length)
{
    int left=0;
    int right=length-1;
    int a;
    while(left<right)
    {
        a=arr[left];
       arr[left]=arr[right];
       arr[right]=a;
       left++;
       right--;
    }
}


    int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {scanf("%d",&arr[i]);}
    reverseArray(arr, 5);
    for(int i=0;i<5;i++)
    if(i==0)
    {printf("%d",arr[i]);}
    else 
    {printf(" %d",arr[i]);}
    return 0;
}
