void bubblesort(vector<int> &a,int start, int end){
  for(int i = start;i<end;i++){
    for(int j=start;j<end-1-i;j++){
      if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
      }
    }
  }
}
