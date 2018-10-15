#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;


struct student {
    int index;
    int semestr;
    string name;
};


enum marka {
    szkoda=1,
    bentlej=1,
    bwm=3

};

struct samochod {
    int przebieg;
    marka marka;
};


student create();
void to_string(student);


student create(){

    student student1;

    student1.index = 1234;
    student1.name = "Kasia";
    student1.semestr = 3;
    return student1;

}

void to_string(student student1){

    cout << endl << "index: " << student1.index << endl <<
    "semstr: " << student1.semestr << endl <<
    "name: " << student1.name << endl;

}

union X
{
    int   integer;
    float floating;
};


int main() {

    samochod samochod1, samochod2;
    samochod1.marka = szkoda;
    samochod2.marka = bentlej;


    if (samochod1.marka == samochod2.marka){
        cout << "the same";
    }

    student student1 = create();

    to_string(student1);

    X x;
    x.integer = 3;
    x.floating = 3.14f;
    std::cout << x.integer << std::endl;
    std::cout << x.floating << std::endl;


    return 0;
}