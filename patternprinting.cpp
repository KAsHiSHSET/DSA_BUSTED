#include<iostream>
using namespace std;
// int main()
// {

//     for(int i=0;i<8;i++){
//         for(int j=0;j<8;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// } 
// int main()
// {
//     for(int row=1;row<=5;row++){
//         int count=row;
//         for(int col=1;col<=row;col++){
         
//          cout<<count<<" ";
//          count--; 

//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     char ch;
//     for(int row=97;row<=102;row++){
//         for(int col=97;col<=row;col++){
//             ch=row;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int row=5;row>0;row--){
//         for(int col=1;col<=row;col++){
//          cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int row=5;row>0;row--){
//         int count=1;
//         for(int col=1;col<=row;col++){
//             cout<<count;
//             count++;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     for(int row=5;row>=1;row--){
//         for(int col=5;col>=row;col--){
//       cout<<col<<" ";
//     }
//     cout<<endl;}
// }
// int main(){
//     for(int row=1;row<=5;row++){
//         for(int col=5-row;col>0;col--){
//         cout<<" ";
//         }
//         for(int col=1;col<=row;col++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }
// }
// int main(){
//     for(int row=1;row<=4;row++){
//        for(int col=4-row;col>0;col--){
//         cout<<" ";
//         }
//          for(int col=1;col<=row;col++){
//            cout<<row;
//          }
//          cout<<endl;
//     }
// }
// int main(){
//  for(int row=1;row<=4;row++){
//        for(int col=4-row;col>0;col--){
//           cout<<" "; }
//           int count=1;
//         for(int col=1;col<=row;col++){
//             cout<<count;
//             count++;
//         }cout<<endl;
// }
// }
// int main(){
//     char ch;
//     for(int row=65;row<=69;row++){
//         for(int col=69-row;col>0;col--){
//           cout<<" "; }
          
//           for(int col=65;col<=row;col++){
//             ch=col;
//            cout<<ch;
//           }
//           cout<<endl;
//     }}
   
//    int main(){
//     for(int row=1;row<=4;row++){
//        for(int col=4-row;col>0;col--){
//            cout<<" "; }
//        for(int col=row;col>=1;col--){
//         cout<<col;
//        }    
//        cout<<endl;
//    }}

// int main(){
//     for(int row=1;row<=4;row++){
//        for(int col=4-row;col>0;col--){
//            cout<<" "; }
//         for(int col=1;col<=2*row-1;col++){
//             cout<<"*";
//         }cout<<endl;
// }}
//  int main(){
// for(int row=1;row<=5;row++){
//      for(int col=5-row;col>0;--col){
//            cout<<" "; }
//      for(int col=1;col<=row;++col){
//         cout<<col;
//      }
//      for(int col=row-1;col>=1;--col){
//         cout<<col;
//      }
//      cout<<endl;
// }}
// int main(){
//     if(5>4<3==2){
//         cout<<"\n true";
//     }
//     else
//     {
//         cout<<"no";
//     }
// }
// int evenlyDivides(int N){
//         int count=0;
//         while(N!=0){
//             int rem=N%10;
//             if(N%rem==0){
//                 count++;
//             }
//             N=N/10;
//         }
//         return count;
//     }

//     int main(){
//     int N;
//     cout<<"\nenter the no:\n";
//     cin>>N;
//     int c=evenlyDivides(N);
//     cout<<c;
//     }
     
//bit
// #include<bits/stdc++.h>
// #include<math.h>
// int main(){
//     int n;
//     cout<<"\nenter\n";
//     cin>>n;
//     int i=0;
//     int ans=0;
//     while(n!=0)
//     {int bit=n&1;
//     ans=ans+bit*10; 
//     cout<<ans<<endl;
//     n=n>>1;
//     i++;
   
//     }
//     cout<<ans;
// }
// Online C++ compiler to run C++ program online
//prime factors of prime no 
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//   int n=37;
//   vector<int> vec;
//   for(int i=2;i<=n;i++){
//     //   if(n%i==0){
//     //       vec.push_back(i);
//     //   }
//       while(n%i==0){
//           vec.push_back(i);
//           n=n/i;
//       }
//   }
//   for(int i=0;i<vec.size();i++){
//       cout<<vec[i]<<",";
//   }

//     return 0;
// }
// int main(){
//     int n=780;
//      vector<int> vec;
//     for(int i=2;i*i<n;i++){
//         if(n%i==0){
//             vec.push_back(i);
//         }
//         while(n%i==0){
//             n=n/i;
//         }
//     }
//     if(n!=1)vec.push_back(n);
//     for(int i=0;i<vec.size();i++){
//      cout<<vec[i]<<",";
//   }}
//print all divisors of a number
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=100;
//     int count=0;
//     vector<int> vec;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             count++;
//             vec.push_back(i);
//             if((n/i)!=i){
//                 count++;
//                 vec.push_back(n/i);
//             }
//         }
//         if(count>2)break;
//     }
//     if(count==2){
//         cout<<"prime";
//     }
//     for(int i=0;i<vec.size();i++){
//      cout<<vec[i]<<",";
    
// }}
#include<bits/stdc++.h>
using namespace std;
// int main(){ int count=0;
// vector<int> vec;
// int n=2;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//           count++;
//           vec.push_back(i);
//           if((n/i)!=i){
//               count++;
//               vec.push_back(n/i);
//           }
//         }
//     }
//     if(count==2){
//         cout<<n<<" is prime";
//     }
//      for(int i=0;i<vec.size();i++){
//      cout<<vec[i]<<",";
// }}'
// int isprime(int n){
//     int count=0;
    
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//           count++;
          
//           if((n/i)!=i){
//               count++;
              
//           }
//         }
//     }
//     if(count==2){
//       return 1;
//     }
//     else
//      return 0;
// }
// int main(){
//     int count=0;
//     int n=38;
//     vector<int> vec;
//     vector<int> primes;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//          if(isprime(i))
//           {count++;
//           primes.push_back(i);
//           }
//           vec.push_back(i);
//           if((n/i)!=i){
//               if(isprime(n/i)){
//               count++;
//               primes.push_back(n/i);
//              }
//               vec.push_back(n/i);
//           }
//         }
//     }
//     cout<<"no of prime divisors:"<<count<<endl;
//     cout<<"diviors are:"<<endl;
//      for(int i=0;i<vec.size();i++){
//       cout<<vec[i]<<",";}cout<<endl;
//     cout<<"prime divisors are:"<<endl;
//     for(int i=0;i<primes.size();i++){
//       cout<<primes[i]<<",";}
    
// }
//rotating an array
// int main(){
//   int k=3;
//   vector<int> vec={1,2,3,4,5,6,7};
//   vector<int> temp(k,0);
//   int j=0;
//   for(int i=0;i<temp.size();i++){
//     temp[i]=vec[j];
//     j++;
//   }
//   // for(auto y:temp){
//   //   cout<<y<<endl;
//   // }i
   
//   for(int j=k;j<vec.size();j++){
//    vec[j-k]=vec[j];
//   }
//   for(int i=k+1;i<vec.size();i++){
//     vec[i]=temp[i-k-1];
//   }

//    for(auto y:vec){
//     cout<<y<<endl;
//   }
// }


 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {  int i=0,j=0;
    vector<int> unions;
       //n is the size of array1
       //m is the size of array2
       while(i<n&&j<m){
           if(arr1[i]<=arr2[j]){
               if(unions.size()==0||unions.back()!=arr1[i]){
                   unions.push_back(arr1[i]);
                   
               }
               i++;
           }
           else{
               if(unions.size()==0||unions.back()!=arr2[j]){
                   unions.push_back(arr2[j]);
                  
               }
               j++;
           }
       }
       while(i<n){
           if(unions.size()==0||unions.back()!=arr1[i]){
                   unions.push_back(arr1[i]);
                   i++;
               }
       }
       while(j<m){
           if(unions.size()==0||unions.back()!=arr2[j]){
                   unions.push_back(arr2[j]);
                   j++;
               }
       }
       return unions;
    }
int main(){
  int arr1[6]={1,1,2,3,4,5};
  int arr2[6]={2,3,4,4,5,6};
  int n=6;
  int m=6;
  vector<int> unionarr=findUnion(arr1,arr2,n,m);
  for(auto i:unionarr){
    cout<<i<<endl;
  }

}