//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int main()
{
    int arr[10];
    int i,j,a;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<9;i++)
    {for(j=0;j<9-i;j++)
    {if (arr[j]>arr[j+1])
        {
            a=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=a;
        }
       
    }
    }
    for(i=0;i<10;i++)
    {if(i==0)
        printf("%d",arr[i]);
    else 
    {
        printf(" %d",arr[i]);
    }
   
    }
 return 0;
}
