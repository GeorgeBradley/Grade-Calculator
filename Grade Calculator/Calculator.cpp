#include "Calculator.h"
std::size_t Calculator::HighestGradeIndex() {
	std::size_t stIndex = 0;
	int iHighestGrade = 0;
	for (std::size_t st = 0; st < objStudents.size(); st++)
	{
		if (objStudents.at(st).GetGrade() > iHighestGrade)
		{
			iHighestGrade = objStudents.at(st).GetGrade();
			stIndex = st;
		}
	}
	return stIndex;
}

std::size_t Calculator::LowestGradeIndex()
{
	std::size_t stIndex = 0;
	int iLowestGrade = INT_MAX;
	for (std::size_t st = 0; st < objStudents.size(); st++) {
		if (objStudents.at(st).GetGrade() < iLowestGrade)
		{
			iLowestGrade = objStudents.at(st).GetGrade();
			stIndex = st;
		}
	}
	return stIndex;
}

std::string Calculator::CalculateGradeLetter(double dAverage)
{
	if (dAverage < 10) {
		return "F";
	}
	else if (dAverage < 30) {
		return "E";
	}
	else if (dAverage < 50) {
		return "D";
	}
	else if (dAverage < 70) {

		return "C";
	}
	else if (dAverage < 80) {
		return "B";
	}
	else if (dAverage < 90) {
		return "A";
	}
	else if (dAverage < 100)
	{
		return "A*";
	}
	else
	{
		return "Invalid";
	}
}

void Calculator::WhoGotTheHighest() {

	int iHighestGrade = objStudents.at(HighestGradeIndex()).GetGrade();
	int iLowestGrade = objStudents.at(LowestGradeIndex()).GetGrade();
	std::cout << "The person with the highest score is " << objStudents.at(HighestGradeIndex()).GetName() << " who got " << iHighestGrade << std::endl;
	std::cout << "The person with the lowest score is " << objStudents.at(LowestGradeIndex()).GetName() << " who got " << iLowestGrade << std::endl;
}

int Calculator::AddGrade() {

	int AddedGrade = 0;
	for (Student& objStudent : objStudents) {
		AddedGrade += objStudent.GetGrade();
	}
	return AddedGrade;
}

double Calculator::AverageGrade()
{
	return (double)AddGrade() / objStudents.size();
}

void Calculator::Display() {
	for (Student& Student : objStudents)
	{
		std::cout << "****" << std::endl;
		std::cout << "Student: " << Student.GetName() << std::endl;
		std::cout << "Has Student passed?: " << Student.HasUserPassed() << std::endl;
		std::cout << "Grade: " << Student.CalculateGradeLetter() << std::endl;
	}
	std::cout << std::endl;
}

void Calculator::DisplayAverage()
{
	double dAverageGrade = AverageGrade();
	std::cout << "Overall average grade is " << AverageGrade() << " which is " << CalculateGradeLetter(dAverageGrade) << std::endl;
}

void Calculator::AddStudent()
{
	std::string sName = "";
	int iAge = 0;
	std::cout << "Enter student's name: ";
	std::cin >> sName;
	std::cout << "Enter student's grade: ";
	std::cin >> iAge;
	objStudents.push_back({ sName, iAge });
}

void Calculator::TestData() {
	objStudents.push_back(Student("George", 1));
	objStudents.push_back(Student("Jack", 10));
	objStudents.push_back(Student("Josh", 40));
	objStudents.push_back(Student("Oli", 60));
	objStudents.push_back(Student("Josh", 80));
	objStudents.push_back(Student("Stephen", 100));
}