class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
       int n =nums.size();
        for(int i=0;i<n-1;i++)
        {
             if(nums[i]==nums[i+1])
             {
                 nums[i]=nums[i]*2;
                 nums[i+1]=0;
             }
        }
        vector<int> ans;
        stack<int> s;
        for(int i=0;i<n;i++)
        {
              if(nums[i]==0)
              {
                s.push(nums[i]);  
              }
            else
            {
                ans.push_back(nums[i]);
            }
        }
        while(!s.empty())
        {
            int a=s.top();
            s.pop();
            ans.push_back(a);
        }
        
       return ans; 
    }
};