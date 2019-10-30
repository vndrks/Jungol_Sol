#include <stdio.h>

#include "Code1291.h"
#include "Code1341.h"
#include "Code1303.h"
#include "Code1856.h"
#include "Code1304.h"
#include "Code2046.h"
#include "Code1307.h"
#include "Code1314.h"
#include "Code1523.h"
#include "Code1719.h"
#include "Code1329.h"
#include "Code1641.h"
#include "Code1337.h"
#include "Code1338.h"
#include "Code1339.h"
#include "Code2071.h"
#include "Code1707.h"

int main(int argc, char* argv[])
{
	//Code1291 code1291;
	//code1291.Solution();

	//Code1341 code1341;
	//code1341.Solution();

	//Code1303 code1303;
	//code1303.Solution();

	//Code1856 code1856;
	//code1856.Solution();

	//Code1304 code1304;
	//code1304.Solution();

	//Code2046 code2046;
	//code2046.Solution();

	//Code1307 code1307;
	//code1307.Solution();

	//Code1314 code1314;
	//code1314.Solution();

	//Code1523 code1523;
	//code1523.Solution();

	//Code1719 code1719;
	//code1719.Solution();

	//Code1329 code1329;
	//code1329.Solution();

	//Code1641 code1641;
	//code1641.Solution();

	//Code1337 code1337;
	//code1337.Solution();

	//Code1338 code1338;
	//code1338.Solution();

	//Code1339 code1339;
	//code1339.Solution();

	//Code2071 code2071;
	//code2071.Solution();

	Code1707 code1707;
	code1707.Solution();
	return 0;
}

// {0, 0} > {0, 1} > {0, 2} > {0, 3} > {0, 4}
// {1, 4} v {2, 4} v {3, 4} v {4, 4} 
// {4, 3} < {4, 2} < {4, 1} < {4, 0}
// {3, 0} ^ {2, 0} ^ {1, 0}
// {1, 1} > {1, 2} > {1, 3}
// {2, 3} v {3, 3}
// {3, 2} < {3, 1}
// {2, 1}
// {2, 2}
// > v < ^