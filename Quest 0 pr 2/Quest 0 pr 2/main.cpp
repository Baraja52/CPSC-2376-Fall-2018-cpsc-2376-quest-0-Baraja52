// create a cross with '*' and an x with letters
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numLetters = 26;
    char letter1 = 'a';
    int i; //rows
    int j; //cols
    for (i = 1; i <= numLetters; i++) {
        for (j = 1; j <= 2 * numLetters + 1; j++) {
            if (i==j || j == (numLetters * 2 + 2 - i)) {
                cout << letter1;
            }
            else if (j == 2 * numLetters / 2 + 1){ //center
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
        letter1++; // after loop it goes pass 'z'
    }
    cout << setfill('*') << setw(53) << ""<<  endl; // line of '*'
    
    for (i = numLetters; i >= 1; i--) {
        letter1--;
        for (j = 1; j <= 2 * numLetters + 1; j++) {
            if (i==j || j == (numLetters * 2 + 2 - i)) {
                cout << letter1;
            }
            else if (j == 2 * numLetters / 2 + 1){ //center
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
        
    }
}
