
#int firstOcc(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start<=end)
    {
        if (arr[mid] == key ){
            ans = mid;
            end = mid-1;
        }
        else if( key > arr[mid] ){
            start = mid+1;
        }
        
        else if( key< arr[mid] ){
            end = mid-1;
        }
        mid = start+ (end-start)/2;
    }
    return ans;
    
}
int lastOcc(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start<=end)
    {
        if (arr[mid] == key ){
            ans = mid;
            start = mid+1;
        }
        else if(key > arr[mid]){
            start = mid+1;
        }
        
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid = start+ (end-start)/2;
    }
    return ans;
    
}
int main()
{
    int arr[8]={1,2,3,3,3,5,6,3};
    cout<<"the first occurance of 3 is "<<firstOcc(arr, 8 , 3)<<endl;
    cout<<"the first occurance of 3 is "<<lastOcc(arr, 8 , 3)<<endl;

    return 0 ;
}