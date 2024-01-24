#include<iostream>
#include<string>
int main(){
      std:: string str;
      getline(std:: cin, str);
      for (char i : str){
            if(i!='a'){
                  std:: cout<<i;
            }
      }
}