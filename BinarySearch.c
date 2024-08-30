#include <stdio.h>
int binary_search(int arr[],int l,int r,int x);
int main(void) {
  int arr[]={1,4,5,6,8,18,59},n;
  n = sizeof(arr)/sizeof(arr[0]);
  int x=5,result;
  result=binary_search(arr, 0, n-1, x);
  if(result==-1)
    printf("No element found.");
  else
    printf("The index of the element is %d",result);
  return 0;
}
int binary_search(int arr[],int l,int v,int x){
  while (l<=v){
    int mid=(l+v)/2;
    if(arr[mid]==x)
      return mid;
    else if (arr[mid]<x)
      l=mid+1;
    else  
      v=mid-1;
  }
  return -1;
}
