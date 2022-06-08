#include "List_Student.h"

List_Student::List_Student(int N)
{
	size = N;
	arr.resize(size);
}

vector<StudentInfor> List_Student::List_student_infor(int k)
{
	StudentInfor temp = StudentInfor();

	for (int i = 0; i < k; i++)
	{
		temp.RandomInfor();
		arr.push_back(temp);
	}

	return arr;
}

float List_Student::averageGPA()
{
	float SumGPA = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		SumGPA += arr[i].Get_GPA();
	}
	return SumGPA / arr.size();
}

void List_Student::WriteFile(const char* filename)
{
	freopen(filename, "wt", stdout);

	for (int i = 0; i < arr.size(); i++)
	{
		arr[i].Output();
	}

}