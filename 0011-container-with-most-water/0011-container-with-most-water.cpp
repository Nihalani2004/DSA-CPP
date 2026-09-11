class Solution {
public:
    int maxArea(vector<int>& height) {
        

        //brute approach 
        // int maxwater =0;
        // int n= height.size();

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int w=j-i;
        //         int ht = min(height[i],height[j]);
        //         int area = w * ht;

        //         maxwater = max(maxwater,area);
        //     }
        // }
        // return maxwater;



        //optimal appraoach
        int maxwater = 0;
        int n=height.size();
        int lp=0;
        int rp=n-1;

        while(lp<rp){
            int w= rp-lp;
            int ht = min(height[lp], height[rp]);
            int currwater = w*ht;
            maxwater = max(maxwater,currwater);

            height[lp]<height[rp] ? lp++ : rp--;
        }
        return maxwater;
    }
};