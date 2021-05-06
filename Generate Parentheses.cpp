class Solution {
public:
    void generate(vector <string> &res , int closing , int opening , int maxi , string str)
    {
        if(opening > maxi)
            return;
        if(closing > opening)
            return;
        if(str.size() == 2 * maxi)
        {
            res.push_back(str);
            return;
        }
        else
        {
               
         generate(res , closing , opening + 1 , maxi , str + '(' );
         generate(res , closing + 1, opening , maxi , str + ')' );  
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        vector <string> res;
        string str = "";
        generate(res , 0 , 0 , n , str);
        return res;
    }
};