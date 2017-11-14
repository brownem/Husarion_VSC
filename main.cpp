#include "hFramework.h"
#include "hCloudClient.h"
#include <stdio.h>

using namespace hFramework;

void platformStart()
{   
	sys.delay(5000);
	platform.begin(&RPi);
}

void hMain()
{
	platformStart();
	sys.setLogDev(&Serial);
	for (;;)
	{
		hLED1.toggle();
		printf("test 111 %d\r\n", (int) sys.getRefTime());
		sys.delay(500);
	}
}