#include<stdio.h>
#include<math.h> //We have to include this file  for using power function 


int Pow(int x,int y) //Power function 
{
    if(y==0)
      return 1;  //2^0 is 1 
     if(y%2==0)
     {
         return Pow(x*x,y/2);  //refer copy for better explaination
                                // if there is even power then ultimatly we multiply same number 2*2 
                                //And power is devided by 2 
     } 
     else
     {
        return x*Pow(x*x,(y-1)/2); //And if it is odd then we subtract 1 from the power 
     }      //maintaing power 
            //We multiply it

     return 0;
}



int main()
{
    int a=2;
    int b=2;
   printf("%d",Pow(a,b));

   return 0 ;
}
