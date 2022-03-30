#include "AllLibraries.h"
#include "Passport.h"
#include "ForeignPassport.h"

int main()
{
	Passport a;
	a.OpenPassport();
	Passport b("Perebyjnis", "Victor", "Andrijovych", "01.01.2001", "man", "AG", 112111, "2220-4", "not married");
	b.OpenPassport();
	Passport c(b);
	c.OpenPassport();

	ForeignPassport d;
	ForeignPassport e("sadad", 12, 2, "dsfsd", 0220);
	cout << "\n";
	d.OpenForeignPassport();
	e.OpenForeignPassport();

	return 0;
}