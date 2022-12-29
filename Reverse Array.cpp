#include<iostream>
using namespace std;
int main()
{
    int var[10], m;
    cout<<"Enter 10 Array Elements: "<<endl;
    for(m=0; m<10; m++)
        cin>>var[m];
    cout<<"The Original Array is:\n"<<endl;
    	for(m=0; m<10; m++)
        cout<<var[m]<<" ";
    cout<<"\n\nThe Reverse of Given Array is:\n"<<endl;
    for(m=9; m>=0; m--)
        cout<<var[m]<<" ";
    cout<<endl;
    return 0;
}
