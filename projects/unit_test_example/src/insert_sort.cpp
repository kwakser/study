#include "insert_sort.hpp"

void InsertSort::insertionSort(std::vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

/*int main() {
    std::vector<int> vec = {12, 11, 13, 5, 6};
    
    InsertSort::insertionSort(vec);
    
    std::cout << "Sorted array: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    
    return 0;
}*/

