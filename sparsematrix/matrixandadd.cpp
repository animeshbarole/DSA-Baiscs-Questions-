#include<iostream>
using namespace std;

class elements
{
   public:
   int i;
   int j;
   int x;  
};

class sparse
{
   private:
   int m;
   int n;
   int num; //Number of non zero elements
   elements *ele;

   public:

     sparse()
     {
         m=0;
         n=0;
         num=0;
         ele = new elements[num];
     }
     sparse(int a,int b,int c)
     {
         m=a;
         n=b;
         num=c;
         ele = new elements[num];//dynamically array created
     }
     
     ~sparse()
     {
         delete []ele;
     }

     sparse operator +(sparse &s);

    friend istream & operator>>(istream &is,sparse &s);
    friend ostream & operator<<(ostream &os,sparse &s);

}; 
 
 sparse sparse::operator+(sparse &s)
 {
    int i,j,k;
    
  
    i=j=k=0;
    sparse *sum=new sparse(m,n,num + s.num);
    while(i<num && j<s.num)
    {
       if(ele[i].i<ele[j].j)
       {
           sum->ele[k++]=ele[i++];
       }
       else if(ele[i].i>ele[j].j)  //This is for the condition for Row 
       {
           sum->ele[k++]=ele[j++];
       }
       else
       
       {

           if(ele[i].j<ele[j].j)   //It for coloumns which one is smaller or bigger 
           {
               sum->ele[k++]=ele[i++];
           }
           
          else if(ele[i].j>ele[j].j)
           {
               sum->ele[k++]=ele[j++];
           }
            
           else
           {
             sum->ele[k]=ele[i];
             sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
           } 

       }


    }

      sum->num = k;

      return *sum; //We have to return with pointer because we created it dynamically

     




 }


 istream & operator>>(istream &is,sparse &s)
     {
         for (int i = 0; i < s.num; i++)
         {
             is>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
         }
         return is;
     }

ostream & operator<<(ostream &os,sparse &s)
         {
             for(int i=0;i<s.m;i++)
             {
                 for(int j=0;j<s.n;j++)
                 {
                      if(i==s.ele[i].i&& j ==s.ele[i].j)
                         os<<s.ele[i].x<<" ";
                      else
                        os<<"0 ";

                 }
                 os<<endl;
             }
             return os;
         }
     

int main()
{
  sparse s1(5,5,5);
  sparse s2(5,5,5);
  cin>>s1;
  cin>>s2;
  
sparse sum = s1+s2;
  
  cout<<"Firs Array"<<s1<<endl;
  cout<<"2  Array"<<s2<<endl;
  cout<<"sum Array"<<sum<<endl;

  return 0 ;
}