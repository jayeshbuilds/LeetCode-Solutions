class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int ansIndex = -1;

        while(s<=e){  
             int mid = s + (e - s) / 2;

            if(arr[mid]<arr[mid+1]){ // check if mid lands on line 1 
                s = mid+1; // if it does than s ko aage kar de mid plus 1 se 

            }
            else{ // check if the mid lands on line 2 
                ansIndex = mid; // aab line 2 pe land kiya hai thike toh ho sakta hai ki jispe land kiya ho wahi peak point ho
                // so isme "Store and compute method use karenge "
                e = mid-1;
            }
            
        }
        return ansIndex ;


        
    }
};