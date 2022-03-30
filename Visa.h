#pragma once
#include "AllLibraries.h"
class Visa 
{
protected:
	string name;
	unsigned int duration;
	unsigned int type;
public:
	Visa();
	Visa(string name, unsigned int duration, unsigned int type);
	Visa(Visa& visa);
	string GetName() const;
	unsigned int GetDuration() const;
	unsigned int GetType() const;
	void SetName(string name);
	void SetDuration(unsigned int duration);
	void SetType(unsigned int type);
};

