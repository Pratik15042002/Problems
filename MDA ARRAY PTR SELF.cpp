
#include <iostream>

using namespace std;

int main()
{
int m,n;
cin>>m>>n;
 int *arr[m];
 
 
  
 for( int i=0;i<m;i++) {
     for( int j=0;j<n;j++){
 arr[i]=new int[n]; 
        }
 }
 for( int i=0;i<m;i++){
     for( int j=0;j<n;j++){
         arr[i][j]=10;
         cout<<arr[i][j];
     }
     cout<<endl;
 }
     return 0;
}