#include<iostream>
#include<vector>
using namespace std ;
int fibo(int x,vector<int> &k ){
if (x == 0 || x== 1) return  1 ;
 k[x] = fibo(x-1,k) + fibo(x-2,k) ;
  return k[x] ;
}
int main(){
int n ;
cout<<"enter the no of term : " ;
cin>>n ;
vector<int> k(n+1


);
cout<<fibo(n , k) ;
}