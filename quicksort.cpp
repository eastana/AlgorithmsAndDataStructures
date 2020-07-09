 int partition(vector < int > & a, int start, int end) {
      int pivot = a[end];
      int P_index = start;
      for (int i = start; i < end; i++) {
        if (a[i] <= pivot) {
          swap(a[i], a[P_index]);
          P_index++;
        }
      }
      swap(a[end], a[P_index]);
      return P_index;
    }
    
    
  void quicksort(vector < int > & a, int start, int end) {
    if (start < end) {
      int P_index = partition(a, start, end);
      quicksort(a, start, P_index - 1);
      quicksort(a, P_index + 1, end);
    }
  }
