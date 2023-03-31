#include<iostream>
using namespace std;

int main(){
    int n, score;
    int x=0;
    cin>>n>> score;
    int arr[n];
    for (int i; i<n; i++){
        cin>>arr[i];
    }
    for (int i; i<n; i++){
        if (arr[i]<1)
            continue;
        else if(arr[score-1] <= arr[i]){
            x++;
        }
    }
    cout<<x;
}