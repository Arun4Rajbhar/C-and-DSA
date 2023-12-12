#include<iostream>
using namespace std;
int main(){
    int A[]={23,54,12,88,34,123,90};
    int max=0;

    for(auto x:A){
        if(max<x){
            max=x;
        }

    }
    cout<<max;
    return 0;
}