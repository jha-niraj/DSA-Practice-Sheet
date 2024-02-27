#include<bits/stdc++.h>
using namespace std;

// 1. Sum upto N natural numbers:
// Paramaterized Function:
void sumToN(int n, int sum) {
    if(n < 1) {
        cout << sum << " ";
        return;
    }
    sumToN(n - 1, sum + n);
}
// Functional Way:
int sumToN2(int n. int sum) {
    if(n == 0) {
        return sum;
    }
    sum += n;
    return sumToN2(n - 1, sum);
}

// 2. Factorial upto the given number:


// 3. Reverse an array using Recursion:
void reverseArray(int i, int n, int arr[]) {
    if(i >= n / 2) {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverseArray(i + 1, n, arr);
}

// 4. Check for the Palindrome:
bool ansPalindrome(int i, string &s) {
    if(i >= s.size() - 1) {
        return true;
    }
    if(s[i] != s[s.size() - i - 1]) {
        return false;
    }
    ansPalindrome(i + 1, s);
}
bool isPalindrome(string &str) {
    // 1st Method:
    // return ansPalindrome(0, str);

    // 2nd Method:
    int s = 0;
    int e = str.size() - 1;
    while(s <= e) {
        if(str[s++] != str[e--]) {
            return false;
        }
    }
    return truel;
}

// Fibonacci Number:
int fibonacciNumber(int n) {
    if(n <= 1) {
        return n; 
    }
    int last = fibonacciNumber(n - 1);
    int slast = fibonacciNumber(n - 2);
    return last + slast;
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    // sumToN(n, 0);

    int arr[n];
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // reverseArray(0, n, arr);
    // for(int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }

    string checkForPalindrome = "madam";
    boolean ans = isPalindrome(checkForPalindrome);
    if(ans) {
        cout << "Given string is palindrome." << endl;
    } else {
        cout << "Given string is not a palindrome" << endl;
    }

    return 0;
}