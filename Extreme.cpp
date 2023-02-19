#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int e=size-1;
     for(int s=0;s<size;s++){
        if(s==e){
            cout<<"First";
            cout<<arr[s]<<" ";break;
        }
        cout<<" Second";
            cout<<arr[s]<<" ";
            cout<<arr[e]<<" ";
       e--;
    }
}