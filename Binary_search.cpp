 int searchInSorted(int arr[], int N, int k) 
    { 
       int s=0,e=N-1;
       while(s<=e){
           int m=s+(e-s/2);
            if(arr[m]==k)
              return 1;
           if(k>arr[m])
              s=m+1;
            else if(k<arr[m])
              e=m-1;
             
       }
      return -1;
    }
};