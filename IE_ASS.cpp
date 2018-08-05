#include <iostream>
#include <string>
using namespace std;

int main()

{
    //getline(cin, variable)
    //concatenation: +

    string first;
    cout << "Enter your first name: ";
    cin >> first;

    string last;
    cout << "Enter your last name: ";
    cin >> last;

    string name = first + " " + last;

    cout << "Hello " << name << ", welcome to this program." << endl;



int n1, n2, n3, n4, sum;
cout<<"     "<<endl;
cout<<"This program will help you to compute your General Average"<<endl;
cout<<"     "<<endl;
cout<<"Please give the asked information"<<endl;
cout<<"Enter your math Grade"<<endl;
cin>>n1;
cout<<"Enter your science Grade"<<endl;
cin>>n2;
cout<<"Enter your English Grade"<<endl;
cin>>n3;
cout<<"Enter your Filipino Grade"<<endl;
cin>>n4;
sum=(n1+n2+n3+n4)/4;
cout<<"Your Genearal average is:"<<sum<<endl;
cout<<"     "<<endl;
cout<<"Thank you"<<endl;
return 0;
}
