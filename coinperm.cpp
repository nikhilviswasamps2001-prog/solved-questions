#include<iostream>
#include<vector>
using namespace std ;
void comb(vector<int> v , int arr[] , int target , int n , int idx){
    if(target == 0){
      for(int i = 0 ; i<v.size();i++){
        cout<<v[i]<<" " ;
      }
      cout<<endl ;
    }
    if (target<0) return ;
    for(int i = idx ; i<n ; i++){
        if(target>=0){
        v.push_back(arr[i]) ;
        comb(v,arr,target-arr[i] , n,i) ;
        v.pop_back() ; 
        }
       
        
    }
}
int main(){
int arr[] = {2,3,5} ;
int target = 8 ;
vector<int> v ;
int n = sizeof(arr)/sizeof(arr[0]) ;
comb(v,arr,target ,n,0) ;
}