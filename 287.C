int findDuplicate(int* nums, int numsSize) {
    int i = 0;

    while (i < numsSize) {
        int CI = nums[i] - 1;

        if (nums[i] != nums[CI]) {
            int temp = nums[i];
            nums[i] = nums[CI];
            nums[CI] = temp;
        } else {
            i++;
        }
    }

    int sol = -1;

    for (int j = 0; j < numsSize; j++) {
        if (nums[j] != j + 1) {
            sol = nums[j];
        }
    }

    return sol;
}
