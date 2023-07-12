#include<iostream>
using namespace std;

//int fun1(int x)
//{
//    //int d;
//    static int e = 0;
//    if(x>0)
//    {
//
//        e++;
//        return fun1(x-1)+e;
//        
//         
//    }
//  
//   return 0;
//
//}
//
//int main()
//{
//    int a = 5;
//    cout<<fun1(a)<<endl;
//}

int fun1(int x)
{
    int d;
    static int e = 0;
    if(x>0)
    {

        e++;
        d= fun1(x-1)+e;
        
         return d;
    }
  
   return 0;

}

int main()
{
    int a = 5;
    cout<<fun1(a)<<endl;
}



