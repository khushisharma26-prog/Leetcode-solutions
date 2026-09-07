class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Count frequency of each number
        for (int x : arr) {
            freq[x]++;
        }

        // Store frequencies
        unordered_set<int> st;

        for (auto it : freq) {
            if (st.count(it.second)) {
                return false;
            }
            st.insert(it.second);
        }

        return true;
    }
};