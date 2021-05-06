class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        vector<int> res(arr.size());
        
        res[0] = arr[0];
        for(int i = 1 ; i < arr.size() ; i++)
            res[i] = arr[i] ^ res[i - 1];
        
        vector<int> ans(queries.size());
    
        int i = 0;
        for(auto val : queries)
        {
            if(val[0] == 0)
                ans[i++] = res[val[1]];
            else
                ans[i++] = res[val[1]] ^ res[val[0] - 1];
        }
        return ans;
    }
};