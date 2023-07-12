#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int>  solve(int arr1[],int n)
{
   
    vector<int> ans;
    unordered_map<int,int> mp;
     for(int i = 0;i<n;i++)
     {
        mp[arr1[i]]++;
     }   

     for(auto it :mp)
     {
        if(it.second==1)
        {
            ans.push_back(it.first);
        }
     }

     return ans ;
}




int main()
{
    vector<int> ans;
    int arr1[10] = {2,3,4,5,6,2,3,6};
   ans= solve(arr1,10);
    
    for(int i = 0;i<ans.size();i++)
    {
       cout<<ans[i]<<endl;
    }
}