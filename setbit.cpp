#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cout<<"enter the number";
    cin>>n;
    int y;
    cout<<"enter the bit you want to check";
    cin>>y;
    //using left shift operator 
    // if((n&(1<<y))!=0){
    //     cout<<"bit is set";
    // }
    // else{
    //     cout<<"bit is not set";
    // }

    //using right shift operator
    if(((n>>y)&1)!=0){
        cout<<"bit is set";
    }
    else{
        cout<<"bit is not set";
    }




    return 0;
}