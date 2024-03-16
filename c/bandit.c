/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/bandit/basic/bandit.bas: 
 *
                   +-+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | | |
        Address    v v v Original BASIC statement
    -------------- --- - ------------------------------------------------------------------------------
    0x558907777d40 ---------A   01000 REM THIS PROGRAM SIMULATES THE MECHANICAL
    0x558907777dd0 ---------A   01010 REM THREE WHEEL ONE-ARM-BANDIT
    0x558907777f60 ---------A T 01020 PRINT"ARE INTRUCTIONS REQUIRED?"
    0x5589077780b0 ---------A   01030 PRINT"TYPE EITHER 'YES' OR 'NO'"
    0x5589077781f0 ---------A   01040 INPUT L$
    0x558907778400 ---------A   01050 IF L$="YES" THEN 1090
    0x5589077785f0 ---------A   01060 IF L$="NO" THEN 1160
    0x558907778730 ---------A   01070 PRINT"INVALID COMMAND"
    0x5589077787c0 ---------A   01080 GOTO 1020
    0x558907778250 ---------A T 01090 PRINT"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR"
    0x558907778ad0 ---------A   01100 PRINT"BANANAS EARN $10. 3 CHERRIES EARN $90."
    0x55890777df30 ---------A   01110 PRINT"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2"
    0x55890777e0a0 ---------A   01120 PRINT"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3."
    0x55890777e200 ---------A   01130 PRINT"IF THE LAST FRUIT IS A CHERRY AND THE"
    0x55890777e370 ---------A   01140 PRINT"OTHER TWO ARE THE SAME BUT NOT APPLES YOU"
    0x55890777e4a0 ---------A   01150 PRINT"EARN $10. EACH TURN COSTS $1. GOOD LUCK"
    0x55890777e690 ---------A T 01160 LET J=0
    0x55890777e810 ---------A   01170 PRINT
    0x55890777e880 ---------A T 01180 GOSUB 1580
    0x55890777eaa0 ---------A   01190 LET S1=S
    0x55890777eb10 ---------A   01200 GOSUB 1580
    0x55890777ecb0 ---------A   01210 LET S2=S
    0x55890777ed20 ---------A   01220 GOSUB 1580
    0x55890777eec0 ---------A   01230 LET S3=S
    0x55890777eff0 ---------A   01240 LET S=S1
    0x55890777f060 ---------A   01250 GOSUB 1600
    0x55890777f280 ---------A   01260 LET S1$=S$
    0x55890777f3b0 ---------A   01270 LET S=S2
    0x55890777f420 ---------A   01280 GOSUB 1600
    0x55890777f5c0 ---------A   01290 LET S2$=S$
    0x55890777f6f0 ---------A   01300 LET S=S3
    0x55890777f760 ---------A   01310 GOSUB 1600
    0x55890777f910 ---------A   01320 LET S3$=S$
    0x55890777fd00 ---------A   01330 IF S1$="CHERRY" THEN 1370
    0x55890777fef0 ---------A   01340 IF S1$="APPLE" THEN 1410
    0x558907780070 ---------A   01350 IF S1$=S2$ THEN 1430
    0x558907780100 ---------A   01360 GOTO 1450
    0x558907780260 ---------A T 01370 IF S1$=S2$ THEN 1390
    0x5589077802f0 ---------A   01380 GOTO 1450
    0x558907780450 ---------A T 01390 IF S2$=S3$ THEN 1470
    0x5589077804e0 ---------A   01400 GOTO 1450
    0x558907780640 ---------A T 01410 IF S1$=S2$ THEN 1490
    0x5589077806d0 ---------A   01420 GOTO 1510
    0x558907780840 ---------A T 01430 IF S2$=S3$ THEN 1530
    0x558907780a20 ---------A   01440 IF S3$="CHERRY" THEN 1530
    0x558907780c40 ---------A T 01450 LET J=J-1
    0x558907780cb0 ---------A   01460 GOTO 1540
    0x558907780eb0 ---------A T 01470 LET J=J+89
    0x558907780f20 ---------A   01480 GOTO 1540
    0x558907781120 ---------A T 01490 LET J=J+2
    0x558907781190 ---------A   01500 GOTO 1540
    0x558907781390 ---------A T 01510 LET J=J+1
    0x558907781400 ---------A   01520 GOTO 1540
    0x558907781600 ---------A T 01530 LET J=J+9
    0x558907781680 ---------A T 01540 PRINT
    0x558907781a30 ---------A   01550 PRINT S1$;" ";S2$;" ";S3$
    0x558907781bf0 ---------A   01560 PRINT"YOUR TOTAL EARNINGS ARE NOW $";J
    0x558907781c40 ---------A   01570 GOTO 1710
    0x5589077820a0 ---------B G 01580 LET S=1+INT(5*RND)
    0x5589077820f0 ---------B   01590 RETURN
    0x558907782500 ---------C G 01600 ON S GOTO 1610,1630,1650,1670,1690
    0x558907782690 ---------C T 01610 LET S$="CHERRY"
    0x558907782700 ---------C   01620 GOTO 1700
    0x558907782880 ---------C T 01630 LET S$="APPLE"
    0x5589077828f0 ---------C   01640 GOTO 1700
    0x558907782e80 ---------C T 01650 LET S$="LEMON"
    0x558907782ef0 ---------C   01660 GOTO 1700
    0x558907783070 ---------C T 01670 LET S$="ORANGE"
    0x5589077830e0 ---------C   01680 GOTO 1700
    0x558907783260 ---------C T 01690 LET S$="BANANA"
    0x5589077832b0 ---------C T 01700 RETURN
    0x558907783350 ---------A T 01710 PRINT
    0x558907783490 ---------A   01720 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'"
    0x5589077835f0 ---------A   01730 INPUT Z$
    0x5589077837e0 ---------A   01740 IF Z$="Y" THEN 1790
    0x5589077839d0 ---------A   01750 IF Z$="N" THEN 1770
    0x558907783b30 ---------A   01760 PRINT"INVALID RESPONSE"
    0x558907783c70 ---------A T 01770 PRINT"ONE-ARM-BANDIT SAYS GOOD-BYE"
    0x558907783cc0 ---------A   01780 STOP
    0x558907783d40 ---------A T 01790 PRINT
    0x558907783db0 ---------A   01800 GOTO 1180
    0x558907783df0 ---------A   01810 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01020      01080T
     01090      01050T
     01160      01060T
     01180      01800T
     01370      01330T
     01390      01370T
     01410      01340T
     01430      01350T
     01450      01360T, 01380T, 01400T
     01470      01390T
     01490      01410T
     01510      01420T
     01530      01430T, 01440T
     01540      01460T, 01480T, 01500T, 01520T
     01580      01180G, 01200G, 01220G
     01600      01250G, 01280G, 01310G
     01610      01600T
     01630      01600T
     01650      01600T
     01670      01600T
     01690      01600T
     01700      01620T, 01640T, 01660T, 01680T
     01710      01570T
     01770      01750T
     01790      01740T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x558907777d40   0x558907777d40   0x558907783df0   0x558907783df0 
   B) 0x5589077820a0   0x5589077820a0   0x5589077820f0   0x5589077820f0 
   C) 0x558907782500   0x558907782500   0x5589077832b0   0x5589077832b0 

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01820 - 10000    8190 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/bandit/basic/bandit.bas'
 *
    INT   Function Integer     args=1, float 
    J              Integer 
    L$             String  
    RND   Function Integer     args=1, int   
    S              Integer 
    S$             String  
    S1             Integer 
    S1$            String  
    S2             Integer 
    S2$            String  
    S3             Integer 
    S3$            String  
    Z$             String  

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/bandit/basic/bandit.bas: 
 *
                   +-+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | | |
        Address    v v v Original BASIC statement
    -------------- --- - ------------------------------------------------------------------------------
    0x558907777d40 ---------A   01000 REM THIS PROGRAM SIMULATES THE MECHANICAL
    0x558907777dd0 ---------A   01010 REM THREE WHEEL ONE-ARM-BANDIT
    0x558907777f60 ---------A T 01020 PRINT"ARE INTRUCTIONS REQUIRED?"
    0x5589077780b0 ---------A   01030 PRINT"TYPE EITHER 'YES' OR 'NO'"
    0x5589077781f0 ---------A   01040 INPUT L$
    0x558907778400 ---------A   01050 IF L$="YES" THEN 1090
    0x5589077785f0 ---------A   01060 IF L$="NO" THEN 1160
    0x558907778730 ---------A   01070 PRINT"INVALID COMMAND"
    0x5589077787c0 ---------A   01080 GOTO 1020
    0x558907778250 ---------A T 01090 PRINT"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR"
    0x558907778ad0 ---------A   01100 PRINT"BANANAS EARN $10. 3 CHERRIES EARN $90."
    0x55890777df30 ---------A   01110 PRINT"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2"
    0x55890777e0a0 ---------A   01120 PRINT"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3."
    0x55890777e200 ---------A   01130 PRINT"IF THE LAST FRUIT IS A CHERRY AND THE"
    0x55890777e370 ---------A   01140 PRINT"OTHER TWO ARE THE SAME BUT NOT APPLES YOU"
    0x55890777e4a0 ---------A   01150 PRINT"EARN $10. EACH TURN COSTS $1. GOOD LUCK"
    0x55890777e690 ---------A T 01160 LET J=0
    0x55890777e810 ---------A   01170 PRINT
    0x55890777e880 ---------A T 01180 GOSUB 1690
    0x55890777eaa0 ---------A   01190 LET S1=S
    0x55890777eb10 ---------A   01200 GOSUB 1690
    0x55890777ecb0 ---------A   01210 LET S2=S
    0x55890777ed20 ---------A   01220 GOSUB 1690
    0x55890777eec0 ---------A   01230 LET S3=S
    0x55890777eff0 ---------A   01240 LET S=S1
    0x55890777f060 ---------A   01250 GOSUB 1710
    0x55890777f280 ---------A   01260 LET S1$=S$
    0x55890777f3b0 ---------A   01270 LET S=S2
    0x55890777f420 ---------A   01280 GOSUB 1710
    0x55890777f5c0 ---------A   01290 LET S2$=S$
    0x55890777f6f0 ---------A   01300 LET S=S3
    0x55890777f760 ---------A   01310 GOSUB 1710
    0x55890777f910 ---------A   01320 LET S3$=S$
    0x55890777fd00 ---------A   01330 IF S1$="CHERRY" THEN 1370
    0x55890777fef0 ---------A   01340 IF S1$="APPLE" THEN 1410
    0x558907780070 ---------A   01350 IF S1$=S2$ THEN 1430
    0x558907780100 ---------A   01360 GOTO 1450
    0x558907780260 ---------A T 01370 IF S1$=S2$ THEN 1390
    0x5589077802f0 ---------A   01380 GOTO 1450
    0x558907780450 ---------A T 01390 IF S2$=S3$ THEN 1470
    0x5589077804e0 ---------A   01400 GOTO 1450
    0x558907780640 ---------A T 01410 IF S1$=S2$ THEN 1490
    0x5589077806d0 ---------A   01420 GOTO 1510
    0x558907780840 ---------A T 01430 IF S2$=S3$ THEN 1530
    0x558907780a20 ---------A   01440 IF S3$="CHERRY" THEN 1530
    0x558907780c40 ---------A T 01450 LET J=J-1
    0x558907780cb0 ---------A   01460 GOTO 1540
    0x558907780eb0 ---------A T 01470 LET J=J+89
    0x558907780f20 ---------A   01480 GOTO 1540
    0x558907781120 ---------A T 01490 LET J=J+2
    0x558907781190 ---------A   01500 GOTO 1540
    0x558907781390 ---------A T 01510 LET J=J+1
    0x558907781400 ---------A   01520 GOTO 1540
    0x558907781600 ---------A T 01530 LET J=J+9
    0x558907781680 ---------A T 01540 PRINT
    0x558907781a30 ---------A   01550 PRINT S1$;" ";S2$;" ";S3$
    0x558907781bf0 ---------A   01560 PRINT"YOUR TOTAL EARNINGS ARE NOW $";J
    0x558907781c40 ---------A   01570 GOTO 1580
    0x558907783350 ---------A T 01580 PRINT
    0x558907783490 ---------A   01590 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'"
    0x5589077835f0 ---------A   01600 INPUT Z$
    0x5589077837e0 ---------A   01610 IF Z$="Y" THEN 1660
    0x5589077839d0 ---------A   01620 IF Z$="N" THEN 1640
    0x558907783b30 ---------A   01630 PRINT"INVALID RESPONSE"
    0x558907783c70 ---------A T 01640 PRINT"ONE-ARM-BANDIT SAYS GOOD-BYE"
    0x558907783cc0 ---------A   01650 STOP
    0x558907783d40 ---------A T 01660 PRINT
    0x558907783db0 ---------A   01670 GOTO 1180
    0x558907783df0 ---------A   01680 END
    0x5589077820a0 ---------B G 01690 LET S=1+INT(5*RND)
    0x5589077820f0 ---------B   01700 RETURN
    0x558907782500 ---------C G 01710 ON S GOTO 1720,1740,1760,1780,1800
    0x558907782690 ---------C T 01720 LET S$="CHERRY"
    0x558907782700 ---------C   01730 GOTO 1810
    0x558907782880 ---------C T 01740 LET S$="APPLE"
    0x5589077828f0 ---------C   01750 GOTO 1810
    0x558907782e80 ---------C T 01760 LET S$="LEMON"
    0x558907782ef0 ---------C   01770 GOTO 1810
    0x558907783070 ---------C T 01780 LET S$="ORANGE"
    0x5589077830e0 ---------C   01790 GOTO 1810
    0x558907783260 ---------C T 01800 LET S$="BANANA"
    0x5589077832b0 ---------C T 01810 RETURN
 */

//---------------------------------------------------------------------------
// $Header$ 
//
// NOTE: This program has been automatically tranlated by b2c
//
// $Log$ 
// 
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int   Earnings;     // Comments?
char* QHelpAnswer;  // Comments?
int   RandInt1to5_Result;   // Comments?
char* FruitIdx2Str_Result;  // Comments?
int   Roll1;        // Comments?
char* Roll1Fruit;   // Comments?
int   Roll2;        // Comments?
char* Roll2Fruit;   // Comments?
int   Roll3;        // Comments?
char* Roll3Fruit;   // Comments?
char* QContinueAnswer;  // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void RandInt1to5();
void FruitIdx2Str();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void RandInt1to5(){
    // 01690 LET S=1+INT(5*RND)
    RandInt1to5_Result = 1+INT(5*RND());
    // 01700 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void FruitIdx2Str(){
    // 01710 ON S GOTO 1720,1740,1760,1780,1800
    switch((int)(RandInt1to5_Result)){
        case 1: goto StrCherry;
        case 2: goto StrApple;
        case 3: goto StrLemon;
        case 4: goto StrOrange;
        case 5: goto StrBanana;
        default: break; 
    };

  StrCherry:
    // 01720 LET S$="CHERRY"
    GLBpStr="CHERRY";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01730 GOTO 1810
    goto FruitIdx2StrExit;

  StrApple:
    // 01740 LET S$="APPLE"
    GLBpStr="APPLE";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01750 GOTO 1810
    goto FruitIdx2StrExit;

  StrLemon:
    // 01760 LET S$="LEMON"
    GLBpStr="LEMON";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01770 GOTO 1810
    goto FruitIdx2StrExit;

  StrOrange:
    // 01780 LET S$="ORANGE"
    GLBpStr="ORANGE";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01790 GOTO 1810
    goto FruitIdx2StrExit;

  StrBanana:
    // 01800 LET S$="BANANA"
    GLBpStr="BANANA";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  FruitIdx2StrExit:
    // 01810 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM THIS PROGRAM SIMULATES THE MECHANICAL
    // 01010 REM THREE WHEEL ONE-ARM-BANDIT

  QInstructions:
    // 01020 PRINT"ARE INTRUCTIONS REQUIRED?"
    b2c_fprintf(stdout,"ARE INTRUCTIONS REQUIRED?"); b2c_fprintf(stdout,"\n");
    // 01030 PRINT"TYPE EITHER 'YES' OR 'NO'"
    b2c_fprintf(stdout,"TYPE EITHER 'YES' OR 'NO'"); b2c_fprintf(stdout,"\n");
    // 01040 INPUT L$
    // Start of Basic INPUT statement 01040
    printf(" ? ");
    char inpbuf_01040[100];
    if(fgets(inpbuf_01040,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01040=strtok(inpbuf_01040," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01040==nullptr){
            QHelpAnswer = "";
        }else{
            QHelpAnswer = ps_01040;
        };
    }; // End of Basic INPUT statement 01040
    // 01050 IF L$="YES" THEN 1090
    if(strcmp(QHelpAnswer,"YES")==0)goto Instructions;
    // 01060 IF L$="NO" THEN 1160
    if(strcmp(QHelpAnswer,"NO")==0)goto StartGame;
    // 01070 PRINT"INVALID COMMAND"
    b2c_fprintf(stdout,"INVALID COMMAND"); b2c_fprintf(stdout,"\n");
    // 01080 GOTO 1020
    goto QInstructions;

  Instructions:
    // 01090 PRINT"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR"
    b2c_fprintf(stdout,"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR"); b2c_fprintf(stdout,"\n");
    // 01100 PRINT"BANANAS EARN $10. 3 CHERRIES EARN $90."
    b2c_fprintf(stdout,"BANANAS EARN $10. 3 CHERRIES EARN $90."); b2c_fprintf(stdout,"\n");
    // 01110 PRINT"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2"
    b2c_fprintf(stdout,"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2"); b2c_fprintf(stdout,"\n");
    // 01120 PRINT"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3."
    b2c_fprintf(stdout,"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3."); b2c_fprintf(stdout,"\n");
    // 01130 PRINT"IF THE LAST FRUIT IS A CHERRY AND THE"
    b2c_fprintf(stdout,"IF THE LAST FRUIT IS A CHERRY AND THE"); b2c_fprintf(stdout,"\n");
    // 01140 PRINT"OTHER TWO ARE THE SAME BUT NOT APPLES YOU"
    b2c_fprintf(stdout,"OTHER TWO ARE THE SAME BUT NOT APPLES YOU"); b2c_fprintf(stdout,"\n");
    // 01150 PRINT"EARN $10. EACH TURN COSTS $1. GOOD LUCK"
    b2c_fprintf(stdout,"EARN $10. EACH TURN COSTS $1. GOOD LUCK"); b2c_fprintf(stdout,"\n");

  StartGame:
    // 01160 LET J=0
    Earnings = 0;
    // 01170 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

  GameLoop:
    // 01180 GOSUB 1690
    RandInt1to5();
    // 01190 LET S1=S
    Roll1 = RandInt1to5_Result;
    // 01200 GOSUB 1690
    RandInt1to5();
    // 01210 LET S2=S
    Roll2 = RandInt1to5_Result;
    // 01220 GOSUB 1690
    RandInt1to5();
    // 01230 LET S3=S
    Roll3 = RandInt1to5_Result;
    // 01240 LET S=S1
    RandInt1to5_Result = Roll1;
    // 01250 GOSUB 1710
    FruitIdx2Str();
    // 01260 LET S1$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll1Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01270 LET S=S2
    RandInt1to5_Result = Roll2;
    // 01280 GOSUB 1710
    FruitIdx2Str();
    // 01290 LET S2$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll2Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01300 LET S=S3
    RandInt1to5_Result = Roll3;
    // 01310 GOSUB 1710
    FruitIdx2Str();
    // 01320 LET S3$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll3Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01330 IF S1$="CHERRY" THEN 1370
    if(strcmp(Roll1Fruit,"CHERRY")==0)goto IsDoubleCherry;
    // 01340 IF S1$="APPLE" THEN 1410
    if(strcmp(Roll1Fruit,"APPLE")==0)goto IsDoubleApple;
    // 01350 IF S1$=S2$ THEN 1430
    if(strcmp(Roll1Fruit,Roll2Fruit)==0)goto IsDouble;
    // 01360 GOTO 1450
    goto Nothing;

  IsDoubleCherry:
    // 01370 IF S1$=S2$ THEN 1390
    if(strcmp(Roll1Fruit,Roll2Fruit)==0)goto IsTripleCherry;
    // 01380 GOTO 1450
    goto Nothing;

  IsTripleCherry:
    // 01390 IF S2$=S3$ THEN 1470
    if(strcmp(Roll2Fruit,Roll3Fruit)==0)goto ThreeCherries;
    // 01400 GOTO 1450
    goto Nothing;

  IsDoubleApple:
    // 01410 IF S1$=S2$ THEN 1490
    if(strcmp(Roll1Fruit,Roll2Fruit)==0)goto DoubleApple;
    // 01420 GOTO 1510
    goto SingleApple;

  IsDouble:
    // 01430 IF S2$=S3$ THEN 1530
    if(strcmp(Roll2Fruit,Roll3Fruit)==0)goto TrippleOrDoubleAndCherry;
    // 01440 IF S3$="CHERRY" THEN 1530
    if(strcmp(Roll3Fruit,"CHERRY")==0)goto TrippleOrDoubleAndCherry;

  Nothing:
    // 01450 LET J=J-1
    Earnings = Earnings-1;
    // 01460 GOTO 1540
    goto DspResults;

  ThreeCherries:
    // 01470 LET J=J+89
    Earnings = Earnings+89;
    // 01480 GOTO 1540
    goto DspResults;

  DoubleApple:
    // 01490 LET J=J+2
    Earnings = Earnings+2;
    // 01500 GOTO 1540
    goto DspResults;

  SingleApple:
    // 01510 LET J=J+1
    Earnings = Earnings+1;
    // 01520 GOTO 1540
    goto DspResults;

  TrippleOrDoubleAndCherry:
    // 01530 LET J=J+9
    Earnings = Earnings+9;

  DspResults:
    // 01540 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01550 PRINT S1$;" ";S2$;" ";S3$
    b2c_fprintf(stdout,"%s %s %s",Roll1Fruit,Roll2Fruit,Roll3Fruit); b2c_fprintf(stdout,"\n");
    // 01560 PRINT"YOUR TOTAL EARNINGS ARE NOW $";J
    b2c_fprintf(stdout,"YOUR TOTAL EARNINGS ARE NOW $ %d ",Earnings); b2c_fprintf(stdout,"\n");
    // 01570 GOTO 1580
    goto QContinue;

  QContinue:
    // 01580 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01590 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'"
    b2c_fprintf(stdout,"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'"); b2c_fprintf(stdout,"\n");
    // 01600 INPUT Z$
    // Start of Basic INPUT statement 01600
    printf(" ? ");
    char inpbuf_01600[100];
    if(fgets(inpbuf_01600,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01600=strtok(inpbuf_01600," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01600==nullptr){
            QContinueAnswer = "";
        }else{
            QContinueAnswer = ps_01600;
        };
    }; // End of Basic INPUT statement 01600
    // 01610 IF Z$="Y" THEN 1660
    if(strcmp(QContinueAnswer,"Y")==0)goto PlayAgain;
    // 01620 IF Z$="N" THEN 1640
    if(strcmp(QContinueAnswer,"N")==0)goto QuitingTime;
    // 01630 PRINT"INVALID RESPONSE"
    b2c_fprintf(stdout,"INVALID RESPONSE"); b2c_fprintf(stdout,"\n");

  QuitingTime:
    // 01640 PRINT"ONE-ARM-BANDIT SAYS GOOD-BYE"
    b2c_fprintf(stdout,"ONE-ARM-BANDIT SAYS GOOD-BYE"); b2c_fprintf(stdout,"\n");
    // 01650 STOP
    exit(1);

  PlayAgain:
    // 01660 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01670 GOTO 1180
    goto GameLoop;
    // 01680 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
