// #include<iostream>
// using namespace std;
// int main(){
//  int arr[3][4] = {1,2,3,4,5,6,7,9,94,2};

//  for(int i = 0; i<3; i++){
//     for(int j=0; j<4; j++){
//     cout<<arr[i][j]<<"\t";
//  }
//     cout<<"\n";
//  }

// return 0;
// }



#include<iostream>
using namespace std;
bool isPresent(int arr[][4] , int ){

}
int main(){
int n;
int arr[3][4];
for(int i=0; i<3 ;i++){
    for(int j =0 ;j<4 ;j++){
        cin>>arr[i][j];    }
}
for(int i = 0 ; i<3; i++){
    for(int j =0; j<4; j++){
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<"enter the element to be searched"<<endl;
cin>>n;
if(isPresent(arr,n,3,4)){
    cout<<"element found"<<endl;
}
else{
    cout<<"not found"<<endl;
}

return 0;
}