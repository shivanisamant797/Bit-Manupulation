#include <bits/stdc++.h>
using namespace std;
string conToBin(int n){

    string res="";
    while(n>0){
        if(n%2==1){
            res=res+'1';
        }
        else{
            res=res+'0';
        }

        n=n/2;
    }
    reverse(res.begin(),res.end());
    return res;
}

string setbit(string &s, int y){
    for(int i=s.size()-1;i>0;i--){
        if(y==0){
            s[i]='1';
        }
        y--;
    }
    return s;
}
int conToNum(string s){
    int res=0;
    int pow=1;
    for(int i=s.size()-1;i>=0;i--){
        
        if(s[i]=='1'){
            res=pow+res;

        }
        pow=pow*2;
    }
    return res;
}

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int y;
    cout<<"enter the bit you want to set";
    cin>>y;
    string s=conToBin(n);
    string e=setbit(s,y);
    int k=conToNum(e);
    cout<<"the number is"<<k;



    return 0;
}