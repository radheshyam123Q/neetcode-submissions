class Solution {
public:
  
    vector<int> replaceElements(vector<int>& arr) {
        int rmax = - 1 ;
        vector<int>ans(arr.size()) ;
        for(int i = arr.size() -1 ; i>=0 ; --i )
        {
            ans[i] = rmax ;
            rmax = max(rmax , arr[i] ) ;
        }
        return ans ;
      
    }
};