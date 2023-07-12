#include<iostream>
using namespace std;

class stack
{
    private:
   int size;
   int top;
   int *S;
   public:
    //Default constructor
   stack()
   {
       size = 10;
       top = -1;
       S = new int[size];
   }
   stack(int n)  //Alloting size of the array
   {
      size = n;
      top = -1;
      S = new int[size];
   }

   void push(int x)  //Baiscally it is creating the stack dynamically
{
      if(top==size-1)
      {
          cout<<"Stack Over flow"<<endl;
      }
      else
      {
          top++;
          S[top] = x;
      }
}

int pop()
{
    int x =-1;
    if(top==-1)
    {
        cout<<"stack Underflow"<<endl;
    }
    else
    {
        x = S[top];
        top--;
    }
    return x;
}

int peek(int p) //
{
    int x =-1;
    if(top-p+1<0)
    {
        cout<<"Invalid"<<endl;
    }
    else{
      x = S[top-p+1]; //Particular value at that index
    }
      return x;

}

int stacktop()  //We are returing the value at the top
{
    //int x=0;
    if(top==-1)
    {
        return -1;
    }
    else
        return S[top];
}

 int isfull()
 {
     return top==size-1;
 }
 int isempty()
 {
     return top ==-1;
 }


 void display()
 {
     for(int i = top;i>=0;i--)
     {
         cout<<S[i]<<endl;
     }
 }


};

int main()
{
    int size;
   // cout<<"Enter the size of the stack"<<endl;
   // cin>>size;
   stack st(5),st2;
   int s;
   for(int i = 1;i<=5;i++){
    cout<<"Enter the value in the index";
    cin>>s;   
   st.push(s);
   }
  // cout<<"Deleted value  "<<st.pop()<<endl;
  //cout<<"Data at particular postiton"<<st.peek(3)<<endl;
  //cout<<"Stack top value"<<st.stacktop()<<endl;
   
   st.display();
}