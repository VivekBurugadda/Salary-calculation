#include <iostream>

using namespace std;

int main()
{
    float annualSalary;
    cout<<"please enter your annual salary";
    cin>>annualSalary;
    float monthlySalary = annualSalary / 12;
    cout<<"your monthly salary is " << monthlySalary<<endl;
    cout<< "In 10 years you will earn "<< 10*annualSalary << endl ;

    return 0;
}
