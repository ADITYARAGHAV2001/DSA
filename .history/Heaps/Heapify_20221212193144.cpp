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
    int i = 1
    if(size == 0){
        cout<<"Nothing to delete"<<endl;
    }
    else{
        int leftIndex = 2 * i ;
    }
 }
};
int main(){

return 0;
}