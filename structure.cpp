#include<iostream>
#include<string>
using namespace std;

int main(){
    struct student{
        string name;
        int age;
        char grade;
    };
    struct student s1;
    s1.name="John";
    s1.age=35;
    s1.grade='A';

    cout<<"Name : "<<s1.name<<endl;
    cout<<"Age : "<<s1.age<<endl;
    cout<<"Grade : "<<s1.grade<<endl;

    return 0;

}