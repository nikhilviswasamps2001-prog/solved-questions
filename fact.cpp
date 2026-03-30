#include<iostream>
using namespace std ;

int gm(int x){
    int k = 1;
    for(int i = x ;i>0 ;i--){
      k*= i ;
    }
    return k ;
}
int main (){
int n ; 
cout<<"enter a no : " ;
cin>>n ;
cout<<gm(n) ;


}
