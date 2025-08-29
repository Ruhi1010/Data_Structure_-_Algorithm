#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool isPrime = true;

    for(int i=2; i*i <=n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    
    if(isPrime == true){
        cout<< "The given number is prime number" << endl;
    }else{
        cout << "The given number is not a prime number" << endl;
    }
    return 0;
}