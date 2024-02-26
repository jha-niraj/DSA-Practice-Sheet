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


int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    sumToN(n, 0);

    return 0;
}