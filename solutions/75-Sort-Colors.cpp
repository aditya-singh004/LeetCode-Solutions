class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int p=0;
        int r=nums.size()-1;

        while(p<=r){
            if(nums[p]==0){
                swap(nums[p],nums[l]);
                p++;
                l++;
            }
            else if(nums[p]==2){
                swap(nums[p], nums[r]);
                r--;
            }
            else p++;
        }
    }
};