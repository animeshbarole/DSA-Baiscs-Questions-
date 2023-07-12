#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;


vector<int> uncomman(int arr1[],int arr2[])
{
    unordered_map<int>  mp;
    vector<int> ans;
    for(int i = 0;i<arr1.size();i++)
    {
        mp[arr1[i]]++;
    }

    for(int i = 0;i<arr2.size();i++)
    {
        if(mp.find(arr2[i])!=mp.end())
        {
            continue;
        }
        else 
        {
            ans.push_back(arr2[i]);
        }
    }

    return ans;
}


int main()
{
  int  arr1 [10] = {10,20,30,40,50};
  int   arr2[10] = {20,30,40};
  uncomman(arr1,arr2);
}