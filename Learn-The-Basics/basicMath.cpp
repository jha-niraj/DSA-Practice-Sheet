#include <bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while(num != 0) {
        count++;
        n /= 10;
    }
    return count;
}

int reverse(int num) {
    int reversedNumber = 0;
    while(num != 0) {
        int digit = num % 10;
        reversedNumber = reversedNumber * 10 + digit;
        num /= 10;
    }
    return reversedNumber;
}

bool checkPalindrome(int num) {
    int reversedNumber = reverse(num);
    if(num == reversedNumber) {
        return true;
    } else {
        return false;
    }
}

int gcdOfNumber(int num1, int num2) {
    // Susing Normal Appraoch:
    int ans = 0;
    for(int i = 1; i < min(num1, num2); i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            ans = i;
        }
    }
    return ans;

    // Using Optimal Approach:
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

bool checkArmstrong(int num) {
    int temp = num;
    int ans = 0;
    int length = count(num);
    while(temp != 0) {
        int digit = temp % 10;
        ans += pow(digit, length);
        temp /= 10;
    }
    if(ans == num) {
        return true;
    } else {
        return false;
    }
}

void printDivisors(int num) {
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            cout << i << " ";
        }
    }
}

void printPrimeNumbers(int num) {
    for(int i = 2; i < num; i++) {
        if(num % i != 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digits = countDigit(num);
    cout << "The number of digits: " << digits < endl;

    int reversedNumber = reverse(num);
    cout << "Reverse of the number: " << reversedNumber << endl;

    bool palindrome = checkPalindrome(num);
    palindrome ? cout << "The number is Palindrome" << endl; : cout << "The number is not Palindrome" << endl;

    int gcd = gcdOfNumber(num);
    cout << "GCD of the number: " << gcd << endl;

    bool armstrongNumber = checkArmstrong(num);
    armstrongNumber ? cout << "The number is an armstrong number" << endl : cout << "The number is not an armstrong number" << endl;

    printDivisors(num);

    printPrimeNumbers(num);

    return 0;
}