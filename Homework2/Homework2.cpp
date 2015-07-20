// ic.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdint.h>
#include <conio.h>
#include "StopWatch.h"
#include "mmio.h"


int _tmain(int argc, _TCHAR* argv[])
{
	// Read(), Write()
	_ASSERTE(create_very_big_file(L"big.txt", 5120)); // 5120mb == 5GB

	StopWatch sw;
	sw.Start();

	_ASSERTE(file_copy_using_read_write(L"big.txt", L"big2.txt"));

	sw.Stop();
	print("[info]  Read_Write : time elapsed = %f\n", sw.GetDurationSecond());

	// Memory Mapeed IO
	StopWatch sw2;
	sw2.Start();

	_ASSERTE(USER_file_copy_using_memory_map(L"big.txt", L"big3.txt"));

	sw2.Stop();
	print("[info]  Memory Mapped : time elapsed = %f\n", sw2.GetDurationSecond());

	DeleteFileW(L"big.txt");
	DeleteFileW(L"big2.txt");
	DeleteFileW(L"big3.txt");

	return 0;
}

