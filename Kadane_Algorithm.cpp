#include<bits/stdc++.h>
using namespace std;
int maxsubarraysum(int arr[],int size){
    int maxsofar = INT_MIN, maxendinghere = 0;
    int start = 0,end = 0,s = 0;
    for(int i=0; i<size;i++){
        maxendinghere = maxendinghere+arr[0];
        if(maxsofar<maxendinghere){
            maxsofar = maxendinghere;
            start = s;
            end = i;
        }
        if(maxendinghere<0){
            maxendinghere = 0;
            s = i + 1;
        }
    }
    cout << "Maximum contiguous sum is " << maxsofar<< endl;
    cout<<"Starting index "<<start<<endl<<"Ending index "<<end<<endl;
}
int main(){
    int a[] = {2,-4,8,7,4,-6,-9,-4};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxsubarraysum(a,n);
    return 0;
}
