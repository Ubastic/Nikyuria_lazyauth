#pragma once


#include "stdafx.h"
#include "nigauth.h"


int _tmain(int argc, _TCHAR* argv[])
{
	
	std::stringstream penis;
	penis << auth.hash(auth.get());

	MessageBoxA(NULL, "a", penis.str().c_str(), MB_OK);

	return 0;
}

