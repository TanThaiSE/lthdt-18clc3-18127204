#include"General.h"
#include"Cow.h"
#include"Sheep.h"
#include"Goat.h"
int main()
{
	Cow x;
	x.input(20);
	x.output("cow");
	x.keu("cow");
	cout<<"\nCow birth:"<<x.sinh();
	cout << "\nCow for milk:" << x.chosua(20) << endl;
	
	Sheep y;
	y.input(15);
	y.output("Sheep");
	y.keu("Sheep");
	cout << "\nSheep birth:" << y.sinh();
	cout << "\nSheep for milk:" << y.chosua(5) << endl;
	
	Goat z;
	z.input(10);
	z.output("Goat");
	z.keu("Goat");
	cout << "\nGoat birth:" << z.sinh();
	cout << "\nGoat for milk:" << z.chosua(10) << endl;
	
	return 0;

}