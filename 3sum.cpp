vector<vector<int>> threeSum(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
            mp[nums[i]]=i+1;
        vector<vector<int>> ans;
        map<vector<int>,int> check;
        
        for(int i=0;i<n-2;i++)
        {
            int a=nums[i];
            if(a>0)break;
            for(int j=i+1;j<n-1;j++)
            {
                    int b=nums[j];
                    if(a+b>0)break;
                    int x=-a-b;
                    if(mp[x]-1>j)
                    {
                        vector<int> v={nums[i],nums[j],x};
                        if(check[v]==0)
                            ans.push_back(v);
                        check[v]=1;
                    }
                    j=mp[b]-1;
            }
            i=mp[a]-1;
        }
        return ans;
    }
