#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class DayMonthYear
{
private:
	int day;
	int month;
	int year;
public:
	DayMonthYear(void)
	{
		day = 1;
		month = 1;
		year = 1;
	}
	void Set_DayMonthYear(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	void Print_DayMonthYear()
	{
		cout << day << "/" << month << "/" << year;
	}
};

class StudentInfor
{
private:
	int studentID;
	string FullName;
	float GPA;
	string Telephone;
	string Email;
	DayMonthYear DOB;
	string Address;
public:
	void RandomInfor();
	StudentInfor();
	void Output();
	void Print_Student_GPA();
	float Get_GPA();
	void Print_Student_Greater_Average_GPA(float);
};

int RandomNumber();
float Random_GPA_float(float min, float max);

