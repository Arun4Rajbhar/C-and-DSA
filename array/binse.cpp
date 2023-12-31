#include<iostream>
using namespace std;
int main(){
    int arr1[]={12,23,34,45,56,67,78,89};
    int target=78,l=0,h=7;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr1[mid]==target){
            cout<<"Found at index: "<<mid;
            return 0;
        }
        else if (arr1[mid]>target)
        {
            h=mid-1;
        }
        else{
            l=mid+1;

        }
        
        

    }
    cout<<"Not found";
    return 0;
}