/* tc== O(n)
sc==o(n)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void functions(int i,int n){
    if(i>n)
      return;
    cout<<i<<endl;
    cout<<"kshish"<<endl;
    functions(i+1,n);
    
}
int main(){
    cout<<"recursion starts"<<endl;
    int n=4;
    int i=1;
    functions(i,n);
    cout<<"recursion ends";

}*/
/*#include <iostream>
using namespace std;
void function(int n){
    if(n<0){
        return;
    }
    cout<<n<<endl;
    n=n-1;
    function(n);

}
int main(){
  function(5);
}*/
//PRINT N TO 1
/*#include<iostream>
using namespace std;
void function(int i,int n){
    if(i>n) return;

    function(i,n);
    
    cout<<i<<endl;
    i=i+1;
}
int main(){
  int n;
  cout<<"jash";
  function(1,4);
}*/
//sum 1 to n
/*#include<iostream>
using namespace std;
void function(int n, int sum){
    if(n<=0){
        cout<<sum;
        return;
    }
    function(n-1,sum+n);
}
int main(){
    int n;
    cout<<"enter the value uptill which sum has to be printed\n";
    cin>>n;
    int sum=0;
    function(n,sum);
}*/
//recurison on array
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void functions(vector<int> &arr,int l,int r){
  if(l>=r){
      return;
  }
  swap(arr[l],arr[r]);
  l++;
  r--;
  functions(arr,l,r);
}
int main(){
    vector<int> arr={1,2,3,4,5};
     int left=0;
     int right=arr.size()-1;
     functions(arr,left,right);
     for(int i=0;i<arr.size();i++){
       cout<< arr[i]<<endl;}

}*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
   /* vector<int> arr={1,2,3,4,5};

void functions(vector<int> &arr,int l){
  if(l>=arr.size()/2){
      return;
  }
  swap(arr[l],arr[arr.size()-l-1]);
  l++;
  
  functions(arr,l);
}
int main(){
   // vector<int> arr={1,2,3,4,5};
     int left=0;
    // int right=arr.size()-1-left;
     functions(arr,left);
     for(int i=0;i<arr.size();i++){
       cout<< arr[i]<<endl;}

}*/

// void print(vector<int> &ds){
//   cout<<"{";
// for(int i=0;i<ds.size();i++){
//   cout<<ds[i]<<",";

// }
// cout<<"}"<<endl;
// return;
// }
// void printsubseq(int index,vector<int> &arr,vector<int> &ds){
//   if(index==arr.size()){
//     print(ds);
//     return;
//   }
//   ds.push_back(arr[index]);
//   printsubseq(index+1,arr,ds);
//   ds.pop_back();
//   printsubseq(index+1,arr,ds);
// }
// int main(){
//     vector<int> ds;
//     vector<int> arr={3,1,2};
//     printsubseq(0,arr,ds);
// }
// void print(vector<int> &ds){
//   cout<<"{";
// for(int i=0;i<ds.size();i++){
//   cout<<ds[i]<<",";

// }
// cout<<"}"<<endl;
// return;
// }
// void printsubseq(int index,vector<int> &arr,vector<int> &ds){
//   if(index==arr.size()){
//     print(ds);
//     return;
//   }
//   ds.push_back(arr[index]);
//   printsubseq(index+1,arr,ds);
//   ds.pop_back();
//   printsubseq(index+1,arr,ds);
// }
// int main(){
//     vector<int> ds;
//     vector<int> arr={3,1,2};
//     printsubseq(0,arr,ds);
// }
//   int target=2;
// void print(vector<int> &ds){
//   cout<<"{";
// for(int i=0;i<ds.size();i++){
//   cout<<ds[i]<<",";

// }
// cout<<"}"<<endl;
// return;
// }
// void printsubseq(int index,vector<int> &arr,vector<int> &ds,int sum){
//   if(index==arr.size()){
//     if(sum==target){
//     print(ds);
//     return;}
//     return;
//   }
//   sum=sum+arr[index];
//   ds.push_back(arr[index]);
//   printsubseq(index+1,arr,ds,sum);
//   sum=sum-arr[index];
//   ds.pop_back();
//   printsubseq(index+1,arr,ds,sum);
// }
// int main(){
//     vector<int> ds;
//     vector<int> arr={1,2,1};
//     int sum=0;
    
//     printsubseq(0,arr,ds,sum);
// }
//   int target=2;
// void print(vector<int> &ds){
//   cout<<"{";
// for(int i=0;i<ds.size();i++){
//   cout<<ds[i]<<",";

// }
// cout<<"}"<<endl;
// return;
// }
// bool printsubseq(int index,vector<int> &arr,vector<int> &ds,int sum){
//   if(index==arr.size()){
//     if(sum==target){
//     print(ds);
//     return true;}
//     return false;
//   }
 
//   ds.push_back(arr[index]);
//    sum=sum+arr[index];
//   if(printsubseq(index+1,arr,ds,sum)==true){
//     return true;}
  
//   sum=sum-arr[index];
//   ds.pop_back();
//   if(printsubseq(index+1,arr,ds,sum)==true){
//     return true;}
  
//   else
//     return false;
    
// }
// int main(){
//     vector<int> ds;
//     vector<int> arr={1,2,1};
//     int sum=0;
    
//     bool t=printsubseq(0,arr,ds,sum);
//     cout<<"present or not "<<t;
// }
//no of times it occurs
//  int target=2;
// void print(vector<int> &ds){
//   cout<<"{";
// for(int i=0;i<ds.size();i++){
//   cout<<ds[i]<<",";

// }
// cout<<"}"<<endl;
// return;
// }
// int printsubseq(int index,vector<int> &arr,int sum){
//   if(index==arr.size()){
//     if(sum==target){
//     //print(ds);
//     return 1;}
//     return 0;
//   }
 
//   //ds.push_back(arr[index]);
//    sum=sum+arr[index];
//   int left=printsubseq(index+1,arr,sum);
  
//   sum=sum-arr[index];
//   //ds.pop_back();
//   int right=printsubseq(index+1,arr,sum);
//    return left+right;
    
// }
// int main(){
//     vector<int> ds;
//     vector<int> arr={1,2,1};
//     int sum=0;
    
//     int t=printsubseq(0,arr,sum);
//     cout<<"present or not "<<
// }
