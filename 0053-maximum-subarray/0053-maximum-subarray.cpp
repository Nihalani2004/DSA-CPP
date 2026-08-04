class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();

        long long sum=0, max=INT_MIN;
        long long start=0;
        long long ansstart=-1, ansend=-1;

        for(int i=0;i<n;i++){
            if(sum == 0) start=i;

            sum += nums[i];
            if(sum>max){
                max=sum;
                ansstart=start;
                ansend=i;
            }

            if(sum<0){
                sum=0;
            }
        }
        // if(max<0){
        //     return 0;
        // }
        return max;
    }
};