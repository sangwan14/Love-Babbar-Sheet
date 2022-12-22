//Do a partial sort using Quick Select Algorithm
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int quickSelect(int arr[], int l, int r, int k) {
        int p_idx = partition(arr,l,r);
        //Search only where you need to look for to save time
        if(p_idx > k) return quickSelect(arr,l,p_idx-1,k); 
        else if(p_idx < k) return quickSelect(arr,p_idx+1,r,k);
        else return arr[k]; //we have got the number at the kth index in the sorted order, so return it
    }
    
    int partition(int arr[], int l, int r) {
        int pivot = arr[r];
        int i=l-1;
        for(int j=l; j<r; j++){
            if(arr[j] < pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        i++;
        swap(arr[i],arr[r]);
        return i;
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        k += l-1; //add l-1 to get the index
        return quickSelect(arr,l,r,k);
    }
    
};

