	int print2largest(int arr[], int n) {
	    // code here
	    int large=arr[0],ans=-1;
	    for(int i=1;i<n;i++){
	        if(arr[i]>large){
	            ans=large;
	            large=arr[i];
	        }
	        else if(arr[i]<large && arr[i]>ans)
	        ans=arr[i];
	    }
	    return ans;