#include<iostream>
using namespace std;
int fact(int num){
    long fact=1.0;
    for(int i=1;i<=num;i++){
    fact*=i;
    }
    return fact;
}
int comb(int n,int r){
    int comb;
    comb=(fact(n))/((fact(n-r))*(fact(r)));
    return comb;
}
int main(){
    int x;
    cin>>x;
    for(int i=0;i<=x;i++){
        for(int j=0;j<=i;j++){
            int y=comb(i,j);
            if(y==0)
            break;
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}