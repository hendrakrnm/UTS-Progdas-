#include <iostream>
using namespace std;

int main (){
    int arr[10];
    int maxValue=0;

    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<10; i++){
        if(arr[i]>maxValue){
            maxValue = arr[i];
        }
    }
    int data[maxValue];
    
    for(int i=0; i<maxValue; i++){
        data[i]=0;
        for(int j=0; j<10; j++){
            if(arr[j]== i+1) data[i]=data[i]+1;
        }
    }
    
    for(int i=0; i<maxValue; i++){
        if(data[i]!=0){
            cout<< "angka " <<i+1<<" ada sebanyak "<<data[i];
            cout<<endl;
        } else continue;
    } 
}
