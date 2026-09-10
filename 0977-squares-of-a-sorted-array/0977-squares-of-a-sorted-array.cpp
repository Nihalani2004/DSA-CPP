class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();

        vector<int> ans(n);

        int left=0;
        int right=n-1;

        for(int i=n-1;i>=0;i--){

            int leftsq = nums[left] * nums[left];
            int rightsq = nums[right] * nums[right];


            if(leftsq > rightsq){
                ans[i] = leftsq;
                left++;
            }else{
                ans[i] = rightsq;
                right--;
            }
        }
        return ans;
    }
};