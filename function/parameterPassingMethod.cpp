#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swappop(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
void swapref(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}
int main(){
    //parameter can be passed to any function using three method
    //1 by value
    //2 by address
    //3 by reference
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y<<"\n";//in this situation number will not be swaped caused it'll only swap, swap function value but not main method
    swappop(&x,&y);
    cout<<x<<" "<<y<<"\n";//this method is called by address and it'll swap the value cause it is swapping the address
    swapref(y,x);//this function is called by reference so that no machine code will be generated seperatly but code of that function will be copied in main functio
    cout<<x<<" "<<y;

}