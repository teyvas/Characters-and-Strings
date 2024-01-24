#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    char b = a-1;
    char c= a+1;
    if(a=='a'){
        cout<<c;
    }
    else if(a=='z'){
        cout<<b;
    }
    else cout<<b<<" "<<c;
}