

#include <iostream>
#include "student.h"
#include "student.cpp"
#include "node.h"
#include "node.cpp"
#include "linklist.h"
#include "linklist.cpp"

using namespace std;

int main()
{
    Linklist<Student> list;

    Student Danish("Danish", 75, 88, 20, 80);
    Student wajidan("wajidan", 78, 39, 79, 87);
    Student Ahmd("Ahmd", 99, 78, 83, 78);
    Student zar("zar", 22, 98, 89, 22);

    list.addElement(Danish);
    list.addElement(wajidan);
    list.addElement(Ahmd);
    list.addElement(zar);
	
	//Not In The List
    list.MeritList(4);

    list.findElement(Danish);
}
