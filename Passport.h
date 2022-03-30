#pragma once
#include "AllLibraries.h"
class Passport
{
protected:
	string surname;
	string name;
	string pathronymic;
	string gender;
	string series;
	unsigned int ID;
	string publishing_house;
	string other_information;
	string date;
public:
	Passport();
	Passport(string surname, string name, string pathronymic, string date,
		string gender, string series, unsigned int ID,
		string publishing_house, string other_information);
	Passport(Passport& passport);
	string GetSurname() const;
	string GetName() const;
	string GetPathronymic() const;
	string GetSeries() const;
	string GetGender() const;
	string GetDate() const;
	unsigned int GetID() const;
	string GetPubluishingHouse() const;
	string GetOtherInformation() const;
	void OpenPassport() const;
};

