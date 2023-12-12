#include<iostream>
using namespace std;
int main(){
    double A[]={12.3,43.65,789.90,542.897,34.9};
    auto sum=0.0;
    for(auto x:A){
        cout<<x<<endl;
        sum=sum+x;

    }
    cout<<"Sum of array is "<<sum<<endl;
    return 0;
}