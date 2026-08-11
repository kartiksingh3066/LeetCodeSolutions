#include<iostream>
#include<string>

using namespace std;

int main(){
    string food="pizza";
    string*ptr=&food;
    cout<<ptr<<endl;

    *ptr="burger";
    cout<<*ptr<<endl;
    cout<<food;
    return 0;
}