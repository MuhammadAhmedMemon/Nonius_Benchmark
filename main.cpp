#include<iostream>
#include<algorithm>
#define NONIUS_RUNNER
#include "nonius/nonius.h++"
#include "nonius/main.h++"

using namespace std;

NONIUS_BENCHMARK("FindTheMaximum",[]
{
	int a = max(10,2);
})