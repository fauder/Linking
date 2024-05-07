#include "Dynamic.h"

const char* Bar()
{
	return "Bar(): Reporting from inside the DLL A (loaded at runtime).";
}

const char* Baz()
{
	return "Baz(): Reporting from inside the DLL A (loaded at runtime).";
}

int ReturnInteger()
{
	return 111;
}

namespace DynamicLibrary
{
	const char* Foo()
	{
		return "DynamicLibrary::Foo(): Reporting from inside the DLL A (loaded at runtime).";
	}
}
