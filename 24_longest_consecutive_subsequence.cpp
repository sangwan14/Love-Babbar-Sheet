int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      unordered_set<int> uset;
      for(int i=0; i<n; i++){
          uset.insert(arr[i]);
      }
      int res = 1;
      for(int i=0; i<n; i++){
          int j = arr[i];
          if(uset.find(j-1) == uset.end()){
              while(uset.find(j) != uset.end()){
                  j++;
              }
              res = max(res,j-arr[i]);
          }
      }
      return res;
    }
