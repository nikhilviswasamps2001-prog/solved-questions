#include<iostream>
#include<string>
#include<vector>
using namespace std ;
void genrate(string ans , int n){
    if(ans.size()== n){
        cout<<ans<<" " ;
        return ;
    }
    genrate(ans+'0' , n ) ;
    if(ans.empty() || ans.back()== '0') 
    genrate(ans+'1' , n) ;
    
    
 }
int main(){
int n ;
cin>>n ;
string ans = "" ;
genrate(ans,n) ;
} 