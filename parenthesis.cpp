#include<iostream>
#include<vector>
#include<string>
using namespace std ;
void bracket(int n, int o, int c , string s){
    if(o==n && c==n){
              cout<<s<<" " ;
              return ;
        }
    
     if(c>o) return ;
    if(o<n){
    bracket(n,o+1,c,s+'(') ;
    }
    if(c<o){

    
    bracket(n,o,c+1,s+')') ;
    }
}
int main(){
int n ;
cin>>n ;
vector<string> v ;
string s = "" ;
bracket(n,0,0,s) ;
}