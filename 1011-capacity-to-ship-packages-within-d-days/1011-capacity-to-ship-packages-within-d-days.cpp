class Solution {
public:
    int shipWithinDays(vector<int>& weights, int d) {
        int l=-1,r=0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            r+=weights[i];
            l=max(l,weights[i]);
        }
        while(l<r){
            int mid=(l+r)/2;
            int need=1,curr=0;
            for(int i=0;i<n;curr+=weights[i++]){
                if(curr+weights[i]>mid){
                    need +=1; 
                    curr = 0;
                }
            }
            if(need > d)l=mid+1;
            else r = mid;
        }
        return l;
    }
};