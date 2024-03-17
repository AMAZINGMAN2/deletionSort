public class DeletionSort {
    public static void main(String[] args) {
        int[] arr = {12, 45, 23, 9, 37, 18, 61, 2, 25, 31, 7, 16, 48, 29, 41, 5, 22, 35, 14, 27, 39, 3, 56, 11, 33, 20, 54, 8, 43, 28, 51, 6, 17, 38, 10, 34, 44, 26, 50, 15};
        System.out.println("Original array:");
        printArray(arr);

        deleteArray(arr);

        System.out.println("After 'deletionsort':");
        printArray(arr);
    }

    public static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void deleteArray(int[] arr) {
        arr = null;
    }
}
