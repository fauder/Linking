#pragma once

#include <windows.h>

#include <iostream>

typedef const char* ( *DLLConstCharFunctionPointer )( );
typedef int( *DLLIntegerFunctionPointer )( );
typedef void( *DLLVoidFunctionPointer )( );

template< typename FuncPtrType >
void CallFunctionOrPrintErrorMessage( const HMODULE dll_module_handle, const char* name )
{
	auto func_pointer = ( FuncPtrType )GetProcAddress( dll_module_handle, name );

	if( func_pointer )
	{
		if constexpr( std::is_same_v< FuncPtrType, DLLVoidFunctionPointer > )
		{
			std::cout << "Calling DLL function \"" << name << "\":\n\t";
			func_pointer();
			std::cout << "\n";
		}
		else
		{
			if constexpr( std::is_same_v< FuncPtrType, DLLIntegerFunctionPointer > )
				std::cout << "Calling DLL function \"" << name << "\":\n\t" << func_pointer() << " is returned by the DLL function \"" << name << "\".\n";
			else
				std::cout << "Calling DLL function \"" << name << "\":\n\t" << func_pointer() << "\n";
		}
	}
	else
		std::cerr << "Error: Could not get function pointer for function \"" << name << "\" from DLL file.\n";
};

template< typename FuncPtrType >
void CallFunctionOrPrintErrorMessage( const HMODULE dll_module_handle, int ordinal_number )
{
	auto func_pointer = ( FuncPtrType )GetProcAddress( dll_module_handle, MAKEINTRESOURCEA( ordinal_number ) );

	if( func_pointer )
	{
		if constexpr( std::is_same_v< FuncPtrType, DLLVoidFunctionPointer > )
			func_pointer();
		else
			std::cout << "Calling DLL function with ordinal number " << ordinal_number << ":\n\t" << func_pointer() << "\n";
	}
	else
		std::cerr << "Error: Could not get function pointer for function with ordinal number " << ordinal_number << " from DLL file.\n";
};

int LoadAndCallDynamicLibraryFunctions_AtRunTime();
