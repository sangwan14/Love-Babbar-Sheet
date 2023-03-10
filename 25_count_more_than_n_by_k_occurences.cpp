int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int> umap;
        int count = 0;
        for(int i=0; i<n; i++){
            umap[arr[i]]++;
            if(umap[arr[i]] == n/k+1) count++;
        }
        return count;
    }
