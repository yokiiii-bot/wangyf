//202511716123
//17325356009@163.com
//王一帆
#include<stdio.h>
int main()
{
   int n;
   int is_prime=1;
   int i;
   
    printf("请输入小于50的正整数:");
    scanf("%d",&n);

    if (n>=50)
    {
    printf("请重新输入");
    return 0;
    }

    if(n<=1)
     {
        is_prime=0;
     }

     else if(n==2)
     {
        is_prime=1;
     }
     else if(n%2==0)
     {
         is_prime=0;
     }
     else{
       n=3;
       while(i*i<=n)
        {
            if (n%i==0)
           { is_prime=0;
            break;
        }
        i+=2;
     }

    }

     if(is_prime)
     {printf("密钥安全，密码设置成功\n");}
     else
     {printf("密钥不安全，请重新输入\n");}
     return 0;
}
