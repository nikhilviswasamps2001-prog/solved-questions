#include<iostream>
using namespace std ;
int power(int a , int b){ //  a = 2 , b = 8,7 ;
    if(b == 0 ) return 1 ;
    if(b== 1 ) return a ;
    int k = power(a,b/2) ;
    if(b%2== 0) return k*k;
    else return a*(k*k) ;
    }

int main(){
    int a,b ;
    cout<<"emter a  : " ;
    cin>>a ;
    cout<<"enter b : " ;
    cin>>b ;
    cout<<power(a,b) ;
    
}