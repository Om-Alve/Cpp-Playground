#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:- ";
    cin>>age;
    if((age<18) && age>0){
        cout<<"You are not eligible to vote";
    }
    else if(age>18){
        cout<<"You are eligible to vote";
    }
    else{
        cout<<"Invalid age";
    }
    return 0;
}