#pragma once
#include "StudentInfor.h"

class List_Student
{
private:
	vector<StudentInfor> arr;
	int size;
public:
	List_Student(int);
	vector<StudentInfor> List_student_infor(int);
	float averageGPA();
	void WriteFile(const char* filename);
};


