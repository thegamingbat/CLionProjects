#ifndef LINKLIST2_STUDENT_H
#define LINKLIST2_STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int Matric_Marks, FSC_Marks, Test_Marks, Interview_Marks;
    double aggregate_score;

public:
    Student();
    Student(string name, int Matric_Marks, int FSC_Marks, int Test_Marks, int Interview_Marks);

    string getName();
    void setName(string name);

    int getMatricMarks();
    void setMatricMarks(int matricMarks);

    int getFscMarks();
    void setFscMarks(int fscMarks);

    int getInterviewMarks();
    void setInterviewMarks(int interviewMarks);

    int getTestMarks();
    void setTestMarks(int testMarks);

    double getAggregate();
};

#endif
