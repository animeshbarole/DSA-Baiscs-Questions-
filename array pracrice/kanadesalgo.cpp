#include<bits/stdc++.h>
using namespace std;

//We Can do Maximum subarray question by applying two loops and compare maximum among them 
//but instead of it we can apply KANADES ALGORITHM

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum = 0;
        int n  = nums.size();
        int max_sum = INT_MIN;
        
        for(int i =0;i<n;i++)
        {
            cursum = cursum+nums[i];
            if(cursum>max_sum)
            {
                max_sum = cursum;
            }
          if(cursum<0)
            {
                cursum = 0;
            }
        }
        return max_sum;
    }
};


int main()
{
    vector<int> v = {1,5,-3,2,6,-4,6};
    Solution s;
    cout<<"Maximum sub array is "<<s.maxSubArray(v);
    

}