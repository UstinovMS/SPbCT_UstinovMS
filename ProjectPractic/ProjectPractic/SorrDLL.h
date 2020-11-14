#pragma once

#ifdef SORRDLL_EXPORTS
#define SORRDLL_API __declspec(dllexport)
#else
#define SORRDLL_API __declspec(dllimport)
#endif

//extern "C" SORRDLL_API int sortstroka(int*, int);

extern "C" SORRDLL_API int sort( int*);
/*
extern "C" SORRDLL_API int stroka11(int*);

extern "C" SORRDLL_API int stroka12(int*);

extern "C" SORRDLL_API int stroka13(int*);

extern "C" SORRDLL_API int stroka14(int*);

extern "C" SORRDLL_API int stroka15(int*);

extern "C" SORRDLL_API int stroka16(int*);

extern "C" SORRDLL_API int stroka17(int*);

extern "C" SORRDLL_API int stroka18(int*);

extern "C" SORRDLL_API int stroka19(int*);

extern "C" SORRDLL_API int stroka110(int*);*/