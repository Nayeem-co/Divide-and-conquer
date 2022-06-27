#include<iostream>
using namespace std;

int partitiaion(int arr[], int p, int r){
    int i = p-1;
    int x = arr[r];
    for(int j=p  ; j<= (r-1) ; j++){
        if(arr[j] <= x){
            i = i+1;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i+1] , arr[r]);
    return i+1;
}

void Quicksort(int arr[], int p , int r){
    if(r < p){
        return;
    }
    int q = partitiaion(arr,p,r);
    partitiaion(arr, p, q-1);
    partitiaion(arr, q+1, r);
}

int main(int argc, char const *argv[])
{

    int arr[5] = {4,5,1,2,3};
    Quicksort(arr,0,4);
    for(int i=0; i< 5 ; i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
