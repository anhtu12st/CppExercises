#include <bits/stdc++.h>
using namespace std;

template <class T>
class Sorting {
private:
    static T* Partition(T* start, T* end){
        int size = end - start;

        int lastSmall = 0;
        for (int i = 1; i < size; i++){
            if (start[i] < *start){
                lastSmall += 1;
                T tmp = start[lastSmall];
                start[lastSmall] = start[i];
                start[i] = tmp;
            }
        }

        T tmp = *start;
        *start = start[lastSmall];
        start[lastSmall] = tmp;

        return start + lastSmall;
    }

    static T* Merge(T* start, T* end, T* mid){

    }
public:
    static void QuickSort(T* start, T* end){
        if (end - start > 1){
            T *pivot = Partition(start, end);
            QuickSort(start, pivot);
            QuickSort(pivot + 1, end);
        }
    }


};

int main(){
    Sorting<int> s;
    int array[] = { 3, 5, 7, 10 ,12, 14, 15, 13, 1, 2, 9, 6, 4, 8, 11, 16, 17, 18, 20, 19 };
    cout << "Index of pivots: ";
    s.QuickSort(&array[0], &array[20]);
    cout << "\n";
    cout << "Array after sorting: ";
    for (int i : array)
        cout << i << " ";
    return 0;
}