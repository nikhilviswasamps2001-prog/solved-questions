#include<iostream>
using namespace std ;
void pr(int x){
    if(x==0) return ;
     cout<< x<<"\n" ;
     pr(x-1) ;
}
int main(){
int n ;
cout<<"enter a no " ;
cin>>n ;
pr(n) ;
}
