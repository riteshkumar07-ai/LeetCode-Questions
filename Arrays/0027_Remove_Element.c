/*
    LeetCode 27 - Remove Element

    Approach: Two Pointer
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

int removeElement(int* nums, int numsSize, int val) {
    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}
