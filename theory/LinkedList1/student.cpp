#include "student.h"

Student::Student()
{
    // Default Constructor
}

Student::Student(string name, int Matric_Marks, int FSC_Marks, int Test_Marks, int Interview_Marks)
{
    this->name = name;
    this->Matric_Marks = Matric_Marks;
    this->FSC_Marks = FSC_Marks;
    this->Test_Marks = Test_Marks;
    this->Interview_Marks = Interview_Marks;

    // Calculating Aggregate Score
    this->aggregate_score = 0.4 * FSC_Marks + 0.1 * Matric_Marks + 0.2 * Interview_Marks + 0.3 * Test_Marks;
}

// Setters & Getters

string Student::getName()
{
    return name;
}

void Student::setName(string name)
{
    this->name = name;
}

int Student::getMatricMarks()
{
    return Matric_Marks;
}

void Student::setMatricMarks(int matricMarks)
{
    Matric_Marks = matricMarks;
}

int Student::getFscMarks()
{
    return FSC_Marks;
}

void Student::setFscMarks(int fscMarks)
{
    FSC_Marks = fscMarks;
}

int Student::getInterviewMarks()
{
    return Interview_Marks;
}

void Student::setInterviewMarks(int interviewMarks)
{
    Interview_Marks = interviewMarks;
}

int Student::getTestMarks()
{
    return Test_Marks;
}

void Student::setTestMarks(int testMarks)
{
    Test_Marks = testMarks;
}

double Student::getAggregate()
{
    return aggregate_score;
}
