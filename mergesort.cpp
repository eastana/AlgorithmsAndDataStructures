  
void merge(vector<int> &a, int left, int right, int mid)
{
 int n1 = mid - left + 1;
 int n2 = right - mid;
 int l[1000], r[1000];
 for (int i = 0; i < n1; i++)
  l[i] = a[left + i];
 for (int j = 0; j < n2; j++)
  r[j] = a[mid + 1 + j];
 int i = 0, j = 0, k = left;
 while (i < n1 && j < n2)
 {
  if (l[i] <= r[j])
  {
   a[k] = l[i];
   i++;
  }
  else
  {
   a[k] = r[j];
   j++;
  }
  k++;
 }

 while (i < n1)
 {
  a[k] = l[i];
  i++;
  k++;
 }

 while (j < n2)
 {
  a[k] = r[j];
  j++;
  k++;
 }
}
void mergesort(vector<int> &a, int left, int right) {
 if (left < right) {
  int mid = (left + right) / 2;
  mergesort(a, left, mid);
  mergesort(a, mid + 1, right);
  merge(a,left,right,mid);
 }
}
