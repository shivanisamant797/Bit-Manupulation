#include <bits/stdc++.h>
using namespace std;

int fun(string s){
    int n=s.size();
    int num=0,p2=1;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            num=num+p2;
        }
        p2=p2*2;
    }
    return num;

}

int main(){
    string s;
    cout<<"enter the string ";
    cin>>s;
    int x=fun(s);
    cout<<x;




    return 0;
}