int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;int h=n-1;
        while(l<h){
            if(nums[l]<nums[h])
                return nums[l];
            int mid=(l+h)/2;
            if(nums[l]>nums[mid])
                h=mid;
            else
                l=mid+1;
                
        }
        return nums[l];
    }
