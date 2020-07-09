//Before must use sort
bool binsearch(vector<int> &a, int left, int right, int f){
  while(left<=right){
      int mid=(left+right)/2;
      if(a[mid]==f){
          return true;
      } else if(f>a[mid]){
          left=mid+1;
      } else{
          right=mid-1;
      }
  }
    return false;
}
