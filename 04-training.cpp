#include<iostream>

using namespace std;

int main() {

    // lesson1
    int end = 10;
    for (int i = -10; i <= end; ++i) {
        //cout << i << endl;
    }

    // lesson2
    int i = 1;
    lab_start:
    if (i <= 10) {
        //cout << i << endl;
        i++;
        goto lab_start;
    }
    
    // lesson3
    char ch = 0x20;
    int ii = 2;
    int count = 0;
    cout << ii << '|' << ' ';
    while (ch != 0x7F) {
        cout << ch << ' ';
        if (count == 0xF){
            cout << endl;
            ii++;
            cout << ii << '|' << ' ';
            count = 0;
        } else{
            count++;
        }
        ch++;
    }

}