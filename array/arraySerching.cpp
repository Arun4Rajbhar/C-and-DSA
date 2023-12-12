#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[7]={12,34,44,22,44,223,23};
    int target=424,count=0;
    for(int i=0;i<7;i++){
        if(a[i]==target){
            count=count+1;

        }

    }
    if(count>0){
        cout<<"element found \n";
    }
    else{
        cout<<"element not found \n";

    }
    /* code */
    return 0;
}

