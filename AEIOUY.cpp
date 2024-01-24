#include<iostream>
#include<string>
int main(){
      std:: string str;
      int count=0;
      getline(std:: cin, str);
      for(char i : str){
            if(i =='A' or i == 'E' or i =='I' or i =='O' or i =='U' or i =='Y' ){
                  count++;
            }
      }
      std :: cout<<count;
}