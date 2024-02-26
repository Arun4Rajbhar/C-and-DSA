#include<iostream>
using namespace std;
int division(int x,int y){
    if(y==0)
        throw 1;
    return x/y;    

}
int main(){
    int a=90,b=0,c;
    try{
        cout<<division(a,b)<<"\n";
    

    }
    catch(int e){
        cout<<"divide by zero error"<<"\n";


    }
    cout<<"Bye";

}