
#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int Smallest=0;
    int Largest=0;
    cout<<"Enter three integers to compare: ";
    cin>>a>>b>>c>>d>>e;
    if(a>b&a>c&a>d&a>e)
        cout<<"Largest is"<<a<<endl;
    if(b>a&b>c&b>d&b>e)
         cout<<"Largest is"<<b<<endl;
    if(c>a&c>b&c>d&c>e)
         cout<<"Largest is"<<c<<endl;
    if(d>a&d>b&d>c&d>e)
       cout<<"Largest is"<<d<<endl;
    if(e>a&e>b&e>c&e>d)
      cout<<"Largest is"<<e<<endl;
    if(a<b&a<c&a<d&a<e)
       cout<<"Smallest is"<<"a"<<endl;
    if(b<a&b<c&b<d&b<e)
        cout<<"Smallest is"<<"b"<<endl;
    if(c<a&c<b&c<d&c<e)
        cout<<"Smallest is"<<"c"<<endl;
    if(d<a&d<b&d<c&d<e)
         cout<<"Smallest is"<<"d"<<endl;
    if(e<a&e<b&e<c&e<d)
      cout<<"Smallest is"<<"e"<<endl;
    return 0;
}
