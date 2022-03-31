class Solution {
public:
    int search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int s = 0, e = nums.size() - 1, mid;
        bool found = false;
        while(s <= e){
            mid = (s + e) / 2;
            if(nums[mid] < target){
                s = mid + 1;
            }
            else if(nums[mid]>target){
                e= mid - 1;
            }
            else{
                found = 1;
                nums.push_back(mid);
                break;
            }
        }
        if(found)
                return nums[nums.size() - 1];
        else
            return -1;
    }
};
