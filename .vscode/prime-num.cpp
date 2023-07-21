#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if((n%i)==0){
            cout<<"The given number is not prime.";
            break;
        }
        else{
            cout<<"The given number is prime.";
            break;
        }
    }
    return 0;
}