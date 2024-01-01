#include<iostream>
using namespace std;
int main(){
    // char b1[10];
    // cout<<"enter your name\n";
    // cin>>b1;
    // cout<<b1<<"\n";//this method leads one issue like if string includes spaces it will only consider very first string

    char c1[20];
    cout<<"enter your string with space\n";
    cin.getline(c1,20);
    // cout<<c1<<"\n";
    char d1[20];
    cout<<"enter your string in line\n";
    cin.getline(d1,20);
    // cout<<d1;zxmhbv


    return 0;
}