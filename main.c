#include <stdio.h>

int add_mul_1 (int *, int );
int add_mul_2 (int , int );
void add_mul_3 (int x[]);
int mul;

int main(void)
{
    int a,b,add,mull,x[4];
    printf("Enter two variables\n");
    scanf("%d",&a);
    scanf("%d",&b);
    mull=add_mul_1(&a,b);
    printf("add :%d  mul :%d\n",a,mull);
    printf("\n***************************************************************\n");
    printf("Enter two variables\n");
    scanf("%d",&a);
    scanf("%d",&b);
    add=add_mul_2(a, b);
    printf("add :%d  mul :%d\n",add,mul);
    printf("\n***************************************************************\n");
    printf("Enter two variables\n");
    scanf("%d",&x[0]);
    scanf("%d",&x[1]);
    add_mul_3(x);
    printf("add :%d  mul :%d\n",x[2],x[3]);
    return 0;
}

int add_mul_1 (int *a, int b)
{
   *a+=b;
   return ((*a-b)*b) ;
}

int add_mul_2 (int a, int b)
{
    mul=a*b;
    return a+b;
}

void add_mul_3 (int x[])
{
    x[2]=x[0]+x[1];
    x[3]=x[0]*x[1];
}


