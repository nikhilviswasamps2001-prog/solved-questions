#include<iostream>
using namespace std ;
void sum(int x,int y  ){
    if(y == 0){
        cout<<x<<endl ;
        return ;
    }
        sum(x+y,y-1) ;
    }    

int main(){
     int n ;
    cout<<"enter a no to sum : " ;
    cin>>n ;
    sum(0,n) ;
}