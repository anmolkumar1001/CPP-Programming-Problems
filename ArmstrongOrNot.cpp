#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum=0;
    int originaln=n;
    while(n>0)
    {
        int lastdigit= n%10;
        sum= sum+(lastdigit*lastdigit*lastdigit);
        n= n/10;
    }
    if(sum==originaln)
    {
        cout<<"Armstrong Numaber"<<endl;
    }
    else
    {
        cout<<"Not Armstrong Number"<<endl;
    }
    return 0;
}