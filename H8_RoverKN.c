/*****************************************/
/*
/*	���삳�񑖍s�v���O����
/*
/*****************************************/

#include "global.h"
#include "H8_RoverKN.h"


int TurnRight(void)	//�E��
{

	MTR(mtrFw_L,mtrFw_R);	//�e�X�g��(40,40)
	Wait(160);

	MTR(mtrFw_L,mtrBk_R);	//(40,-40)
	Wait(500);
	
	return 0;
}



int TurnLeft(void)	//����
{
	MTR(mtrFw_L,mtrFw_R);	//(40,40)
	Wait(160);

	MTR(mtrBk_L,mtrFw_R);	//(-40,40)	
	Wait(450);
	
	return 0;
}



int Straight(void)	//���i
{
	MTR(mtrFw_L,mtrFw_R); //(40,40)
	Wait(160);

	return 0;
}