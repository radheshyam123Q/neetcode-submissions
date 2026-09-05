class Solution {
public:
    int findMax(vector<int>&arr , int low ){
        int maxi = INT_MIN ;
        for(int i = low ; i<arr.size() ; i++ ){
               if(maxi<arr[i]) maxi = arr[i] ;
        }
        return maxi ;
    }
    vector<int> replaceElements(vector<int>& arr) {
        
        for(int i = 1 ; i<arr.size() ;i++){
            
             int ele = findMax(arr , i ) ;
             arr[i-1] = ele ;
             
             
        }
        arr[arr.size() -1 ] = -1 ;
        return arr ;

    }
};