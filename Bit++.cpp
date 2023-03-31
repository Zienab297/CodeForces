#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int x=0;
    for(int i; i<n; i++){
        cin>>s;
        if(s=="X++" || s== "++X"){
            x++;
        }
        else if(s=="X--" || s== "--X"){
            x--;
        }
    }
    cout<<x;
}