#include<iostream>
using namespace std ;
void gm(int x){
    if(x==0) return ;
    cout<<"good mori"<<"\n" ;
    gm(x-1) ;
}
int main(){
int n ; 
cout<<"enter a no : " ;
cin>>n ;
gm(n) ;

}