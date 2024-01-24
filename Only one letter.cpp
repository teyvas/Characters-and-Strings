#include<iostream>
using namespace std;
int main(){
    string line;
    bool letter = false;
    getline(cin,line );
    for (char i : line){
        
        if(i=='a'){
            cout<<i;
            letter=true;
        }
    }
    if(letter ==false){
        cout<<-1;
    }
    
}