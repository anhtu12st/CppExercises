#include <bits/stdc++.h>
using namespace std;

/*
 * Start at index 1;
 * 
 * Suffer from start + 1 back to the first Element lower the the current
 * and shift right all elenmet from lower  Element 
 * Then swap the Element at index to the lower Element
 * 
 * O(n^2)
 */
void InsertionSort(int arr[], int size){
    int current = 1;
    while (current < size)
    {
        int walker = current - 1;
        int tmp = arr[current];
        while (walker >= 0 && arr[walker] > tmp)
        {
            arr[walker + 1] = arr[walker];
            walker--;
        }
        arr[walker + 1] = tmp;
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

    InsertionSort(arr, size);

    for(int i: arr){
        cout << i << ' ';
    }

    return 0;
}