#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int main() {
    char ch[100];
    cout << "Enter the character in the array: ";
    cin.getline(ch, 100);
    
    // // Let's say I am going to enter 5 character, so according to char-Array characteristics the 6th character is going to be null character.
    // int nullValue = (int)ch[5];
    // cout << ch << endl << "Last character: " << nullValue;
    
    // While taking input through the cin, we cannot take the input when the user pressed enter, tab, space.
    // So to overcome this, we are going to use cin.getline(), where first parameter is going to be the place where we are storing the character and second is the maximum size.
    // char ch[100];
    // cout << "Enter the character in the array: ";
    // cin.getline(ch, 100);
    
    // cout << ch << endl;
    
    // 1. Length of the String:
    // int i = 0;
    // int length = 0;
    // while(ch[i] != '\0') {
    //     length++;
    //     i++;
    // }
    // cout << "Length of the Array without header file: " << length << endl; 
    // cout << "Length of the Array with header file: " << strlen(ch) << endl; 
    
    // 2. Reversing a Char Array:
    // cout << "Normal Char Array: " << ch << endl;
    // int s = 0;
    // int e = strlen(ch) - 1;
    
    // while(s <= e) {
    //     swap(ch[s++], ch[e--]);
    // } 
    
    // cout << "Reversed Char Array: " << ch << endl;
    // cout << "Reversed Char Array using Header File:" << strrev(ch) << endl;
    
    // 3. Convert to Uppercase:
    cout << "Normal String: " << ch << endl;
    int len = strlen(ch);
    
    char ans[100];
    
    for(int i = 0; i < len; i++) {
        if(ch[i] >= 'a' && ch[i] <= 'z') {
            ans[i] += ('a' - 'A');
        } else {
            ans[i] += ch[i];
        }
    }
    cout << "After conversion: " << ans << endl;

    return 0;
}