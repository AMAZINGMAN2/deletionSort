function printArray(arr) {
  console.log(arr.join(" "));
}

function deletionSort(arr) {
  arr.length = 0;
}

// Example usage
const arr = [12, 45, 23, 9, 37, 18, 61, 2, 25, 31, 7, 16, 48, 29, 41, 5, 22, 35, 14, 27, 39, 3, 56, 11, 33, 20, 54, 8, 43, 28, 51, 6, 17, 38, 10, 34, 44, 26, 50, 15];

console.log("Original array:");
printArray(arr);

deletionSort(arr);

console.log("After 'deletionsort':");
printArray(arr);
