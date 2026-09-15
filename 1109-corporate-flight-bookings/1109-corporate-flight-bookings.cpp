class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n+2,0);

        for(auto booking:bookings){
            int first=booking[0];
            int last=booking[1];
            int seats=booking[2];

            diff[first]+=seats;
            diff[last+1]-=seats;
        }

        vector<int> answer(n);
        int sum=0;

        for(int i=1;i<=n;i++){
            sum+=diff[i];
            answer[i-1]=sum;
        }

        return answer;
    }
};