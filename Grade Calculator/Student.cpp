#include "Student.h"

Student::Student(std::string sName, int iGrade) :m_sName(sName), m_iGrade(iGrade) {}
std::string Student::GetName() const {
	return m_sName;
}

int Student::GetGrade() const {
	return m_iGrade;
}

std::string Student::CalculateGradeLetter() const
{
	if (m_iGrade < 10) {
		return "F";
	}
	else if (m_iGrade < 30) {
		return "E";
	}
	else if (m_iGrade < 50) {
		return "D";
	}
	else if (m_iGrade < 70) {

		return "C";
	}
	else if (m_iGrade < 80) {
		return "B";
	}
	else if (m_iGrade < 90) {
		return "A";
	}
	else if (m_iGrade < 100)
	{
		return "A*";
	}
	else
	{
		return "Invalid";
	}
}

std::string Student::HasUserPassed()
{
	std::string Grade = CalculateGradeLetter();
	if (Grade == "F")
	{
		return "Fail";
	}
	return "Passed";
}