#include<iostream>
using namespace std;
int main(){
    int a[]={1,3,52,2};
    char t[]={'y','j','h','n'};
    for(int i=0;i<4;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl<<endl;
    for(int x:a){
        cout<<x<<endl;
    }
    cout<<endl;
    for(char j:t){
        cout<<j<<endl;
    }
    return 0;
    
}