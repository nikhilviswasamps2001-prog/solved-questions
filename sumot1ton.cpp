

#include<iostream>
using namespace std ;
int su(int n){
   if(n == 0) return 0 ; 
   return n +su(n-1) ;
}
int main(){
    int n ;
    cout<<"enter a no to get its sum : " ;
    cin>>n ;
    cout<<su(n) ;
}