class Solution {
public:
    
    /* 
     HINT :
     Observe the pattern
     n = 0 => '0'
     n = 1 => "01"
     n = 2 => "0110"
     n = 3 => "01101001"
     Note: Indexing is zero based
     
     Explanation:
      Since for the nth row we can have total pow(2 , n) characters in that row so intially lets say we have value of       mid variable be pow(2 , n) / 2.
    
    Consider two scenarios:
     Case 1 => when our kth index is less than mid , it means that we simply need to get kth index value from the previous  row (n - 1 th row).
              
    case 2 => When our kth index is greater than equal to mid , it means that we need to get (k - mid)th index value     from the previous row as kth index of nth row is just the invert bit of (k - mid)th index  value of (n - 1)th row. 
 
    */
    
    int solve(int k , int n , int mid)
    {   
    
        if(k == 0)
            return 0;
        
        if(k < mid)
            return solve(k , n - 1 , mid / 2);
            
        return 1 ^ solve(k - mid , n - 1 , mid / 2); 
        
    }
    int kthGrammar(int N, int K) 
    {
        int mid = pow(2 , N - 1);
        return solve(K - 1 , N - 1 , mid / 2) ;    
    }
};