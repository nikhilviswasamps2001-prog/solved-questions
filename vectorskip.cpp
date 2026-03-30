#include<iostream>
#include<vector>
using namespace std ;
vector<int> remove(vector<int>&ne , vector<int>&v , int idx){
    if(idx == v.size()){
        return ne ;
    }
    int k = 1 ;
    if(v[idx] == k )  return remove(ne, v , idx+1) ;
    else {
      ne.push_back(v[idx]) ;
      return remove(ne, v , idx+1) ;
    } 
}
int main(){
vector<int> v;
vector<int> ne ;
v.push_back(1) ;
v.push_back(2) ;
v.push_back(3) ;
v.push_back(1) ;
v.push_back(1) ;
v.push_back(4) ;
v.push_back(1) ;
v.push_back(7) ;
remove(ne,v,0) ;
for(int i = 0 ; i<ne.size(); i++){
    cout<<ne[i]<<" " ;
}
}