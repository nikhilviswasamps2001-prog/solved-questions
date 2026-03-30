#include<iostream>
using namespace std ;
void pr(int x){
  if(x==0) return ;
  pr(x-1) ;
  cout<<x<<" " ; 
}
int main(){
int n ;
cout<<"enter a no " ;
cin>>n ;
cout<<"\n" ;
pr(n) ;
}
