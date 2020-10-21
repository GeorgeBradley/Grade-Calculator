// Grade Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Calculator.h"

int main()
{
	Calculator objStudents;
	while (true) 
	{
		//objStudents.AddStudent(); //Manually add users here 
		objStudents.TestData(); //Load test users without manually writing them
		objStudents.Display();
		objStudents.WhoGotTheHighest();
		objStudents.DisplayAverage();
	}
}
