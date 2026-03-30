#include<iostream>
using namespace std ;
int gcd(int x , int y ){
    if(y%x== 0){
        return x ;  
    }
   return gcd(y%x, x  ) ;         
}
int main(){
    int x ,  y ;
    cout<<"enter a no :"  ;
    cin>>x ;
    cout<<"enter a no :"  ;  
    cin>>y ;
    int n = min(x,y) ;
    int m = max(x,y) ;
    // int k = m%n ; 
    cout<<gcd(x,y) ;
}