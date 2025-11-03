//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int main()
{int arr[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {scanf("%d",&arr[i][j]);}
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        if(j==0)
        {printf("%d",arr[j][i]);}
        else  {printf(" %d",arr[j][i]);}
         printf("\n");
    }
   
    return 0;
    }
