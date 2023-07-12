
#include <bits/stdc++.h>
using namespace std;
int main() {
  int count =0;
    // Write C++ code here
     set<string> s;
     s.insert("a");
     s.insert("b");
     s.insert("c");
     
     if(s.find("a")!=s.end())
     {
       count++;
     }  
       


     for(auto it : s)
     {
         cout<<it<<endl;
     }
     
     cout<<count;

    return 0;
}