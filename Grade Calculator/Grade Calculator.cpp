// Grade Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Student 
{

private:
	std::string m_sName;
	int m_iGrade;
public:
	Student(std::string sName, int iGrade) :m_sName(sName), m_iGrade(iGrade){}
	std::string GetName() {
		return m_sName;
	}
	int GetGrade() {
		return m_iGrade;
	}
	std::string CalculateGrade() 
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
	std::string CalculateGrade(double dAverage)
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
	std::string HasUserPassed()
	{
		std::string Grade = CalculateGrade();
		if (Grade == "F") 
		{
			return "Fail";
		}
		return "Passed";
	}
};

class Calculator 
{
private:
	std::vector<Student>objStudent;
public:

};
std::size_t HighestGradeIndex(std::vector<Student>& objStudents) {

	std::size_t stIndex = 0;
	int iLowestGrade = 0;
	for (std::size_t st = 0; st < objStudents.size(); st++) 
	{
		if (objStudents.at(st).GetGrade() < iLowestGrade) 
		{
			iLowestGrade = objStudents.at(st).GetGrade();
			stIndex = st;
		}
	}
	return stIndex;
}
std::size_t LowestGradeIndex(std::vector<Student>& objStudents) 
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
void AddStudent(std::vector<Student>*objStudents) {
	
	std::string sName = "";
	int iGrade = 0;
	std::cout << "Add student name: ";
	std::cin >> sName;
	std::cout << "Add student grade: ";
	std::cin >> iGrade;
	objStudents->push_back({ sName, iGrade });
}
void WhoGotTheHighest(std::vector<Student>& objStudents){

	int iHighestGrade = objStudents.at(HighestGradeIndex(objStudents)).GetGrade();
	int iLowestGrade = objStudents.at(LowestGradeIndex(objStudents)).GetGrade();
	std::cout << "The person with the highest score is " << objStudents.at(HighestGradeIndex(objStudents)).GetName() << " who got " << iHighestGrade << std::endl;
	std::cout << "The person with the lowest score is " << objStudents.at(LowestGradeIndex(objStudents)).GetName() << " who got " << iLowestGrade << std::endl;
}

int AddGrade(std::vector<Student>& objStudents) {

	int AddedGrade = 0;
	for (Student &objStudent : objStudents) {
		AddedGrade += objStudent.GetGrade();
	}
	return AddedGrade;
}
double AverageGrade(std::vector<Student>& objStudents) 
{

	return AddGrade(objStudents) / objStudents.size();


}
void Display(std::vector<Student>& objStudents) {

	
	for (Student& Student : objStudents)
	{
		std::cout << "****" << std::endl;
		std::cout << "Student: " << Student.GetName() << std::endl;
		std::cout << "Has Student passed?: " << Student.HasUserPassed() << std::endl;
		std::cout << "Grade: " << Student.CalculateGrade() << std::endl;
	}
	std::cout << std::endl;
}
void DisplayAverage(std::vector<Student>& objStudents) {

	std::cout << "Overall average grade: " << AverageGrade(objStudents) << std::endl;
}
int main()
{
	std::vector<Student>objStudents;
	objStudents.push_back(Student("George",43));
	objStudents.push_back(Student("Jack", 43));
	objStudents.push_back(Student("Josh", 87));
	objStudents.push_back(Student("Oli", 100));
	objStudents.push_back(Student("Josh", 300));
	objStudents.push_back(Student("Stephen", 23));

	Display(objStudents);
	WhoGotTheHighest(objStudents);
	DisplayAverage(objStudents);

}
