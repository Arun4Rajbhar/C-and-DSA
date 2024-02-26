#include<iostream>
using namespace std;

int main(){
    int x=78,y=0,z;
    try{
        if(y==0){
            throw 1;
        }  
        z=x/y;
        cout<<z<<"\n";
          
    }
    catch(int e){
        cout<<"divide by zero error"<<"\n";
    }
    cout<<"Bye";
    return 0;

}