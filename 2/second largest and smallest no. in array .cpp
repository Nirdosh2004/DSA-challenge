int secondSmallestFn(int &n , vector<int>& a){ //O(n)
    int smallest = a[0];
    int secSmall = INT_MAX;
    for(int i = 1 ;i< n ;i++){
        if(a[i]<smallest ){
            secSmall = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && a[i] < secSmall )
        {
            secSmall = a[i];
        }
    }
    return secSmall;
}

int secondLargestFn(int &n ,vector<int>& a){  //O(n)
    int large = a[0];
    int secLarge = INT_MIN;
    for(int i=1 ; i<n ;i++){
        if(a[i] > large){
            secLarge = large;
            large = a[i];
        }
        else if(a[i] < large && a[i] > secLarge){
            secLarge = a[i];
        }
    }
    return secLarge;
}


vector<int> getSecondOrderElements(int n, vector<int> a) {
//total TC = O(2n) = O(n) because 2 is constant 
  int secondSmallest = secondSmallestFn(n , a);
  int secondLargest = secondLargestFn(n,a);
  return {secondLargest , secondSmallest};
    
}
