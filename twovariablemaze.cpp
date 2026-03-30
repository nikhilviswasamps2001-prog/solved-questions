#include<iostream>
#include<string> 
using namespace std ;
int maze(int x ,int y){
    if(x<1 || y<1) return 0 ;
    if(x==1 && y== 1) return 1 ;
    return maze(x-1,y) + maze(x,y-1) ;
}
void printpath(int x ,int y , string s ){
    if(x<1 || y<1) return ;
    if(x==1 && y== 1) {
        cout<<s<<"\n" ;
        return ;
    }
    printpath(x-1,y,s+"d") ;
    printpath(x,y-1,s+"r") ;
}
int main(){
int x,y ;
cout<<"enter the length " ;
cin>>x ;
cout<<"enter the width " ;
cin>>y ;
// cout<<maze(x,y) ;
printpath(x,y,"") ;
}