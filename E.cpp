//Rakibul Nahid
#include <iostream>
#include <cstring>
#include <string.h>
#include <string>
using namespace std;
int main(){
    string txt,ans;
    int num;
    cin>>num;
    getline(cin,txt);
    int i,j=0,L=txt.length();
    for ( i = 0; i < L; i++){
        if(txt[i]-num<65){
            txt[i]=txt[i]-num+26;
        }
        else{
            txt[i]=txt[i]-num;
        }
    }
    cout<<txt<<endl;
    return 0;
}