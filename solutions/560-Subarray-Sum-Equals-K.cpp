class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int cnt=0;
        unordered_map<int, int> psm;
        psm[0]=1;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            int rem= sum-k;
            if(psm.find(rem) != psm.end()){
                cnt+=psm[rem];
            }
            psm[sum]++;
        }
        return cnt;
    }
};