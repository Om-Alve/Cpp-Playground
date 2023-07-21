#include <iostream>
using namespace std;

void print(int n)
{
    // Recursive approach
    if (n == 0)
    {
        return;
    }
    cout << "* ";
    print(n - 1);
}
void pattern(int n, int i)
{
    if (n == 0)
        return;
    print(i);
    cout << endl;
    pattern(n - 1, i + 1);
}
int main()
{
    int n;
    cin >> n;
    pattern(n, 1);

    // Iterative approach
    //  for(int i=1;i<=n;i++){
    //      for(int j=1;j<=n;j++){
    //          if(j<=n-i){
    //              cout<<"  ";
    //          }
    //          else{
    //              cout<<" "<<i;
    //          }
    //      }
    //      cout<<endl;
    //  }
    return 0;
}