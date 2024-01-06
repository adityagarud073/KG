#include<bits/stdc++.h>
using namespace std ;

bool search(int arr,int size,int target,int index){
     
     if(index>=size){
      return false ;
     }
     if(index==target){
      return true;
     }

     bool ans = search(arr,size,target,index++);
     return ans;

}


int main(){

  int arr[]={1,2,3,4,5};
  int size=5;
  int index=0;
  int target=4;
  

  // cout<<" yes or not->"<<search(arr,size,target,index);



return 0;
}