class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        map<string , vector<string>> mp;
        for(int i = 0 ; i < s.size() ; i++)
        {
            string mask = "00000000000000000000000000";
            for(int j = 0 ; j < s[i].length() ; j++)
            {
                mask[s[i][j] - 'a']++;
            }
            mp[mask].push_back(s[i]);
        }
        
        vector<vector<string>> ans;
        for(auto pr : mp)
        {
            ans.push_back(pr.second);
        }
        
        return ans;
            
        
    }
};