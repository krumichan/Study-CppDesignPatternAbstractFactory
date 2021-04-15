#include "factory/HujiFactory.h"
#include "factory/MitsubishiFactory.h"
#include <iostream>

using namespace std;

int main(void)
{
	unique_ptr<Factory> hujiFactory = make_unique<HujiFactory>();
	unique_ptr<Factory> mitsubishiFactory = make_unique<MitsubishiFactory>();

	unique_ptr<Door> hujiDoor = hujiFactory->CreateDoor();
	unique_ptr<Motor> hujiMotor = hujiFactory->CreateMotor();
	hujiMotor->SetDoor(*hujiDoor.get());
	hujiMotor->Move(2);
	hujiMotor->Move(-5);

	unique_ptr<Door> mitsubishiDoor = mitsubishiFactory->CreateDoor();
	unique_ptr<Motor> mitsubishiMotor = mitsubishiFactory->CreateMotor();
	mitsubishiMotor->SetDoor(*mitsubishiDoor.get());
	mitsubishiMotor->Move(2);
	mitsubishiMotor->Move(-5);

	return 0;
}
