#include<iostream>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n<10){
            cout<<"Thanks for helping Chef!"<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}