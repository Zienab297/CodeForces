#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    string s;
    cin>>x;
    cin>>s;
    int g=0;
    int r =0;
    int b =0;
    for (int i=0; i<x; i++){
        if(s[i] == s[i-1]){
            if(s[i] == 'R'){
                ++r;
            }
            if(s[i] == 'G'){
                ++g;
            }
            if(s[i] == 'B'){
                ++b;
            }
        }
        
    }
    
    cout<<b+r+g;

    
}