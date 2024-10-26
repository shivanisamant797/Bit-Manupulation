#include <bits/stdc++.h>
using namespace std;
string fun(int x){
    string s="";
    while(x>0){
        if(x%2==1){
            s=s+"1";
        }
        else{
            s=s+"0";
        }
        x=x/2;
    }
    reverse(s.begin(),s.end());
    return s;
}



int main(){
    int x;
    cout<<"enter the number you want to see binary";
    cin>>x;
    string s=fun(x);
    cout<<s<<endl;
    return 0;
}