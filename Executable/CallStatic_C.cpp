#include "CallStatic_C.h"

#include "..\[C]-Static-Lib-1\Static_C.h"

#include <iostream>

int CallFunctionsFrom_StaticLibrary_C()
{
	std::cout << "Calling static lib. function \"StaticLibraryC::Bar\":\n\t" << StaticLibraryC::Bar() << "\n";
	std::cout << "Calling static lib. function \"StaticLibraryC::Baz\":\n\t" << StaticLibraryC::Baz() << "\n";
	std::cout << "Calling static lib. function \"StaticLibraryC::ReturnInteger\":\n\t" << StaticLibraryC::ReturnInteger() << " is returned by the static lib. function \"StaticLibraryC::ReturnInteger\".\n";
	std::cout << "Calling static lib. function \"StaticLibraryC::ReturnVoid\":\n\t";
	StaticLibraryC::ReturnVoid();
	std::cout << "\n";
	std::cout << "Calling static lib. function \"StaticLibraryC::Foo\":\n\t" << StaticLibraryC::Foo() << "\n";
	return 0;
}