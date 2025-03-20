class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int h = 0;
        for(auto i : mp){
            if(i.second > 1){
                h = i.first;
            }
        }
        return h;
    }
};