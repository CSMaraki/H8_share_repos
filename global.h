/****************************************/
/*
/*	グローバル変数
/*
/*
/****************************************/




//モーター値
extern int  mtrFw_L;
extern int  mtrFw_R;
extern int  mtrBk_L;
extern int  mtrBk_R;



/*マクロ***********************************************************/

#define MTR(L,R)(Mtr_Run(L,-R,0,0))
#define LAST_COUNT 12