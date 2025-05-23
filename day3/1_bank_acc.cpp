#include<iostream>
using namespace std;
class Bankaccount
{
    public:
    string holder_name;
    int ac_no;
};
int main()
{
    Bankaccount b1;
    b1.holder_name="manish";
    b1.ac_no=71;
    cout<<"holder name:"<<b1.holder_name<<endl;
    cout<<"account number"<<b1.ac_no<<endl;
    return 0;
}
