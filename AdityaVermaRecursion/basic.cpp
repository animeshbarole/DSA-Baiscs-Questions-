#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   map <int ,string> m;
   m[1] = "abc";
   m[6] = "ghd";
   m[4] = "alc";
   m.insert({5,"acd"});
   map<int ,string> :: iterator it;
   for(it = m.begin();it != m.end();it++)
   {
       cout<<it->first<<" "<<it->second<<" ";
   }
}