//Example 1 of Exception Handling.
#include<iostream>
using namespace std;
int main()
{
    int x=-1;
    cout<<"Before try \n";
    try
    {
    cout<<"Inside try \n";
    if(x<0)
    {
       throw x;
       cout<<"After throw"<<"(never executed)\n";
    }
    }
    catch(int x)
    {
       cout<<"Exception Caught and x= "<<x<<endl;
    }
    cout<<"After Catch"<<"(will be executed) \n";
    return 0;
}
