#include<iostream>
using namespace std;

function insertionSort(int arr[], int n) {
    
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}