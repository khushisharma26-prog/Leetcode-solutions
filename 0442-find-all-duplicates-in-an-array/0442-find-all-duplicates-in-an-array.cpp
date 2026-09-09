class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        int count[100001] = {0};
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (count[i] == 2) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};