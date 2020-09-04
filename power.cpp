#include <iostream>

using namespace std;

int main()
{
    int base;
    int power ;

    cout<<"Enter the base number: ";
    cin>>base;

    cout<<"Enter the power: ";
    cin>>power;

    int answer = 1;
      for(int i = 0; i < power; i++){
        answer = answer * base;
    }
    cout<<answer;

    return 0;
}
