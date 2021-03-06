#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int size){
    bool flag = true;
    int current = 0;
    while (flag && current < size-1)
    {
        flag = false;
        int walker = size - 1;
        while (walker > current)
        {
            if (arr[walker-1] > arr[walker]){
                flag = true;
                int tmp = arr[walker - 1];
                arr[walker - 1] = arr[walker];
                arr[walker] = tmp;
            }
            walker--;
        }
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

    bubbleSort(arr, size);

    for (int i : arr)
        cout << i << ' ';

    return 0;
}