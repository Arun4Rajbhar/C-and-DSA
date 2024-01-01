#include<iostream>
using namespace std;
int *fun(int size){
    int *p=new int[size];
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    return p;//this function is returned by address 

}
int main(){
    int *ptr=fun(5);
    cout<<ptr;
}