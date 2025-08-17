#include<iostream>
using namespace std;

int ArraySum(int arr[],int n){
    if(n<0) return 0;
    return arr[n]+ArraySum(arr,n-1);
}
int main(){
    int a[]={4,5,6,7,8};
    int sum=ArraySum(a,sizeof(a)/sizeof(int)-1);
    cout<<"Array sum:"<<sum<<endl;
}