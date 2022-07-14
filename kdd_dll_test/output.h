#pragma once

#ifdef KDDDLLTEST_EXPORTS
#define KDDDLLTEST_API __declspec(dllexport)
#else
#define KDDDLLTEST_API __declspec(dllimport)
#endif

extern "C" KDDDLLTEST_API void output();