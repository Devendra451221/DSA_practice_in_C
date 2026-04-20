#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float>n={1.1,2.2,3.3};
    cout<<"\nNumbers are :"<<endl;
    for(auto &nums : n)
    {
        cout<<nums<<",";
    }    
    return 0;
}
