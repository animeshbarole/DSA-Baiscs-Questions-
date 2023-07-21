#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 
 vector<int> NSL(vector<int> &arr)
    {
        stack<pair<int,int>> st;
        int n = arr.size();
        vector<int> ans;    
        for(int i =0;i<n;i++)
        {
             if(st.size()==0)
             {
                 ans.push_back(-1);
             }
             else if(st.size()>0&&st.top().first<arr[i])
             {
                 ans.push_back(st.top().second);
             }
             else if(st.size()>0&&st.top().first>=arr[i])
             {
                 while(st.size()>0&&st.top().first>=arr[i])
                 {
                     st.pop();
                 }
                 if(st.size()==0)
                 {
                     ans.push_back(-1);
                 }
                 else
                 {
                     ans.push_back(st.top().second);
                 }
             }
             st.push({arr[i],i});
        }
        return ans;
    }

     vector<int> NSR(vector<int> &arr)
    {
        stack<pair<int,int>> st;
        int n = arr.size();
        vector<int> ans;    
        for(int i =n-1;i>=0;i--)
        {
             if(st.size()==0)
             {
                 ans.push_back(n);
             }
             else if(st.size()>0&&st.top().first<arr[i])
             {
                 ans.push_back(st.top().second);
             }
             else if(st.size()>0&&st.top().first>=arr[i])
             {
                 while(st.size()>0&&st.top().first>=arr[i])
                 {
                     st.pop();
                 }
                 if(st.size()==0)
                 {
                     ans.push_back(n);
                 }
                 else
                 {
                     ans.push_back(st.top().second);
                 }
             }
             st.push({arr[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
   

   int main()
   {
       vector<int> arr = {3,1,2,4};
       int n =arr.size();
       vector<int> left = NSL(arr);
       vector<int> right = NSR(arr);

       vector<int>leftsubarray(n);
       vector<int>rightsubarray(n);

       for(int i =0;i<left.size();i++)
       {
          leftsubarray[i] = abs(i-left[i]);
          rightsubarray[i] = abs(i-right[i]);
       }

       
       vector<int>  productSubarray;
       
         for(int i =0;i<arr.size();i++)
       {
            
            productSubarray.push_back(leftsubarray[i]*rightsubarray[i]);
           
       }
    
     int sum = 0;

         for(int i =0;i<arr.size();i++)
       {
           sum +=  arr[i]*productSubarray[i];
           
       }
       
       
      
        for(int i =0;i<arr.size();i++)
       {
            cout<<left[i]<<" ";
            
           
       }
       cout<<endl;
         for(int i =0;i<arr.size();i++)
       {
            cout<<right[i]<<" ";
           
       }
       


       cout<<endl;
       for(int i =0;i<arr.size();i++)
       {
            cout<<leftsubarray[i]<<" ";
           
       }
       cout<<endl;
         for(int i =0;i<arr.size();i++)
       {
            cout<<rightsubarray[i]<<" ";
           
       }

      cout<<endl;

       cout<<sum;
   }