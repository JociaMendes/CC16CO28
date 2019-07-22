#include<iostream>
#include<stdbool.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    string a;
    int i;
    cout<<"Enter the String:";
    getline(cin,a);
    for(i=0;i<a.size();)
    {

        if((a[i]=='e') || (a[i]=='i') || (a[i]=='f'))
        {
            if(a[i]=='f')
            {

            cout<<a[i]<<" :"<<"Keyword"<<endl;
            i=i+2;
            }
            else if((a[i]=='l') || (a[i]=='l'))
            {
                if((a[i]=='s') || (a[i]=='o'))
                {
                    if(a[i]=='e')
                    {
                        i=i+4;
                        cout<<a[i]<<" :"<<"Keyword"<<endl;
                    }
                    else if(a[i]=='t')
                    {
                        i=i+5;
                        cout<<a[i]<<" :"<<"Keyword"<<endl;
                    }
                }

            }
            cout<<a[i]<<" :"<<"Keyword"<<endl;
        }

        else if(a[i]>=48 && a[i]<=57)
        {
            cout<<a[i]<<":"<<"Digits"<<endl;
        }
        //delimiter
        else if((a[i]==' ') || (a[i]==',') || (a[i]==';') || (a[i]=='[') || (a[i]==']') || (a[i]=='(') || (a[i]==')'))
        {
            cout<<a[i]<<" :"<<"Delimiter"<<endl;
        }
        //operator
        else if((a[i] == '+') || (a[i] == '-') || (a[i] == '*') || (a[i] == '/') || (a[i] == '>') || (a[i] == '<') || (a[i] == '='))
        {
            cout<<a[i]<<" :"<<"Operator"<<endl;
        }
        //keyword
        //identifier
        else
        {
            cout<<a[i]<<" :"<<"Identifier"<<endl;
        }

    }
    return 0;
}
