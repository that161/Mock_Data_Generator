#include "StudentInfor.h"


int RandomNumber()
{
	int k = 5 + rand() % (10 - 5 + 1);
	return k;
}


float Random_GPA_float(float min, float max)
{
	float scale = rand() / (float)RAND_MAX;
	return min + scale * (max - min);
}

StudentInfor::StudentInfor()
{
	studentID = 0;
	FullName = "";
	GPA = 0;
	Telephone = "";
	Email = "";
	DOB = DayMonthYear();
	Address = "";
}

void StudentInfor::RandomInfor()
{
	StudentInfor student = StudentInfor();

	string arr_last_name[] = { "Nguyen","Tran","Le","Pham","Hoang","Phan","Vu","Dang","Bui","Do","Ho","Ngo","Duong","Ly","Huynh" };
	string arr_middle_name[] = { "Van", "Hai", "Thi", "Quang", "My", "Duc", "Van", "Hai", "Thi", "Quang", "My", "Duc" };
	string arr_first_name[] = { "Quang", "Huy", "Cau", "Quan", "Nam", "An", "Hang", "Kien", "Viet", "Phuc", "Hung", "Ti", "That", 
							"Toan", "Son","Thao","Linh", "Tuan", "Long", "Duy" };

	int rand_index_last_name = 0 + rand() % (14 - 0 + 1);
	int rand_index_middle_name = 0 + rand() % (11 - 0 + 1);
	int rand_index_first_name = 0 + rand() % (19 - 0 + 1);

	studentID = 20120000 + rand() % (9999 - 0 + 1);

	FullName = arr_last_name[rand_index_last_name] + " " + arr_middle_name[rand_index_middle_name] + " " + arr_first_name[rand_index_first_name];

	GPA = Random_GPA_float(4.0, 10.0);

	int telephone = 15875698 + rand() % (25854563 - 15875698 + 1);
	Telephone = "09" + to_string(telephone);

	string Split_Last_name = { arr_last_name[rand_index_last_name] };
	string Split_Middle_name = { arr_middle_name[rand_index_middle_name] };
	
	string first_character = { Split_Last_name[0] };
	string second_character = { Split_Middle_name[0] };

	string Name_Email = first_character + second_character + arr_first_name[rand_index_first_name];

	Email = Name_Email + "@student.hcmus.edu.vn";

	int day = 1 + rand() % (30 - 1 + 1);
	int month = 1 + rand() % (12 - 1 + 1);
	int year = 1999 + rand() % (2002 - 1999 + 1);

	DOB.Set_DayMonthYear(day, month, year);

	int apartment = 1 + rand() % (100 - 1 + 1);
	int District = 1 + rand() % (12 - 1 + 1);
	int Ward = 1 + rand() % (16 - 1 + 1);

	string arr_Address[] = { "Quang Trung", "Nguyen Hue", "Pham Van Dong", "Le Quy Don", "Le Thanh Tong", "Mai Chi Tho", "Le Duc Tho","Dien Bien Phu",
							"Le Van Chi", "Vo Van Ngan", "Hoang Dieu 2", "Coca Cola", "Man Thien", "Le Van Viet", "Tran Cao Van","Nguyen Xi" };

	int rand_address = 0 + rand() % (15 - 0 + 1);

	Address = to_string(apartment) + " " + arr_Address[rand_address] + ", Ward " + to_string(District) + ", District " + to_string(District) + ", " + "Ho Chi Minh city";
}

void StudentInfor::Output()
{
	cout << "Student: " << studentID << " - " << FullName << endl;
	cout << "\tGPA=" << GPA << ", Telephone=" << Telephone << endl;
	cout << "\tEmail=" << Email << endl;
	cout << "\tDOB=";
	DOB.Print_DayMonthYear();
	cout << "\n\tAddress=" << Address << endl;
}

void StudentInfor::Print_Student_GPA()
{
	cout << studentID << " - " << FullName << ", " << "GPA:" << GPA << endl;
}

void StudentInfor::Print_Student_Greater_Average_GPA(float average)
{
	if (GPA > average)
	{
		cout << studentID << " - " << FullName << ", " << "GPA:" << GPA << endl;
	}
}

float StudentInfor::Get_GPA()
{
	return GPA;
}
