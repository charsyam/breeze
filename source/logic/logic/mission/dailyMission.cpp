﻿
#include "dailyMission.h"


DailyMission::DailyMission()
{

}
DailyMission::~DailyMission()
{

}
bool DailyMission::init()
{
	EventTrigger::getRef().watching(ETRIGGER_USER_LOGIN,
		std::bind(&DailyMission::onUserLogin, this, _1, _2, _3, _4, _5));
	return true;
}

void DailyMission::onUserLogin(EventTriggerID tID, UserID uID, unsigned long long param1, unsigned long long param2, std::string param3)
{

}
