class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        size = len(nums)
        left = 0
        right = size - 1
        while left < right:
            mid = (left + right + 1) // 2
            if nums[mid] == target:
                return True
            elif nums[mid] == nums[left]:
                left += 1
            elif nums[left] < nums[mid]:
                if nums[left] <= target < nums[mid]:
                    right = mid - 1
                else:
                    left = mid + 1
            else:
                if nums[left] <= target or target < nums[mid]:
                    right = mid - 1
                else:
                    left = mid + 1
        return left < size and nums[left] == target
