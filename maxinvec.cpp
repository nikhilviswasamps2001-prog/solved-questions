#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void printmax(vector<int> &v,int idx , int x){
    if(idx== v.size() ){
        cout<<x ;
        return ;
    }
    if(v[idx]> x) x= v[idx] ;
    printmax(v,idx+1,x) ;
}
int main(){
vector<int> v;
v.push_back(1); 
v.push_back(11); 
v.push_back(12); 
v.push_back(14); 
v.push_back(43); 
v.push_back(19); 
v.push_back(18); 
v.push_back(01); 
v.push_back(91); 
printmax(v,0,INT_MIN) ;
}