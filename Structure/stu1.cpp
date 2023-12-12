#include<iostream>
using namespace std;
struct car
    {
        string carname;
        int carNo;
        string brand;
        /* data */
    };
int main(int argc, char const *argv[])
{
    car myCar1;
    
        myCar1.carname="BMW 3 sreries";
        myCar1.carNo=5643;
        myCar1.brand="BMW";

    car myCar2;
        myCar2.carname="mustdege benze";
        myCar2.carNo=56412213;
        myCar2.brand="Mustdege";



        /* data */

    std::cout<<myCar1.carname<<" "<<myCar1.brand<<" "<<myCar1.carNo<<"\n";
    std::cout<<myCar2.carname<<" "<<myCar2.brand<<" "<<myCar2.carNo<<"\n";

    

    
    /* code */
    return 0;
}
