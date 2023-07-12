#include<stdio.h>


void fun1(int x)
{
    if(x>0)
    {
        printf("%d",x);
        fun1(x-1); 
        fun1(x-1);
    }

}

int main()
{
   int a= 3;
   fun1(a);

   return 0 ;
}