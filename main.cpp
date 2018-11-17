#include <iostream>
#include<assert.h>
using namespace std;
int digitsum(int n)
{
assert(n>=0);
if(n<10)
    {
    return n;
    }
else
    {
    return ((n%10)+digitsum(n/10));
    }

}
int main()
{
    int number;
    cout<<"enter the number : ";
    cin>>number;
 cout<<"the result is: "<<digitsum(number);
}
