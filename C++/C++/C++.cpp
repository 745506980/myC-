

#include <iostream>
using namespace std;
#include"MyTeacher.h"


int main()
{
    MyTeacher teacher;
    teacher.SetAge(10);
    teacher.SetName("小明");
    cout<<teacher.GetAge()<<endl;
    cout << teacher.GetName() << endl;
    std::cout << "Hello World!\n";
}


