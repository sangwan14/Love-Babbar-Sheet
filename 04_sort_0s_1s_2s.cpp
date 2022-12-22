//Approach 1 - Dutch National Flag algorithm
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        int lo, mid, hi;
        lo = mid = 0;
        hi = n-1;
        while(mid <= hi) {
            if(arr[mid] == 0){
                swap(arr[mid], arr[lo]);
                lo++;
                mid++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else {
                swap(arr[mid], arr[hi]);
                hi--;
            }
        }
        
        return;
    }
    
};
