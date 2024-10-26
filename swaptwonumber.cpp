#include <bits/stdc++.h>
using namespace std;
int main(){

    char x,y;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"enter the  value of y";
    cin>>y;
    x=x^y;
    y=x^y;
    x=x^y;
    cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y;





    return 0;
}