#include<iostream>
using namespace std;
class Bankaccount
{
public:
    string holder_name;
    int ac_no;
    Bankaccount()
    {
        cout<<"Constructor is called automatically" << endl;
    }
};
int main()
{
    Bankaccount b1;
    return 0;
}