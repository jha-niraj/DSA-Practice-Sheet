#include <iostream>
using namespace std;

int main() {
    strint name;
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Name: " << name << endl;
    
    int i = 0;
    while(name[i] != '\0') {
        cout << name[i];
        i++;
    }
    
    cout << "Printing the value of null character: ";
    int value = (int)name[5];
    cout << "Value: " << value << endl;

    return 0;
}