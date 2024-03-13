#include <iostream>
#include <string>
using namespace std;
struct student {
    string name;
    int ID;
    int grade;
};
void print(student a) {
    cout << a.name << "|" << a.ID << "|" << a.grade << endl;
}
int main(){
    student s1;
    s1.name="Nam";
    s1.ID=900;
    s1.grade=100;
    print(s1);
}