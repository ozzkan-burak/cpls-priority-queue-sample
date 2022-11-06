//
//  main.cpp
//  patient_registration
//
//  Created by Burak ÖZKAN on 6.11.2022.
//

#include <iostream>
#include <queue>
#include <list>

using namespace std;

class Person {
    string name;
    int age;
    bool isHandicapped;
public:
    Person(string name, int age, bool isHandicapped = false) : name(name), age(age), isHandicapped(isHandicapped){}
    void printed()const{
        cout << "İsim :" << name << endl
             << "Yaş: " << age << endl
             << "Engellik Durumu : ";
             if(isHandicapped)
                 cout << "Evet";
             else
                 cout << "Hayir";
    }
};

int main(int argc, const char * argv[]) {
    
}
