class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=00;
        for (int x:s) {        
            if (s.find(x-1)==s.end()) {   
                int count = 1;
                while (s.find(x+count)!=s.end())
                    count++;
                ans = max(ans,count);
            }
        }

        return ans;
    }
};