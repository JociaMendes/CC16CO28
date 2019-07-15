#include<iostream>
using namespace std;
int main()
{ //my code
    string a;
    int i;
    cout<<"enter the string:";
    getline(cin,a);
    if((a>=65 && a<=90))
    {
        cout<< "alphbet";
    }
    else if((a>=48 && a<=57))
    {
        cout<<"digit";
    }
     else
     {
        cout << " Special Character ";
     }
}

