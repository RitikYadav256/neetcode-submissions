class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        set<vector<string>> uniqueGroups; // Store unique groups
        vector<string> arr3 = strs;
        sort(strs.begin(), strs.end()); 
        
        for (auto i : strs) {
            vector<string> arr2;
            sort(i.begin(), i.end());
            
            for (auto j : arr3) {
                string k = j;
                sort(j.begin(), j.end());
                if (j == i) {
                    arr2.push_back(k);
                }
            }
            
            sort(arr2.begin(), arr2.end()); // Ensure order consistency
            uniqueGroups.insert(arr2); // Store in set to avoid duplicates
        }
        
        // Convert set to vector for final output
        vector<vector<string>> arr(uniqueGroups.begin(), uniqueGroups.end());
        return arr;
    }
};