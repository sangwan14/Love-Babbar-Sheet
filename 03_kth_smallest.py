#Approach 1 - using Quick Select
class Solution:
    def kthSmallest(self, nums, l, r, k):
        '''
        arr : given array
        l : starting index of the array i.e 0
        r : ending index of the array i.e size-1
        k : find kth smallest element and return using this function
        '''
        k += l-1
        
        def quickSelect(l,r):
            pivot, p = nums[r], l
            for i in range(l,r):
                if arr[i] < pivot:
                    nums[i], nums[p] = nums[p], nums[i]
                    p+=1
            arr[p], arr[r] = arr[r], arr[p]
            
            if p > k: return quickSelect(l,p-1)
            elif p < k: return quickSelect(p+1,r)
            else: return arr[p]
            
        return quickSelect(l,r)
