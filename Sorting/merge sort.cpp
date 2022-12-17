#include<iostream>
using namespace std;


void MergeSort(int arr[],int low,int high){
    if(low<high){//this condition must be to ensure program doesn't have any runtime error
        int mid = (low+high)/2;

        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);


    }
}

void Merge(int arr[],int low,int mid,int high){
    int i=low,j=mid+1,k=low;
    int temp[100000];

    while(i<=mid && j<=high){
        if(arr[i]<arr[j])temp[k++] =arr[i++];


        else
        temp[k++] = arr[j++];
    }

    
    if(i>mid)//Means we have completed first half now we have only second half remaining{
        while(j<= high)temp[k++] =arr[j++];
    
    
    else{
            while(i<=mid)temp[k++] = arr[i++];
    }


   for(int k=low;k<=high;k++){
    arr[k]=temp[k]; // This will move sorted array from temp array to original array
   }



}