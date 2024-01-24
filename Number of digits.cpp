#include<iostream>
#include <string>
int main(){
      std ::string str;
      int count=0;
      getline(std:: cin,str);
      for (char i : str){
            if(isdigit(i)){
                  count++;
            }
      }
      std:: cout<<count;
}