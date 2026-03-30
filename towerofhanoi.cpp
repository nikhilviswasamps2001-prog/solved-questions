#include<iostream>
using namespace std ;
void out (int n , char s, char h , char d){
    if(n==0) return ;
out(n-1,s,d,h) ;
cout<<s<<"->"<<d<<"\n" ;
out(n-1,h,s,d) ;
}
int main(){
    int n ;
    cin>>n ;
    out(n,'A','B','C') ;
}