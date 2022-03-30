#include "ForeignPassport.h"

ForeignPassport::ForeignPassport()
{
	this->publishing_house = "av020";
	this->ID = 380;
}

ForeignPassport::ForeignPassport(string name, unsigned int duration, 
	unsigned int type, string publishing_house, unsigned int ID) : Passport()
{
	visa.SetName(name);
	visa.SetDuration(duration);
	visa.SetType(type);
	this->publishing_house = publishing_house;
	this->ID = ID;
}

void ForeignPassport::OpenForeignPassport() const
{
	cout << "ForeignPassport:\n";
	OpenPassport();
	cout << "Visa\t" << visa.GetName() << "\n"
		<< "Duration\t" << visa.GetDuration() << "\n"
		<< "Type\t" << visa.GetType() << "\n\n";
}
