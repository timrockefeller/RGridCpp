#include<iostream>
using namespace std;
void reserve (int n){
    while (n!=0){
        cout<<n % 10;
        n/=10;
    }
}

int main (){
    int n;
    cin>>n;
    reserve(n);
    return 0;
}