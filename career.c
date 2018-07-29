/*
---
githubHandle: brianwachira
---
*/

/*The Pre-processor directives this program is using */

#include <stdio.h>

/*The pre-processor prototype */

#include "bruce.h"


/* The Global variables*/

char next;

char name[20];

char back;

char choices;

char again;

int mainintro;

int retry;



// The function prototypes


void stage(char level);

void workst(char idea);

void change_Career(char option);

void intro(char introduction);

void interest(int choice);

void sciences(char choice1);

void business(char choice2);

void arts(char choice3);

void afterthat(char whatnext);

void certification(char hierarchy);

void FIRST(char degreeA);

void SECOND(char degreeB);

void THIRD(char diploma);

void FOURTH(char certficate);

void FUTURE(char employ);

void employed(char competence);

void self_employed(char skill);

void rate_Me(char efficiency);

void exit(char done);

void transition(char courtesy);

void finalexit(char absolute);






/* The Main Function */

int main()

{


/*Program prompts user to enter name */

printf("Hi!\nMy name is Bruce.\nI am a career consultant.\nWhat is your name?\n\n");

scanf(" %s",&name);

// INTRO1 string from career.h preprocessor prompted to appear

printf("\n\nHi %s,%s",name,INTRO1);

scanf(" %c",&choices);

// if stmt to check choices

if(choices=='y'||choices=='Y')

{

 stage(choices);

}else if(choices=='n'||choices=='N')

{

printf("Ok. Thank you for giving me your time.\nI am sure we shall meet another time\nAdios!.");

}else if(choices!='y'||choices!='n')

{

printf("\nWrong input!\nYou have failed my intelligence test\nRead  the instructions next time.\nTry next time.");


}

return 0;

}





/* stage function prototype */

void stage(char level)

{


//Here the program prompts user to choose stage

printf("\n\nSo %s, If I may ask ,Which stage are you in?\n\n(A)Still in highschool or elementary level\n\n(B)On the verge of pursuing a higher level of education\n\n(C)Your working or you have just finished your studies\n\n",name);

scanf(" %c",&choices);

/* switch stmt for choices */

switch(choices)

{

case'A':

case'a':

        /*HIGHSCHOOL string from career.h preprocessor is output + the name that is a global variable */

        printf("%s %s\n\n",HIGHSCHOOL,name);

        break;


case'B':

case'b':

    /*function intro is called */

        intro(next);

        break;


case'C':

case'c':

     /*Function workst is called */

        workst(choices);

        break;

default:

/* fxn stages returns if user enters uninstructed input*/

        printf("\nWrong input!\nTry again");

        stage(choices);

        break;

}

return 0;

}





/*Workst Function*/

void workst(char idea)

{

/*program prompts user to select current status */

printf("\n\n\nSo, are you fresh from Campus and your looking for what next(1)\n\nor\n\nyou are in a career but you are thinking of changing it(2)\n\n\n\t\t(Choose a number)\n\n");

scanf(" %c",&choices);

// switch stmt for the different choices

switch(choices)
{


case'1':

        /*EMPLOYMENT string from career.h preprocessor is output */

        printf("%s",EMPLOYMENT);

        break;

case'2':

        /*HIGHSCHOOL string from career.h preprocessor is output */

        //change_Career fxn is called


        printf("%s",CHANGE);

        change_Career(choices);

        break;


default:

/* workst fxn returns if user enters uninstructed input*/

       printf("Wrong input!\nTry again\n");

       workst(choices);

       break;

}

return 0;

}




/*change_career fxn prototype*/


void change_Career(char option)

{

/*program asks user if he wants to change career */

printf("\n\n\n\n\nSo, do you want to change your career?(Y|N)\n");

scanf(" %c",&choices);

//switch stmt to output feedback from different choices

switch(choices)

{

case'y':

case'Y':

/* interest fxn is called */

        interest(choices);

        break;

case'N':

case'n':

/* exit fxn is called */

        rate_Me(choices);

        break;


default:

    /* change_Career fxn returns if user enters uninstructed input*/

       printf("\nWrong input!\nTry again\n");

       change_Career(choices);

       break;



}

return 0;

}




/*intro fxn prototype definition*/


void intro(char introduction)

{


int a;

/*user asked about his hobby */

printf("\nWhere does your favorite hobby take place?\n\n1.Indoors\t\t\t2.Outdoors\n\n");

scanf(" %d",&choices);

//if stmt on user's input

if(choices==1||2){

// interest fxn is called when input satisfies condition

   interest(choices);

}else

{

//intro fxn re-runs when input entered does not satisfy condition

printf("Wrong input\nTry again\n");

intro(retry);

}

return 0;

}


/*interest function definition */

void interest(int choice)

{



//user prompted to input interest


    printf("\n\nSo, what is your interest ? Pick a number\n\n1.Sciences\n\n2.Business\n\n3.Arts\n\n");

    scanf(" %c",&choices);

    //switch stmt to give output

    switch(choices)

    {

case'1':

   //sciences fxn is called

        sciences(choices);

        break;

case'2':

//business fxn is called

        business(choices);

        break;

case'3':

//arts fxn is called

        arts(choices);

        break;


default:

//interest fxn is re-run when input entered isn't satisfying the condtion

	    printf("\nWrong input.Try again\n");

	    interest(retry);

        break;

    }

return 0;

}




/* science function prototype definition */


void sciences(char choice1)

{


// user prompted to choose field of desire in science

printf("\n\n\nWow. I see you like science.\n.....I don't think you love everything about science.\n\nScience is big.\n\nChoose the field that has stuff you like.\n\n(A)Physical science\n\n(B)The earth\n\n(C)Life\n\n(D)Engineering\n\n(E)Computer Technology\n\n\n\n(F)Return back\n(G)Exit\n\n");

scanf(" %c",&choices);

//switch stmt to show where different choices lead to

switch(choices)

{

case'a':

case'A':

   /*P_SCIENCE string from career.h preprocessor is output */

        printf("%s",P_SCIENCE);

   /* afterthat function is called */

        afterthat(next);

        break;



case'b':

case'B':

/*E_SCIENCE string from career.h preprocessor is output*/

        printf("%s",E_SCIENCE);

//afterthat fxn is called

        afterthat(next);

        break;



case'c':

case'C':

//L_SCIENCE string from career.h preprocessor is output

        printf("%s",L_SCIENCE);

//afterthat fxn is called

        afterthat(next);

        break;



case'd':

case'D':

//ENGINEERING string from career.h preprocessor is output

        printf("%s",ENGINEERING);

//afterthat fxn is called

        afterthat(next);

        break;



case'E':

case'e':

//C_TECHNOLOGY string from career.h preprocessor is output

        printf("%s",C_TECHNOLOGY);

 //afterthat fxn is called

        afterthat(next);

        break;

case'F':

case'f':

//interest fxn is called that takes the program back to the previous fxn

        interest(back);

        break;

case'G':

case'g':

    //exit fxn is called

        exit(choices);

        break;

default:

//science fxn is called when user types input that does not satisfy options given

        printf("Wrong input. Try again");

        sciences(retry);

        break;

}

return 0;

}



//business fxn prototype definition



void business(char choice2)

{

//user prompted to enter his desire in business

printf("\n\n\nWow. So your a business guy.\n\nThis is new.\n\nChoose what your passionate about.\n\nThe choices are below.\n\n(A)Accounting & Finance\n\n(B)Marketing\n\n(C)International business\n\n(D)Real estate\n\n\t\t\t(E)Go back\n\n\t\t\t(F)Exit\n\n");

scanf(" %c",&choices);

//switch stmt to show where different desires lead to

switch(choices)

{

case'a':

case'A':

//ACCOUNTING string from career.h preprocessor is output

        printf("%s",ACCOUNTING);

//afterthat function is called

        afterthat(next);

        break;



case'b':

case'B':

//MARKETING string from career.h preprocessor is output

        printf("%s",MARKETING);

 //afterthat function is called

        afterthat(next);

        break;



case'c':

case'C':

//I_BUSINESS string from career.h preprocessor is output

        printf("%s",I_BUSINESS);

 //afterthat fxn is called

        afterthat(next);

        break;



case'd':

case'D':

//MARKETING string from career.h preprocessor is output

        printf("%s",MARKETING);

//afterthat fxn is called

        afterthat(next);

        break;


case'E':

case'e':

//interest fxn is called. This function takes the user to the previous function.i.e interest

        interest(back);

        break;

case'F':

case'f':

//exit function is called

        exit(choices);

        break;


default:

//if user types wrong input(Input other than what is in the options) the user is prompted and the business fxn is re-run

        printf("Wrong input. Try again");

        business(retry);

        break;
}

return 0;

}




//arts function


void arts(char choice3)

{

//user is prompted to type his or her desire in art

printf("\n\n\nThis calls for a partaaay!\n\n You love fun...I see.\n\nSo what do you love in art?\n\n(A)Performing art\n\n(B)culinary stuff(kitchen stuff)\n\n(C)Visual arts like something that  involves sketching\n\n\t\t\t(D)Return back\n\n\t\t\t(E)Exit\n\n");

scanf(" %c",&choices);

//switch stmt for different art choices

switch(choices)

{

case'a':

case'A':

//P_ARTS string from career.h preprocessor is output

        printf("%s",P_ARTS);

//afterthat function is called

        afterthat(next);

        break;



case'b':

case'B':

//C_ARTS string from career.h preprocessor is output

        printf("%s",C_ARTS);

 //afterthat fxn is called

        afterthat(next);

        break;



case'c':

case'C':

//V_ARTS string from career.h preprocessor is output

        printf("%s",V_ARTS);

 //afterthat function is called

        afterthat(next);

        break;

case'D':

case'd':
//interest function is called when user selects back.The function takes the user back.

        interest(back);

        break;

case'E':

case'e':

//exit function is called

        exit(choices);

        break;


default:

//the user is prompted to try inputing again if input does not match any options given

        printf("Wrong input. Try again");

        arts(retry);

        break;
}

return 0;

}






//afterthat function definition

void afterthat(char whatnext)

{

//User is asked whether they wish to continue

printf("\n\n\n%s, I want to show you more.\n\n\n\tDo you wish to see?(Y or N)\n\n",name);

scanf(" %c",&choices);

switch(choices)

{

case'Y':

case'y':

    //certification function is called

        certification(choices);

        break;

case'n':

case'N':

    //exit fucntion is called

       exit(choices);

       break;

default:

//user prompted to input again when input does not match options given

        printf("\nWrong input!\nTry again\n");

//afterhat fxn is called

        afterthat(choices);

        break;
 }

 return 0;

}

//void certification definition

void certification(char hierarchy)

{

//user prompted to enter his grade

printf("\n\nCan I ask, what Grade did you get in your secondary level of education?\n\n\t\t\t(A,B,C,D)\n\n");

scanf(" %c",&choices);

//switch stmt concerning the grades

switch(choices)

{

case'A':

case'a':

//FIRST fxn is called

        FIRST(choices);


        break;

case'B':

case'b':

//SECOND fxn is called

        SECOND(choices);


        break;

case'C':

case'c':

//THIRD fxn is called

        THIRD(choices);

        break;

case'D':

case'd':

//FOURTH fxn is called

         FOURTH(choices);


        break;

default:

//User prompted to input again when input does not match the options given

        printf("\n\nWrong input! Try again.\n\n");

        afterthat(retry);

        break;

}



 return 0;



}


//FIRST fxn definition


void FIRST(char degreeA)

{

//name global variable is outputed followed by DEGREE1 string from career.h preprocessor

printf("\n\nNow %s,%s",name,DEGREE1);

//FUTURE fxn is called

FUTURE(next);

return 0;

}

//SECOND fxn definition


void SECOND(char degreeB)

{

//name global variable is outputed followed by DEGREE2 string from career.h preprocessor

printf("\n\nNow %s,%s",name,DEGREE2);

//FUTURE fxn is called

FUTURE(next);

 return 0;

}


//THIRD fxn definition

void THIRD(char diploma)

{

//name global variable is outputed followed by DIPLOMA3 string from career.h preprocessor

printf("\n\nNow %s,%s",name,DIPLOMA3);

//FUTURE fxn is called

FUTURE(next);

return 0;

}

//FOURTH fxn definition

void FOURTH(char certificate)

{

//name global variable is outputed followed by CERTIFICATE4 string from career.h preprocessor

printf("\n\nNow %s,%s",name,CERTIFICATE4);

//FUTURE fxn is called

FUTURE(next);

return 0;

}

//FUTURE fxn definition

void FUTURE(char employ)

{
    //user asked concerning what he wants to do after studies

printf("\n\nIf I may ask %s, after your studies,\n\ndo you seek to be employed(1)\n\nor\n\ndo you wish to be self employed(2)\n\nPick a number\n\n",name);


scanf(" %c",&choices);

//switch stmt concerning choices given

switch (choices)

{

case'1':

//employed fxn is called

        employed(choices);

        break;

case'2':

//self_employed fxn is called

        self_employed(choices);

        break;

default:

    //user prompted to input again

        printf("\n\nWrong input! Try again\n\n");

    //FUTURE fxn is recalled

        FUTURE(retry);

        break;



}

return 0;

}


//employed fxn definition

void employed(char competence)


{

//Name global variable followed by employee string in career.h is output

printf("\n\n%s\n\n",employee);

//rate_Me fxn is called

rate_Me(next);

return 0;

}

//self_employed fxn definition

void self_employed(char skill)



{

//s_employed from career.h preprocessor is output

printf("\n\n%s\n\n",s_employed);

//rate_Me fxn is called

rate_Me(next);

return 0;

}

//rate_Me fxn defintion

void rate_Me(char efficiency)


{

//User prompted to rate the program

printf("\n\nRate me on a scale of 1 to 10.\nHow did i do?\n\n");

scanf(" %c",&choices);

//switch concerning rate

switch(choices)

{

case'1':

        printf("\n\nDon't be that mean with numbers.\n\nReally?????\n\n");

        transition(choices);

        break;

case'2':

        printf("\n\nlol!\n\nAre you for real?\n\n");

        transition(choices);

        break;


case'3':

        printf("\n\nYou probably hate programs because i'm one.\n\nMy creator can't pay me yet I am treated like this? #sob\n\n");

        transition(choices);

        break;


case'4':

        printf("\n\nIll tell my boss to make an upgrade.\nAnd your welcome\n\n");

        transition(choices);

        break;


case'5':

        printf("\n\nThat is fair.\nYou can have a line of code with extra debugging sauce please!!\n");

        transition(choices);

        break;

case'6':

        printf("\n\nIf i was told to choose what to device, It would be you\n\n");

        transition(choices);

        break;

case'7':

        printf("\n\nYour the zero to my ones\n\n");

        transition(choices);

        break;

case'8':

        printf("\n\nRight back at you\n\nYour like 1000 lines of hieroglyphic text in my heart\n\n");

        transition(choices);

        break;

case'9':

        printf("\n\nYour like an ocean of code that i want to swim on forever\n\n");

        transition(choices);

        break;

case'10':

        printf("\n\nAll credit goes to my creator\n\nHe is the greatest programmer i've known\n\n");

        transition(choices);

        break;

default:

        printf("\n\nNever mind.It is ok");

        transition(choices);

        break;
}



}

//transition fxn definition

void transition(char courtsey)

{

//User prompted to press any key to continue

printf("\n\nThank you\n\nType anything to continue\n\n");

scanf(" %c",&next);

//switch stmt from user input

switch(next)

{

case'1':

//finalexit fxn is called

       finalexit(next);

       break;

case'2':

//finalexit fxn is called

       finalexit(next);

       break;

default:

//finalexit is called

       finalexit(next);

       break;


}

return 0;
}





//exit fxn definition

void exit(char done)


{

//program outputs conclusion

printf("I enjoyed knowing you %s.\nThank you for interacting with me.\nI am sure we will meet some time from now\n",name);


return 0;

}

//finalexit fxn definition

void finalexit(char absolute)

{

//program outputs conclusion

printf("\n\nThis is that moment...a teacher speaks as if its\nthe end of the world but newsflash your still going to\nbe alive to tell your children how you came to be.\nHold on to the things I have emphasized.I believe in you %s.\n\nI know you will make me proud\n\nAdios\n",name);

 return 0;

}
