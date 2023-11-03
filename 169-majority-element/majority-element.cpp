class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count=1;
        sort(nums.begin(), nums.end());
        if(n==1){
            return nums[0];
        }
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                count++;
                if(count > n/2){
                    return nums[i];
                }

            } 
        }
        return -1;
        
    }
};