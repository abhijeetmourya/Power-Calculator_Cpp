#include <iostream>

using namespace std;

int main()
{
    int base;
    int pow ;

    cout<<"Enter the base number: ";
    cin>>base;

    cout<<"Enter the power: ";
    cin>>pow;

    int answer = 1;
      for(int i = 0; i < pow; i++){
        answer = answer * base;
    }
    cout<<answer;

    return 0;
}
