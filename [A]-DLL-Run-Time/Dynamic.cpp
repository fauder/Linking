#include "Dynamic.h"

const char* Bar()
{
	return "Bar(): Reporting from inside the DLL (loaded at runtime).";
}

const char* Baz()
{
	return "Baz(): Reporting from inside the DLL (loaded at runtime).";
}

int ReturnInteger()
{
	return 39;
}

namespace DynamicLibrary
{
	const char* Foo()
	{
		return "DynamicLibrary::Foo(): Reporting from inside the DLL (loaded at runtime).";
	}
}
