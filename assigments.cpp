#include<iostream>
using namespace std ;
int sum(int x , int y , int n){
    return (n*(x+y))/4  ;
}
int main(){
    int x , y , n ;
    cout<<"enter first digit : " ;
    cin>>x ;
    cout<<"enter seconf digit : " ;
    cin>>y ;
    n = (y-x+2)/2 ;
    cout<<n ;
//    cout<< sum(x,y,n) ;
}