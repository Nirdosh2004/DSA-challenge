vector<int> getSecondOrderElements(int n, vector<int> a) {
  sort(a.begin() , a.end());  //O( n log n)
  vector<int> ans;
  for(int i=0 ; i<n;i++)  //O(n)
  {
      if(a[i]<a[i+1] && a[n-1]>a[n-2])
      {
            ans.push_back(a[n-2]);
          ans.push_back(a[i+1]);
        
          break;
      }
      n--;
  }
  return ans;
}
