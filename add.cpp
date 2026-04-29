#include<iostream>
using namespace std;

int main()
{
    int a,b;
    a=8;
    b=9;

    int arr[9] = {2,3,5,6,8,9,42,15,16};

    cout<<arr;

    if(a>b)
    {
        cout<<"a is greater than b";
    }
    else{
        cout<<"a is not greater than b";
    }

    for(int i=0; i<sizeof(a); i++){
        cout<<i;
    }
    return 0;
}

// this is a simple programm