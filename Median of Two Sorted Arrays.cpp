class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) 
    {
       int auxi[a.size()+b.size()];
        int i=0,j=0,k=0;
        while(i<a.size()&&j<b.size())
        {
            if(a[i]<b[j])
                     {
                            auxi[k++]=a[i++];
                     }
            else
            {
                auxi[k++]=b[j++];
            }
        }
        for(;i<a.size();i++)
        {
            auxi[k++]=a[i];
        }
        for(;j<b.size();j++)
        {
            auxi[k++]=b[j];
        }
        int value=a.size()+b.size();
        if(value%2!=0)
            return auxi[(value-1)/2];
        else
            return (auxi[value/2]+auxi[value/2-1])/2.0;
        
    }