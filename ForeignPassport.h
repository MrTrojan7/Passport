#pragma once
#include "AllLibraries.h"
#include "Passport.h"
#include "Visa.h"
class ForeignPassport : public Passport 
{
private:
	Visa visa;
public:
	ForeignPassport();
	ForeignPassport(string name, unsigned int duration, unsigned int type, 
		string publisging_house, unsigned int ID);
	void OpenForeignPassport() const;
};

