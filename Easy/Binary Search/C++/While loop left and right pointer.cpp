class Solution {
public:
    int search(vector<int>& nums, int target) {
        int startPointer = 0;
        int endPointer = nums.size() - 1;

        while (startPointer <= endPointer) {
            int middle = startPointer + (endPointer - startPointer) / 2;
            if (nums[middle] == target) {
                return middle;
            }
            else if (nums[middle] < target) {
                startPointer = middle + 1;
            }
            else {
                endPointer = middle - 1;
            }
        }
        return -1;
    }
};
};