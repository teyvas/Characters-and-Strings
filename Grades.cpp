#include<iostream>
#include <string>
using namespace std;
int main(){
    string line;
    getline (cin, line);
    int f=0,t=0;
    for (char i : line){
        if(i=='5'){
            f++;
        }
        else if(i=='2'){
            t++;
        }
    }
    
    if(f==t){
        cout<<"=";
    }
    else if(f>t){
        cout<<"5";
    }
    else cout<<'2';
}