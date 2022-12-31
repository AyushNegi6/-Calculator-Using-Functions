#include <stdio.h>
int add()
{
    int a,b,sum;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    sum=a+b;
    printf("sum is %d",sum);
}

int sub()
{
    int a,b,sub;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    sub=a-b;
    printf("sub is %d",sub);
}

int mul()
{
    int a,b,mul;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    mul=a*b;
    printf("mul is %d",mul);
}

int div()
{
    int a,b,div;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    div=a/b;
    printf("div is %d",div);
}

int mod()
{
    int a,b,mod;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    mod=a%b;
    printf("mod is %d",mod);
}

int main()
{
    int n ;

    printf("1.ADDITION\n");
    printf("2.SUBTRACT\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n");
    printf("5.MODULUS\n");
    printf("\n");
    printf("\n");
    printf("ENTER INPUT\n");
    scanf("%d",&n);
    if(n==1)
    {
      add();
    }

    else if(n==2)
    {
        sub();
    }

    else if(n==3)
    {
        mul();
    }
    
    else if(n==4)
    {
        div();
    }

    else if(n==5)
    {
        mod();
    }
}