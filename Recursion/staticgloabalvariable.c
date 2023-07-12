
//Example of static variable 
#include<stdio.h>

int fun1(int a)  
{
    static int b = 0; //It is static only once stored in the code section 
    if(a>0)
    { 
        b++; 
        return fun1(a-1)+b;//Recursive function = fun1(a-1) <-
                           //first this implemented then the value of b is added in the return phase 
        
    }

}
//If we do it without static variable and add 'a' in the recursive function then the results change 
int main()
{
        
  int x=5;
  printf("%d",fun1(x));   
    
   return 0;
}





