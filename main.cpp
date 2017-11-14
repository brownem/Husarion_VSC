#include "hFramework.h"
//#include "hCloudClient.h"
#include <stdio.h>

using namespace hFramework;

void hMain()
{
	sys.taskCreate(platformStart);
	sys.setLogDev(&Serial);
	//platform.begin(&RPi);
	for (;;)
	{
		hLED1.toggle();
		printf("test 111 %d\r\n", (int) sys.getRefTime());
		sys.delay(500);
	}
	
	void platformStart()
	{   
		sys.delay(5000);
		platform.begin(&RPi);
	}
}