#include<iostream>
#include <algorithm> 
#include <string>
using namespace std;
int main(){
    string str;
    
    int f=-1,l=0,count=0,c=0,last=0;
    getline (cin, str);
    int length=str.size();
    for(int i=0;i<length;i++){
            if(str[i]==32){
                  f=i;
                  break;
            }
    }
    for(int i=length;i>0;i--){
            if(str[i]==32){
                  l=i;
                  break;
            }
    }
    if(f!=-1){
      cout<<f<<" "<<l;
    }
    else cout<<-1;
    
    return 0;
}