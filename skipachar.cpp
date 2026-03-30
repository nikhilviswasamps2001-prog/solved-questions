#include<iostream>
#include<string>
using namespace std ;
void remove(string s){
    string k = "" ;
    for(int i = 0 ; i <s.length() ; i++) {
        if (s[i] != 'a') k+=s[i] ;
    }
   cout<<k ; 
}
int main(){
string s = "ragav garg " ;
remove (s) ; 
}