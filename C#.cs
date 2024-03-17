using System;

class Program
{
    static void Main(string[] args)
    {
        int[] arr = { 12, 45, 23, 9, 37, 18, 61, 2, 25, 31, 7, 16, 48, 29, 41, 5, 22, 35, 14, 27, 39, 3, 56, 11, 33, 20, 54, 8, 43, 28, 51, 6, 17, 38, 10, 34, 44, 26, 50, 15 };
        Console.WriteLine("Original array:");
        PrintArray(arr);

        DeleteArray(ref arr);

        Console.WriteLine("After 'deletionsort':");
        PrintArray(arr);
    }

    static void PrintArray(int[] arr)
    {
        foreach (int num in arr)
        {
            Console.Write(num + " ");
        }
        Console.WriteLine();
    }

    static void DeleteArray(ref int[] arr)
    {
        arr = null;
    }
}
