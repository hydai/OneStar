#pragma once
#include "Type.h"

extern "C"
{
	__declspec(dllexport) void PrepareCuda(int ivOffset);
	__declspec(dllexport) void SetCudaCondition(int index, int iv0, int iv1, int iv2, int iv3, int iv4, int iv5, int ability, int nature, int characteristic, bool isNoGender, int abilityFlag, int flawlessIvs);
	__declspec(dllexport) void SetCudaTargetCondition6(int iv1, int iv2, int iv3, int iv4, int iv5, int iv6);
	__declspec(dllexport) void SetCudaTargetCondition5(int iv1, int iv2, int iv3, int iv4, int iv5);
	__declspec(dllexport) _u64 SearchCuda(_u64, int);
}
