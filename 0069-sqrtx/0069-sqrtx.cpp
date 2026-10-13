class Solution {
public:
    int mySqrt(int x) {

        int target = x;
        //define solution space 

        int s = 0;
        int e = target;//target tak leke jayega na like if 4 hai toh array 1 to 4 banega iske beech me hi ans aayega so yeah.
        int ans = -1;

        while(s<=e){

            long long int mid = s + (e - s) / 2;
            long long product = mid * mid;

            //when mid x mid is equal to the target;
            if (product == target){
                return mid;
            }
            // go left 
            if (product>target){
                e = mid-1;

            }
            //go right 
            if(product<target){
                // store and compute use kare 
                //cuz as defined in the question pass ka root return karna hai 
                ans = mid;
                // go right 
                s = mid+1;

            }
            

        }
        return ans;
        
    }
};