void rotate(int arr[], int n)
{
    int first=arr[n-1];
    for(int i=0;i<n;i++){
        int temp=arr[i];
        arr[i]=first;
        first=temp;
        
    }
