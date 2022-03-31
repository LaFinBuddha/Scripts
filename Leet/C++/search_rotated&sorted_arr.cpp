class Solution:
//     Binary search
//     Idea: due to the array is organized, we could exclude roughly
//     half of the search space in each step.
    
//     The cases like below indicate the necessity of the two inner
//     while blocks:
//         [1, 0, 1, 1, 1], target=0; 
//         [1, 5, 1, 1, 1], target=0
    
//     After shifts to exclude duplicates of the two inner while-loops,
//     we could compare either
//         nums[mid] vs nums[l]
//     or 
//         nums[mid] vs nums[r]
        
//     Take nums[mid] vs nums[l] as example to fix the idea.
    
//     if nums[mid] <= nums[l]: in this case, the search space is then
//     [mid+1, r] if nums[mid] <= target <= nums[r] otherwise [l, mid-1]
    
//     similarly, if nums[mid] > nums[l], the search space is then
//     [l, mid-1] if nums[l] <= target <= nums[mid] otherwise [mid+1, r]
    
//     To have a clear picture of the above range selection/exclusion,
//     one could think think of an array fisrt increasing up to certain
//     index k_0, then drop to a value that is no greater than the value 
//     at index 0, then gradually increase to the end index still with
//     value no greater than the value at index 0.
//     or draw such a picture to help understanding.
    
    def search(self, nums: List[int], target: int) -> bool:
        
        n = len(nums)
        
        # this case for length one is covered by the while loop
        # if n == 1:
        #     return nums[0] == target
        
        
        l, r = 0, n - 1
        
//         include == is important in the while loop,
//         consider the case when n == 1
        while l <= r:
            
            while l < r and nums[l] == nums[l+1]:
                l += 1
            while l < r and nums[r] == nums[r-1]:
                r -= 1
                
            mid = (l + r) // 2
            if nums[mid] == target:
                return True
            else:
                
//                 # choose either of the two block below
//                 # will do the job
                
//                 # This block of code check the
//                 # relation between nums[l] and nums[mid]
//                 # it works 
                
//                 # if nums[l] <= nums[mid]:
//                 #     if nums[l] <= target <= nums[mid]:
//                 #         r = mid - 1
//                 #     else:
//                 #         l = mid + 1
//                 # else:
//                 #     if nums[mid] <= target <= nums[r]:
//                 #         l = mid + 1
//                 #     else:
//                 #         r = mid - 1
                
                
//                 # This block of code check the
//                 # relation between nums[r] and nums[mid]
//                 # it also works symmetrically
                
                if nums[mid] <= nums[r]:
                    if nums[mid] <= target <= nums[r]:
                        l = mid + 1
                    else:
                        r = mid - 1
                else:
                    if nums[l] <= target <= nums[mid]:
                        r = mid - 1
                    else:
                        l = mid + 1
        return False
            
