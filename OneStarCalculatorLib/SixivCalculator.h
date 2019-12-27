#pragma once
#include "Type.h"

extern "C"
{
	__declspec(dllexport) void PrepareSix(int ivOffset);
	__declspec(dllexport) void SetSixFirstCondition(int, int, int, int, int, int, int, int, int, bool, bool);
	__declspec(dllexport) void SetSixSecondCondition(int, int, int, int, int, int, int, int, int, bool, bool);
	__declspec(dllexport) void SetSixThirdCondition(int, int, int, int, int, int, int, int, int, bool, bool);
	__declspec(dllexport) void SetTargetCondition(int iv1, int iv2, int iv3, int iv4, int iv5, int iv6, int ability);
	__declspec(dllexport) _u64 SearchSix(_u64);
}
