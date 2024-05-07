#include "Dynamic_Link_Time.h"

const char* Bar()
{
	return "Bar(): Reporting from inside the DLL B (linked at link time).";
}

const char* Baz()
{
	return "Baz(): Reporting from inside the DLL B (linked at link time).";
}

int ReturnInteger()
{
	return 222;
}

void ReturnVoid()
{
	std::cout << "ReturnVoid(): Reporting from inside the DLL B (linked at link time).";
}

namespace DynamicLibrary_LinkTime
{
	const char* Foo()
	{
		return "DynamicLibrary_LinkTime::Foo(): Reporting from inside the DLL B (linked at link time).";
	}
}
