#include<iostream>
using namespace std ;
void zigzag(int n){
    if(n==0) return ;
    cout<<n<<"" ;
    zigzag(n-1) ;
    cout<<n<<"" ;
    zigzag(n-1) ;
     cout<<n<<"" ;
}
int main(){
    int n ;
    cout<<"entrer a postive integer : " ;
    cin>>n ;
    cout<<"\n" ;
    zigzag(n) ;
}