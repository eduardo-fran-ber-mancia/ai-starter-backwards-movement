#include "AIStarter.h"



void setup(){
	AIStarter_SmartBotInit();
	AIStarter_SmartBotSetKeyInit();

}

void loop(){
	for(int i=0;i<5;i++){
		AIStarter_SmartBotSetMotor(MOTORR,50);
		AIStarter_SmartBotSetMotor(MOTORL,50);
	}
	for(int i=0;i<2;i++){
		AIStarter_SmartBotSetMotor(MOTORR,-50);
		AIStarter_SmartBotSetMotor(MOTORL,-50);
	}
	delay(5*1000);
	for(int i=0;i<2;i++){
		AIStarter_SmartBotSetLED(LED1,BLINK);
	}

}
