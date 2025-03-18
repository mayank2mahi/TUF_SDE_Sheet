class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k = nums.size();
        int oldindex = -1;
        for(int i = k - 1; i > 0; i--){
            if(nums[i - 1] < nums[i]){
                oldindex = i - 1;
                break;
            }
        }

        if(oldindex != -1) {
            int newindex = -1;
            for(int i = k - 1; i > oldindex; i--){
                if(nums[i] > nums[oldindex]){
                    newindex = i;
                    break;
                }
            }
            swap(nums[oldindex], nums[newindex]);
        }
        reverse(nums.begin() + oldindex + 1, nums.end());
    }
};