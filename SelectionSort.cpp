#include <bits/stdc++.h>
using namespace std;

// Complexity O(n^2)
void selectionSort(int *arr, int size){
    int current = 0;

    while(current < size - 1){
        int min = current;
        int walker = current + 1;
        while (walker < size)
        {
            if (arr[walker] < arr[min])
                min = walker;
            walker++;
        }

        int tmp = arr[current];
        arr[current] = arr[min];
        arr[min] = tmp;

        current++;
    }
}

int main(){
    int size;
    cout << "Input Array length: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    selectionSort(arr, size);

    for (int i : arr)
        cout << i << ' ';
    return 0;
}