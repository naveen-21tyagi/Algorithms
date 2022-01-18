#include<iostream>
using namespace std;
int binarySearch(int *arr,int size,int target){
    int index,power;
    for(power=1;power<size;power=power<<1);

    for(index=0;power;power=power>>1){
        if(index+power<size && arr[index+power]<=target)
            index+=power;
    }
    if(arr[index]==target)
        return index;
    return -1;

}
int main(){
    int arr[]={21,23,52,56,78,87,99};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=57;
    int result=binarySearch(arr,size,target);
    (result==-1)
    ?cout<<"Element not found."
    :cout<<"Element found at "<<result;
    return 0;
}