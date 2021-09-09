class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& a) {
            
        int n = a.size();
        int sum = 0;
        for(int i = 0 ; i < n  ; i++)
        {
       
            sum += a[i];
        }
        vector<int> result(n);
        int pre = 0;
        for(int i = 0 ; i < n ; i++)
        {
          
            
            int right = sum - pre - a[i];
            int left = pre;
            result[i] = a[i] * i - left + right - a[i] * (n - i - 1);
            pre += a[i];
        }
        
        return result;
    }
};