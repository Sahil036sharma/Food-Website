#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max=v[0];
    for(int i=0;i<n;i++){
        if(v[i]>max){
            max=v[i];
        }
        
    }
    cout<<max;
    return 0;
}