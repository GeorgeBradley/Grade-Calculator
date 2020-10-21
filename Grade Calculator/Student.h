#pragma once
#include <string>
#include <iostream>
class Student
{
private:
	std::string m_sName;
	int m_iGrade;
public:
	Student(std::string sName, int iGrade);
	std::string GetName() const;
	int GetGrade() const;
	std::string CalculateGradeLetter() const;
	std::string HasUserPassed();
};

