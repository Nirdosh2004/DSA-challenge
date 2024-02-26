vector<int> getSecondOrderElements(int n, vector<int> a) {
    //TC = O(n log n ) + O(n*n) 
    vector<int> ans;
    sort(a.begin() , a.end());
     for(int i=n-1 ; i>=0 ;i--){
        if(a[i-1]<a[i])
        {
            ans.push_back(a[i-1]);
            break;
        }
    }
    for(int i=0 ; i<n ;i++){
        if(a[i]<a[i+1])
        {
            ans.push_back(a[i+1]);
            break;
        }
    }
   
    return ans;
}
