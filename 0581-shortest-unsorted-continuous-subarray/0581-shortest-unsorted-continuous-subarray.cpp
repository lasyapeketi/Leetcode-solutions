class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=-1,right=-1;

        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                left=i-1;
                break;
            }
        }

        if(left==-1)
            return 0;

        for(int i=n-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                right=i+1;
                break;
            }
        }

        int mini=nums[left];
        int maxi=nums[left];

        for(int i=left;i<=right;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }

        while(left>0 && nums[left-1]>mini)
            left--;

        while(right<n-1 && nums[right+1]<maxi)
            right++;

        return right-left+1;
    }
};