#include<iostream>
using namespace std;

void display(string s);
void display(char a[]);

int main()
{
    string s;
    char a[25];

    cout<<"String is\n";
    getline(cin,s);

    cout<<"Another string(char) is\n";
    cin.get(a,25);

    display(s);
    display(a);
}
void display(string s)
{
    cout<<"You entered\n" << s;
    }
void display(char a[])
{
    cout<<"\nYou entered\n" << a;
}
