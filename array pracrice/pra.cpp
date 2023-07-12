#include<iostream>
#include<
using namespace std;


int separateStones(int N, int K, vector<int> &arr) {
        
         unordered_map<int,int> mp;
             
             int ans = 0;
             for(int i =0;i<arr.size();i++)
             {
                 mp[arr[i]]++;
             }
             
             
             for(auto it : mp)
             {
                 
                 ans = ans +it.second/K;
             }
             
         return ans;


int main()
{
     vector<int> arr = [1,0,1,0,1];

}