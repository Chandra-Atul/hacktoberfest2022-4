#include<iostream>
using namespace std;
bool binarySearch(int *arr, int l, int r, int k){
	//base case
	//element not found
	if(l>r)
		return false;
		
	int mid = l + (r-l)/2;
	
	//element found
	if(arr[mid] == k)
		return true;
	
	if(arr[mid]<k){
		binarySearch(arr,mid+1,r,k);
	}else if(arr[mid]>k){
		binarySearch(arr,l,mid-1,k);
	}
}
int main(){
	int arr[6] = {2,4,6,10,14,16};
	int size = 6;
	int key = 11;
	
	bool ans = binarySearch(arr,0,size-1,key);
	if(ans){
		cout<<"element found"<<endl;
	}else{
		cout<<"not found"<<endl;
	}
	return 0;
}
