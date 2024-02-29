#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int mini = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[mini]) {
                swap(arr[j], arr[mini]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}