#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n];
    for (int i; i<n; i++){
    int x, y, z;
    cin>>x>>y>>z;
    if (x+y == z){
        arr[i] = '+';
    }
    else{
        arr[i] = '-';
    }
    }
    for (int i; i<n; i++){
        cout<<arr[i]<<"\n";
    }
}