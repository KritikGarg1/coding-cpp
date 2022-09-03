int maxSubArray(vector<int>& nums) {
        
        int sm=nums[0];
        int x=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            sm=max(sm+nums[i],nums[i]);
            x=max(x,sm);
        }
        return x;
    }
