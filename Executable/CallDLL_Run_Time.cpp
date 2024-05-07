#include "CallDLL_Run_Time.h"

int LoadAndCallFunctionsFrom_DynamicLibraryA()
{
#ifdef _DEBUG
	auto handle_to_library = LoadLibraryA( R"(..\x64\Debug\[A]-DLL-Run-Time.dll)" );
#else
	auto handle_to_library = LoadLibraryA( R"(..\x64\Release\[A]-DLL-Run-Time.dll)" );
#endif // _DEBUG

	if( !handle_to_library )
	{
		std::cerr << "Could not load the dll.\n";
		return -1;
	}

	// If Bar's signature is encapsulated in an extern "C" block, it's name can be directly passed to GetProcAddress().
	CallFunctionOrPrintErrorMessage< DLLConstCharFunctionPointer >( handle_to_library, "Bar" );
	// Or Bar can be defined outside extern "C" blocks and its ordinal value can be used in GetProcAddress().
	CallFunctionOrPrintErrorMessage< DLLConstCharFunctionPointer >( handle_to_library, 1 );

	CallFunctionOrPrintErrorMessage< DLLConstCharFunctionPointer >( handle_to_library, "Baz" );
	CallFunctionOrPrintErrorMessage< DLLIntegerFunctionPointer >( handle_to_library, "ReturnInteger" );
	CallFunctionOrPrintErrorMessage< DLLVoidFunctionPointer >( handle_to_library, "ReturnVoid" );

	// Foo is inside the namespace DynamicLibrary so when dllexport'ed, its name would get mangled by default.
	// When using run-time linking, it should either be de-mangled via extern "C" or the ordinal number should be used.
	CallFunctionOrPrintErrorMessage< DLLConstCharFunctionPointer >( handle_to_library, "Foo" );

	return 0;
}