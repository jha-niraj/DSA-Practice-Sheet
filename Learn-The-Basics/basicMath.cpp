#include<iostream>
using namespace std;

int countDigits(int num) {
    
}

int reverse(int num) {

}

bool checkPalindrome(int num) {

}

int gcdOfNumber(int num) {

}

bool checkArmstrong(int num) {

}

void printDivisors(int num) {

}

void printPrimeNumbers(int num) {

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