class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();


        //brute
        // for(int i=1;i<n;i++){
        //     int flag=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[j]==i){
        //             flag=1;
        //             break;
        //         }
        //     }
        //     if(flag==0) return i;
        // }
        // return -1;



        //better with sum
        int sum= n*(n+1)/2;
        int s2=0;

        for(int i=0;i<n;i++){
            s2 += nums[i];
        }
        return (sum-s2);
    }
};