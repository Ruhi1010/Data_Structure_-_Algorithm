#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of square pattern: ";
    cin >> n;

    // for similar number in per row
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;


    // for serial number pattern
    int num1 = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << num1 << " ";
            num1++;
        }
        cout << endl;
    }
}