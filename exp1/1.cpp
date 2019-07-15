#include<iostream>
using namespace std;
int main()
{
    string a;
    int i;
    cout<<"enter the string:";
    getline(cin,a);
    for(i=0;i<a.size();i++)
    {
    if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
    {
        cout<< "Alphbet ";
    }
    else if(a[i]>=48 && a[i]<=57)
    {
        cout<<"Digit ";
    }
     else
     {
        cout << " Special Character ";
     }
     }
     return 0;
}

