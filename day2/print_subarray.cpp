#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
//write a code to print all sub arrays
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
       for(int k=i;k<=j;k++){
        cout<<arr[k];
       }cout<<",";
    }cout<<endl;

}






    return 0;
}
