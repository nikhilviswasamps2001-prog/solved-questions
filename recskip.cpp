#include<iostream>
#include<string>
using namespace std ;
void remove(string ans , string s , int idx){
    if( idx == s.size()){
        cout<<ans ;
        return ;
    }
char ch = s[idx] ;
if(ch =='a') remove(ans,s,idx+1) ;
else remove(ans+ch , s , idx+1) ;
}
int main(){
    string s = "ragav" ;
    remove ("", s , 0 ) ;
}