#include "Passport.h"

Passport::Passport() : Passport("Kuzmenko", "Andrij", "Andrijovych", 
    "24.01.1998", "man", "AG", 223212, "4320-5", "not married")
{
}

Passport::Passport(string surname, string name, string pathronymic, string date, string gender, string series, unsigned int ID, string publishing_house, string other_information)
{
    this->surname = surname;
    this->name = name;
    this->pathronymic = pathronymic;
    this->gender = gender;
    this->series = series;
    this->ID = ID;
    this->publishing_house = publishing_house;
    this->other_information = other_information;
}

Passport::Passport(Passport& passport) : Passport(passport.surname, 
    passport.name, passport.pathronymic, passport.date,
    passport.gender, passport.series, passport.ID,
    passport.publishing_house, passport.other_information)
{
}

string Passport::GetSurname() const
{
    return surname;
}

string Passport::GetName() const
{
    return name;
}

string Passport::GetPathronymic() const
{
    return pathronymic;
}

string Passport::GetSeries() const
{
    return series;
}

string Passport::GetGender() const
{
    return gender;
}

string Passport::GetDate() const
{
    return date;
}

unsigned int Passport::GetID() const
{
    return ID;
}

string Passport::GetPubluishingHouse() const
{
    return publishing_house;
}

string Passport::GetOtherInformation() const
{
    return other_information;
}

void Passport::OpenPassport() const
{
    cout << "Surname:\t" << GetSurname() << "\n"
        << "Name:\t\t" << GetName() << "\n"
        << "Pathronymic:\t" << GetPathronymic() << "\n"
        << "Gender:\t\t" << GetGender() << "\n"
        << "Series and number:\t" << GetSeries() << " " << GetID() << "\n"
        << "Publishing house:\t" << GetPubluishingHouse() << "\n"
        << "Other information:\t" << GetOtherInformation() << "\n";
}

