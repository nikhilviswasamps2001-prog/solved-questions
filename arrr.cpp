#include<iostream>
#include<vector>
using namespace std ;
void pr (vector<int>& v , int x, int idx){
    if(idx == x) return ;
    cout<<v[idx] <<" " ;
    pr(v,x,idx+1) ;
 
}
int main(){
    vector<int> v ={1,2,3,4,5,6,7,8,8,9,11} ;
    int l = v.size() ;
    pr(v,l,0) ;
}