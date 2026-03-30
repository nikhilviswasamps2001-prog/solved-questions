#include<iostream>
#include<string>
using namespace std ;
bool palin(string s , int strt , int end){
    if(strt>end) return true ;
    if(s[strt] != s[end]) return false ;
 else return palin(s,strt+1,end-1) ;
}
int main(){
string s = "dad" ;
cout<<palin(s,0,s.length()-1) ;
 }