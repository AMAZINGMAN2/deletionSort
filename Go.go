package main

import "fmt"

func printArray(arr []int) {
    for _, num := range arr {
        fmt.Print(num, " ")
    }
    fmt.Println()
}

func deleteArray(arr []int) []int {
    return []int{}
}

func main() {
    arr := []int{12, 45, 23, 9, 37, 18, 61, 2, 25, 31, 7, 16, 48, 29, 41, 5, 22, 35, 14, 27, 39, 3, 56, 11, 33, 20, 54, 8, 43, 28, 51, 6, 17, 38, 10, 34, 44, 26, 50, 15}

    fmt.Println("Original array:")
    printArray(arr)

    arr = deleteArray(arr)

    fmt.Println("After 'deletionsort':")
    printArray(arr)
}
