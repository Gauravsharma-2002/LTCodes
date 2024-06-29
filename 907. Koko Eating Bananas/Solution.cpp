class Solution {
public:
    int maxVal(vector<int>& arr){
        int ans = INT_MIN;
        int size = arr.size();
        for(int i=0;i<size;i++){
            if(arr[i]>=ans){
                ans = arr[i];
            }
        }
        return ans;
    }
    long long checkEatable(vector<int>& arr,int mid, int h){
        int size= arr.size();
        long long time = 0;
        for(int i=0;i<size ;i++){
            // time += ceil((double)arr[i]/(double)mid);
            time += (arr[i]+mid-1)/mid;
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // finding max value form the array 
        int high = maxVal(piles);
        //considering minimum 1 banana to be eaten in 1 hour
        int low = 1;
        int mid = low + (high-low)/2;
        int ans = INT_MAX;
        while(low<=high){
            // now here check if it is possible to eat the banana for the middle element of the array
            // bool isEatable = checkEatable(piles,mid,h);
            long long timeTaken = checkEatable(piles,mid,h);
            if(timeTaken<=h){
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
            // if time taken to eat all piles is greater than the given time we move to right side of mid
            // if(!isEatable){
            //     low = mid+1;
            // }
            // if time taken to eat is equals and less then the given time we move to left side to check for smaller time
            // else{
            //     ans = mid;
            //     high = mid-1;
            // }
            mid = low + (high - low )/2;
        } 
    return low;
    }
};