#include <bits/stdc++.h>
using namespace std;

int main()
{
    string guest,host,pile;
    cin>>guest>>host>>pile;
    string total = host+guest;
    if(pile.length()!=total.length())
        cout<<<"NO";   
    sort(total.begin(),total.end());
    sort(pile.begin(),pile.end());    
    if(total == pile)
        cout<<"YES";
    else
        cout<<"NO";    
    return 0;
}