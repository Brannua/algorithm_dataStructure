
function binarySearch(arr, target) {
    var left = 0,
        right = arr.length - 1,
        mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        mid = Math.floor(mid);
        if (target === arr[mid]) {
            return mid;
        } else if (target < arr[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

console.log(binarySearch([1, 2, 3, 4, 5, 6, 7, 8], 2));
