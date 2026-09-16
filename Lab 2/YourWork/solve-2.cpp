#include<bits\stdc++.h>
#include<string>
using namespace std;
struct address
{
    string city;
    int zipCode;
};
struct student
{
    int id;
    string name;
    address studentAddress;
};
int main()
{
    student s1;
    s1.id=101;
    s1.name="Rahim";
    s1.studentAddress.city="Sylhet";
    s1.studentAddress.zipCode=3100;
    cout << s1.name << " lives in "<< s1.studentAddress.city << endl;
    return 0;
}
