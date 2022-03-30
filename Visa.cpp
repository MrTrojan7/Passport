#include "Visa.h"

Visa::Visa() : Visa("Karta Polaka", 1080, 3)
{
}

Visa::Visa(string name, unsigned int duration, unsigned int type)
{
	SetName(name);
	SetDuration(duration);
	SetType(type);
}

Visa::Visa(Visa& visa) : Visa(visa.name, visa.duration, visa.type)
{
}

string Visa::GetName() const
{
	return name;
}

unsigned int Visa::GetDuration() const
{
	return duration;
}

unsigned int Visa::GetType() const
{
	return type;
}

void Visa::SetName(string name)
{
	this->name = name;
}

void Visa::SetDuration(unsigned int duration)
{
	this->duration = duration;
}

void Visa::SetType(unsigned int type)
{
	this->type = type;
}
