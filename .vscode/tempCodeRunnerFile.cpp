for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<" "<<i;
            }
        }
        cout<<endl;
    }