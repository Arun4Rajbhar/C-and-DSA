#include<iostream>
using namespace std;
class rectangle{
    private: 
        int len;
        int bri;
    public:
        int setLen(int l){//setting the len and bri, private variable using member of calss
            if(l>=0){
                len=l;
            }
            else{
                len=1;
                LenError();
            }
        }  
        int setBri(int b){
              if(b>=0){
                bri=b;
            }
            else{
                bri=1;
                BriError();
                
            }
        }
        void LenError(){
            cout<<"Invalid value of length so length will be assigned to 0";

        }
        void BriError(){
            cout<<"Invalid value of breath so breath will be assigned to 0";

        }
        int getlen(){
            return len;
        } 
        int getbri(){
            return bri;
        } 
        int area(){
            return len*bri;
        }
        int primeter(){
            return 2*(len+bri);
        }

};
int main(){
    rectangle *p=new rectangle();
    p->setLen(-67);
    p->setBri(45);
    cout<<p->getlen()<<"\n";
    cout<<p->getbri()<<"\n";
    cout<<p->area()<<"\n";
    cout<<p->primeter();

    return 0;
}