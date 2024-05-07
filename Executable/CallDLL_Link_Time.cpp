#include "CallDLL_Link_Time.h"

#include <iostream>

int CallFunctionsFrom_DynamicLibrary_B()
{
	std::cout << "Calling DLL function \"Bar\" linked at link time:\n\t" << Bar() << "\n";
	std::cout << "Calling DLL function \"Bar\" linked at link time:\n\t" << Bar() << "\n";
	std::cout << "Calling DLL function \"Baz\" linked at link time:\n\t" << Baz() << "\n";
	std::cout << "Calling DLL function \"ReturnInteger\" linked at link time:\n\t" << ReturnInteger() << " is returned by the DLL function \"ReturnInteger\".\n";
	std::cout << "Calling DLL function \"ReturnVoid\" linked at link time:\n\t";
	ReturnVoid();
	std::cout << "\n";
	std::cout << "Calling DLL function \"DynamicLibrary_LinkTime::Foo\" linked at link time:\n\t" << DynamicLibrary_LinkTime::Foo() << "\n";
	return 0;
}