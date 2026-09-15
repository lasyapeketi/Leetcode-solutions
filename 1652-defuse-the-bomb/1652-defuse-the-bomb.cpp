class Solution {
public:
    vector<int> decrypt(vector<int>& code,int k) {
        int n=code.size();
        vector<int> answer(n,0);

        if(k==0)
            return answer;

        for(int i=0;i<n;i++){
            int sum=0;

            if(k>0){
                for(int j=1;j<=k;j++){
                    sum+=code[(i+j)%n];
                }
            }
            else{
                for(int j=1;j<=-k;j++){
                    sum+=code[(i-j+n)%n];
                }
            }

            answer[i]=sum;
        }

        return answer;
    }
};