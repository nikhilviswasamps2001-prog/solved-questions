#include<iostream>
using namespace std ;
int power(int x ,int y, int ans){
  if(y== 0) return ans ;
   power ( x ,y-1,ans*x) ;
}
int main(){
    int a, b ;
    cout<<"enter a : " ;
    cin>>a ;
    cout<<"enter b : " ;
    cin>>b ;
    int ans = 1;
   cout<< power(a,b,1) ;
}