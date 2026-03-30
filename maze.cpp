#include<iostream>
#include<vector>
using namespace std ;
void maze (int sr ,int sc , int er ,int ec , string s){
    if(sr>er || sc>ec)    return ;
    
    if(sr==er && sc==ec){
        cout<<s<<endl ;
        return ;
    }
    maze(sr+1,sc,er,ec,s+"d") ;
    maze(sr,sc+1,er,ec,s+"r") ;
}
int main(){
int x,y ;
cout<<"enter the length " ;
cin>>x ;
cout<<"enter the width " ;
cin>>y ;
string s = "" ;
maze(0,0,x,y,s) ;
}