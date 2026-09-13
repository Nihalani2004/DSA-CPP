class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();

        //find the pivot
        int piv=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                piv=i;
                break;
            }
        }

        if(piv==-1){
            reverse(nums.begin(),nums.end());//in place changes
            return;
        }


        //find the just larger element than pivot
        for(int i=n-1;i>piv;i--){
            if(nums[i]>nums[piv]){
                swap(nums[i],nums[piv]);
                break;
            }
        }


        // reverse the rightmost element after pivot
        // int i=piv+1;
        // int j=n-1;
        // while(i<=j){
        //     swap(nums[i++],nums[j--]);
        // }
        reverse(nums.begin()+piv+1, nums.end());

    }
};