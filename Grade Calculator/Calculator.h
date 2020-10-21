#pragma once
#include "Student.h" 
#include <vector>
#include <iostream>
class Calculator
{
private:
	std::vector<Student>objStudents;
public:
	std::size_t HighestGradeIndex();
	std::size_t LowestGradeIndex();
	std::string CalculateGradeLetter(double dAverage);
	void WhoGotTheHighest();
	int AddGrade();
	double AverageGrade();
	void Display();
	void DisplayAverage();
	void AddStudent();
	void TestData();
};

