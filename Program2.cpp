// Author – Shruti Choudhary-241497

#include <iostream>
using namespace std;

float SI(float principal, float rate = 7, float time = 2)
{
    return (principal * rate * time) / 100;
}

int main()
{
    float principal;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Simple Interest (Default Rate & Time) = "
         << SI(principal) << endl;

    cout << "Simple Interest (Rate = 4%, Default Time) = "
         << SI(principal, 4) << endl;

    cout << "Simple Interest (Rate = 4%, Time = 6 years) = "
         << SI(principal, 4, 6) << endl;

    return 0;
}
