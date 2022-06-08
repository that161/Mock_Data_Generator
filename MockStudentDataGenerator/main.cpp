#include "List_Student.h"

int main()
{
	srand(time(NULL));
	
	List_Student list(0);
	int k = RandomNumber();
	vector<StudentInfor> arr = list.List_student_infor(k);

	list.WriteFile("students.txt");

	freopen("CON", "wt", stdout);

	cout << "Average GPA of all students: " << list.averageGPA() << endl;
	
	cout << endl << "List Student With GPA greater average GPA = " << list.averageGPA() << endl;
	cout << "---------------------------------------------------" << endl;
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i].Print_Student_Greater_Average_GPA(list.averageGPA());
	}

	return 1;

}