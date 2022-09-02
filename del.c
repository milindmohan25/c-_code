#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout<<"Tell me your age:"<<endl;
    cin>> age;
   
    
    if(age== 0&& age<0){
        cout<<"You are not born yet"<<endl;
    }

    else if
    (age<18)
    {
        cout<<"You canot come to my party"<<endl;

    }
    else if (age == 18)
    {
       cout<<"You are a kid and you will get a kid pass for party"<<endl;

    }
    else{
     cout<<"You can come to the my party"<<endl;

    }
    return 0;
}
