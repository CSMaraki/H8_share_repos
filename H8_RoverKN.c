/*****************************************/
/*
/*	黒川さん走行プログラム
/*
/*****************************************/

#include "global.h"
#include "H8_RoverKN.h"


int TurnRight(void)	//右折
{

	MTR(mtrFw_L,mtrFw_R);	//テスト時(40,40)
	Wait(160);

	MTR(mtrFw_L,mtrBk_R);	//(40,-40)
	Wait(500);
	
	return 0;
}



int TurnLeft(void)	//左折
{
	MTR(mtrFw_L,mtrFw_R);	//(40,40)
	Wait(160);

	MTR(mtrBk_L,mtrFw_R);	//(-40,40)	
	Wait(450);
	
	return 0;
}



int Straight(void)	//直進
{
	MTR(mtrFw_L,mtrFw_R); //(40,40)
	Wait(160);

	return 0;
}