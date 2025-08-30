#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of square pattern: ";
    cin >> n;

    // for similar character in per row
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << endl;


    // for serial character pattern
    char ch1 = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ch1 << " ";
            ch1++;
        }
        cout << endl;
    }
}