#include<iostream>
using namespace std;

int main(){
    int n[5] = {1, 2, 3, 4, 5};
    int d, ans =0;
    cin>>d;
    for(int i=4; i>-1; i--){
        ans+=d/n[i];
        d=d%n[i];
    }
    cout<<ans<<endl;
}