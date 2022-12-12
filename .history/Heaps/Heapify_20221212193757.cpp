#include<iostream>
using namespace std;
class heap{
  public:
  int arr[100];
  int size;
  heap(){
    arr[0] = -1;
    size = 0;
  }
  void insert(int val){
    size  = size+1;
    int index = size;
    arr[index] = val;
    while(index>1){
        int parent = (index/2);
        if(arr[parent]  < arr[index]){
            swap(arr[parent], arr[index]);
            index = parent;
        }
        else{
            return;
        }
    }
  }
 void deleteFromHeap(){
    
    if(size == 0){
        cout<<"Nothing to delete"<<endl;
        return;
    }
    else{
        int i = 1;
        arr[i] = arr[size];
        size--;
        while(i < size){
        int leftIndex = 2*i ;
        int rightIndex = 2*i +1;
        if(leftIndex<size && arr[leftIndex] > arr[i]){
            swap(arr[i], arr[leftIndex]);
            i = leftIndex;
        }
        else if(rightIndex<size && arr[rightIndex] > arr[i]){
            swap(arr[i], arr[rightIndex]);
            i = rightIndex;
        }
        else{
            return;
        }
        }
    }
 }
 void print(){
    for(int i = 1; i<=size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
 }
};
int main(){
heap h1;
h1.insert(50);
h1.insert(55);
h1.insert(53);
h1.insert(52);
h1.insert(54);
h1.print();
h1.delete();
h1.print();
return 0;
}