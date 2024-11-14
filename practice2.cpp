#include <iostream>
using namespace std;

int findLargest(int arr1[], int size);

int main()
{
    int arr[] = {43,34,12,120,49};
    int size = 5;
    
    cout << findLargest(arr, size) << endl;
}

int findLargest(int arr1[], int size) {
    int largestNum = 0;

    for (int i = 0; i < size; i++){ 
        if (arr1[i] > largestNum)
        {
            largestNum = arr1[i];
        }
        else {
            continue;
        }
    }
    return largestNum;
}
