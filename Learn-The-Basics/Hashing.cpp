#include<bits/stdc.h++>
using namespace std;

int main() {
    // For Integer Array:
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Creating a Hash Array:
    int hashArr[12] = {0};

    for(int i = 0; i < n; i++) {
        hashArr[arr[i]] += 1;
    }

    int q;
    cout << "Enter your query: ";
    cin >> q;

    while(q--) {
        int num;
        cin >> num;

        cout << hashArr[num] << endl;
    }

    // For String or Character Array:
    string name;
    cout << "Enter your name: ";
    cin >> name;

    int hashArr[26] = {0};
    
    int size = name.size();
    for(int i = 0; i < size; i++) {
        hashArr[name[i] - 'a']++;
    }

    int q;
    cout << "Enter the number of query you want to search for: ";
    cin >> q;

    while(q--) {
        char ch;
        cout << "Enter the character you want to search: ";
        cin >> ch;

        cout << "The frequency of character " << ch << " in the string is: " << hashArr[ch - 'a'] << endl;
    }

    // Map and Unordered Map:
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pre-Compute:
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for(auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    int q;
    cout << "Enter the number of query you want to search for: ";
    cin >> q;

    while(q--) {
        int num;
        cout << "Enter the number you want to search: ";
        cin >> num;

        cout << "The frequency of number " << num << " in the map is: " << mpp[num] << endl;
    }
}