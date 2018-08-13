#ifndef ____flDriver__
#define ____flDriver__

#include <fstream>
#include <iostream>
#include "dataStruct.h"


/// Driver prototype
//**************************************************************/
void driver(init initData, breathFlow* allBreathFlow, breathResults* allBreathResults,
            controlProperties contProp, systemProperties sysProp, transportProperties transProp);


#endif /* defined(____flDriver__) */