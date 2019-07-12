#include "Carbriolet.h"

void Carbriolet::StartEngine()
{
	cout << "Removing roof\n";
	Car::StartEngine();
}

Carbriolet::Carbriolet()
{
}


Carbriolet::~Carbriolet()
{
}
