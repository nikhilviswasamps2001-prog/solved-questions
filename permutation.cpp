// permutation
#include<iostream>
#include<string>
using namespace std ;
void pmn(string ans , string s){
    if ( s.size()== 0 ){
        cout<<ans <<endl;
        return ;
    }
for(int i = 0 ; i<s.size();i++){
    char ch = s[i] ;
    string left = s.substr(0,i) ;
    string right = s.substr(i+1  ) ;
    string rest = left + right ;
    pmn(ans+ch , rest) ;
}
}
int main(){
string s = "abc" ;
// string ans = "" ;
pmn("" , s) ;
}