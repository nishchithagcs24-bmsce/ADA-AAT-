int peakIndexInMountainArray(int* arr, int arrSize) {
    int start = 0;
    int end = arrSize - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid + 1]) {
            // We are in the decreasing part (or at the peak)
            end = mid;
        } else {
            // We are in the increasing part
            start = mid + 1;
        }
    }

    return start;  // start == end == peak index
}
