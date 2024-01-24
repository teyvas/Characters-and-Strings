#include<iostream>
#include <algorithm> 
#include <string>
using namespace std;
int main(){
    string line;
    bool exist=false;
    int f=0,l=0,count=0,c=0;
    getline (cin, line);
    for (char i : line){
        if (i=='a'){
            cout<<count<<" ";
            exist=true;
        }
        count++;
    }
    if(exist==false){
        cout<<-1;
    }
}