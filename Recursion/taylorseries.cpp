#include<iostream>
using namespace std;

double e(double a,double b)
{
    static double p=1;
    static double f=1; //Multiply with function to add;
    double r; //Storing the function value 

    if(b==0)
    {
        return 1;
    }
    else
    {
        r=e(a,b-1); //r is going to add in the function
        p=p*a;
        f=f*b;
        return r+p/f;
    }
   return 0;
}
//We need to apply double because there is a fraction 
double tal(double x,double n)
{
    static double s = 1;//We need static variable to store the value of sum and 
                     //static becz we dont have loop for increasing the value 
          if(n==0)
          {
              return s;
          }           
        else
        {
            s = 1+(x/n)*s;    //In this first you are multiplying then you are adding
                              //Here s is static means "1" is multipying with x/n so dose not affect on the result 
                              //in the returing time .  
            return tal(x,n-1);
        }

}

int main()
{
   double x = 1;
   double y = 10;
   cout<<tal(x,y)<<endl;
   cout<<e(x,y);
}


