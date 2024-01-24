#include<iostream>
int main(){
    int a,b,ans;
    char c;
    std :: cin>>a>>c>>b;
    if(c=='+'){
        ans= a+b;
    }
    else if(c=='-'){
        ans= a-b;
    }
    else if(c=='*'){
        ans= a*b;
    }
    else if(c=='/'){
        ans= a/b;
    }
    std:: cout<<ans;
}