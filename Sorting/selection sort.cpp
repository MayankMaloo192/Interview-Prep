//  For selection sort we will find minimum element for ith index each time and we swap with ith index

#include<iostream>

void SelectionSort(int arr[],int n){

  for(int i=0;i<n-1;i++){
    int mini =i;
    
    for(int j=i+1;j<n;j++){
    if(arr[j]<arr[mini])mini = j;
    
    }
    
    swap(arr[i],arr[mini]);
  
  }

}
