#include <bits/stdc++.h>
using namespace std;
string tobin(int x){
    string res="";
    while(x>0){
        if(x%2==1){
            res+='1';
        }
        else{
            res+='0';
        }
        x=x/2;
    }
    reverse(res.begin(),res.end());
    return res;
}
string complement(string &s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            s[i]='0';
        }
        else if(s[i]=='0'){
            s[i]='1';
        }
    }
    return s;
}
int todigit(string s){
    int n=s.size();
    int res=0,p2=1;
    for(int i=n-1;i>0;i--){
        if(s[i]=='1'){
            res=res+p2;
        }
        p2=p2*2;
    }
    return res;
}
int main(){
        int x;
        cout<<"enter the number";
        cin>>x;
        string y=tobin(x);
        string u=complement(y);
        int a=todigit(u);
        cout<<"the complement of the number is"<<a;
    return 0;
}









