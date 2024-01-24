#include<iostream>
#include<string>
int main(){
      std:: string str;
      getline(std:: cin, str);
      int size=str.size();
      for(int i=0;i<size;i++){
            if(str[i]==32){
                 str[i+1]= toupper(str[i+1]);
            }
      }
      str[0]=toupper(str[0]);
      std:: cout<<str;
}