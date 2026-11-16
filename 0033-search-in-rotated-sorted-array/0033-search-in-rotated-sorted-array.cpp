
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int pivot = -1;

        // Step 1: Find pivot
        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (mid < n - 1 && nums[mid] > nums[mid + 1]) {
                pivot = mid;
                break;
            }

            if (nums[mid] >= nums[s]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        // Step 2: No rotation
        if (pivot == -1) {
            pivot = n - 1;
        }

        // Step 3: Select search range
        int left, right;

        if (target >= nums[0] && target <= nums[pivot]) {
            left = 0;
            right = pivot;
        } else {
            left = pivot + 1;
            right = n - 1;
        }

        // Step 4: Normal Binary Search
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) return mid;

            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;
    }
};
