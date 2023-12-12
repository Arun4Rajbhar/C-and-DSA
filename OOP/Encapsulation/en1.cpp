#include<iostream>
using namespace std;
class myClass{
    private:
    int rollNo=45637;
    public:
    void setRollNo(int r){
        rollNo=r;

    }
    int getRollNo(){
        return rollNo;
    }


};
int main(int argc, char const *argv[])
{
    myClass obj;
    obj.setRollNo(986567);
    std::cout<<obj.getRollNo();
    return 0;
}
