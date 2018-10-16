//IMPORT OF THE HEADER FILES
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// FUNCTIONS TO WRITE AND DISPLAY A LOAD GAME
void Ecriresauvegarde(int **Tab)
{
    FILE* fichier = NULL;
    int i,j;

    fichier = fopen("sauvegarde.txt", "w");

    if (fichier != NULL)
    {

        for(i=0;i<9;i++)
        {
            for(j=0;j<10;j++)
            {
                fprintf(fichier, "%c", Tab[i][j]);
            }
            fputs("\n",fichier);
        }
        fclose(fichier);
    }
}
void Affichersauvegarde(int **T)
{
        FILE* fichier = NULL;
    int caractereActuel = 0;

    int i,j;

    fichier = fopen("sauvegarde.txt", "r");
    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            if(ftell(fichier)==1)
                T[0][0]=caractereActuel;
            if(ftell(fichier)==2)
                T[0][1]=caractereActuel;
            if(ftell(fichier)==3)
                T[0][2]=caractereActuel;
            if(ftell(fichier)==4)
                T[0][3]=caractereActuel;
            if(ftell(fichier)==5)
                T[0][4]=caractereActuel;
            if(ftell(fichier)==6)
                T[0][5]=caractereActuel;
            if(ftell(fichier)==7)
                T[0][6]=caractereActuel;
            if(ftell(fichier)==8)
                T[0][7]=caractereActuel;
            if(ftell(fichier)==9)
                T[0][8]=caractereActuel;
            if(ftell(fichier)==10)
                T[0][9]=caractereActuel;
            if(ftell(fichier)==13)
                T[1][0]=caractereActuel;
            if(ftell(fichier)==14)
                T[1][1]=caractereActuel;
            if(ftell(fichier)==15)
                T[1][2]=caractereActuel;
            if(ftell(fichier)==16)
                T[1][3]=caractereActuel;
            if(ftell(fichier)==17)
                T[1][4]=caractereActuel;
            if(ftell(fichier)==18)
                T[1][5]=caractereActuel;
            if(ftell(fichier)==19)
                T[1][6]=caractereActuel;
            if(ftell(fichier)==20)
                T[1][7]=caractereActuel;
            if(ftell(fichier)==21)
                T[1][8]=caractereActuel;
            if(ftell(fichier)==22)
                T[1][9]=caractereActuel;
            if(ftell(fichier)==25)
                T[2][0]=caractereActuel;
            if(ftell(fichier)==26)
                T[2][1]=caractereActuel;
            if(ftell(fichier)==27)
                T[2][2]=caractereActuel;
            if(ftell(fichier)==28)
                T[2][3]=caractereActuel;
            if(ftell(fichier)==29)
                T[2][4]=caractereActuel;
            if(ftell(fichier)==30)
                T[2][5]=caractereActuel;
            if(ftell(fichier)==31)
                T[2][6]=caractereActuel;
            if(ftell(fichier)==32)
                T[2][7]=caractereActuel;
            if(ftell(fichier)==33)
                T[2][8]=caractereActuel;
            if(ftell(fichier)==34)
                T[2][9]=caractereActuel;
            if(ftell(fichier)==37)
                T[3][0]=caractereActuel;
            if(ftell(fichier)==38)
                T[3][1]=caractereActuel;
            if(ftell(fichier)==39)
                T[3][2]=caractereActuel;
            if(ftell(fichier)==40)
                T[3][3]=caractereActuel;
            if(ftell(fichier)==41)
                T[3][4]=caractereActuel;
            if(ftell(fichier)==42)
                T[3][5]=caractereActuel;
            if(ftell(fichier)==43)
                T[3][6]=caractereActuel;
            if(ftell(fichier)==44)
                T[3][7]=caractereActuel;
            if(ftell(fichier)==45)
                T[3][8]=caractereActuel;
            if(ftell(fichier)==46)
                T[3][9]=caractereActuel;
            if(ftell(fichier)==49)
                T[4][0]=caractereActuel;
            if(ftell(fichier)==50)
                T[4][1]=caractereActuel;
            if(ftell(fichier)==51)
                T[4][2]=caractereActuel;
            if(ftell(fichier)==52)
                T[4][3]=caractereActuel;
            if(ftell(fichier)==53)
                T[4][4]=caractereActuel;
            if(ftell(fichier)==54)
                T[4][5]=caractereActuel;
            if(ftell(fichier)==55)
                T[4][6]=caractereActuel;
            if(ftell(fichier)==56)
                T[4][7]=caractereActuel;
            if(ftell(fichier)==57)
                T[4][8]=caractereActuel;
            if(ftell(fichier)==58)
                T[4][9]=caractereActuel;
            if(ftell(fichier)==61)
                T[5][0]=caractereActuel;
            if(ftell(fichier)==62)
                T[5][1]=caractereActuel;
            if(ftell(fichier)==63)
                T[5][2]=caractereActuel;
            if(ftell(fichier)==64)
                T[5][3]=caractereActuel;
            if(ftell(fichier)==65)
                T[5][4]=caractereActuel;
            if(ftell(fichier)==66)
                T[5][5]=caractereActuel;
            if(ftell(fichier)==67)
                T[5][6]=caractereActuel;
            if(ftell(fichier)==68)
                T[5][7]=caractereActuel;
            if(ftell(fichier)==69)
                T[5][8]=caractereActuel;
            if(ftell(fichier)==70)
                T[5][9]=caractereActuel;
            if(ftell(fichier)==73)
                T[6][0]=caractereActuel;
            if(ftell(fichier)==74)
                T[6][1]=caractereActuel;
            if(ftell(fichier)==75)
                T[6][2]=caractereActuel;
            if(ftell(fichier)==76)
                T[6][3]=caractereActuel;
            if(ftell(fichier)==77)
                T[6][4]=caractereActuel;
            if(ftell(fichier)==78)
                T[6][5]=caractereActuel;
            if(ftell(fichier)==79)
                T[6][6]=caractereActuel;
            if(ftell(fichier)==80)
                T[6][7]=caractereActuel;
            if(ftell(fichier)==81)
                T[6][8]=caractereActuel;
            if(ftell(fichier)==82)
                T[6][9]=caractereActuel;
            if(ftell(fichier)==85)
                T[7][0]=caractereActuel;
            if(ftell(fichier)==86)
                T[7][1]=caractereActuel;
            if(ftell(fichier)==87)
                T[7][2]=caractereActuel;
            if(ftell(fichier)==88)
                T[7][3]=caractereActuel;
            if(ftell(fichier)==89)
                T[7][4]=caractereActuel;
            if(ftell(fichier)==90)
                T[7][5]=caractereActuel;
            if(ftell(fichier)==91)
                T[7][6]=caractereActuel;
            if(ftell(fichier)==92)
                T[7][7]=caractereActuel;
            if(ftell(fichier)==93)
                T[7][8]=caractereActuel;
            if(ftell(fichier)==94)
                T[7][9]=caractereActuel;
            if(ftell(fichier)==97)
                T[8][0]=caractereActuel;
            if(ftell(fichier)==98)
                T[8][1]=caractereActuel;
            if(ftell(fichier)==99)
                T[8][2]=caractereActuel;
            if(ftell(fichier)==100)
                T[8][3]=caractereActuel;
            if(ftell(fichier)==101)
                T[8][4]=caractereActuel;
            if(ftell(fichier)==102)
                T[8][5]=caractereActuel;
            if(ftell(fichier)==103)
                T[8][6]=caractereActuel;
            if(ftell(fichier)==104)
                T[8][7]=caractereActuel;
            if(ftell(fichier)==105)
                T[8][8]=caractereActuel;
            if(ftell(fichier)==106)
                T[8][9]=caractereActuel;
            if(ftell(fichier)==109)
                T[9][0]=caractereActuel;
            if(ftell(fichier)==110)
                T[9][1]=caractereActuel;
            if(ftell(fichier)==111)
                T[9][2]=caractereActuel;
            if(ftell(fichier)==112)
                T[9][3]=caractereActuel;
            if(ftell(fichier)==113)
                T[9][4]=caractereActuel;
            if(ftell(fichier)==114)
                T[9][5]=caractereActuel;
            if(ftell(fichier)==115)
                T[9][6]=caractereActuel;
            if(ftell(fichier)==116)
                T[9][7]=caractereActuel;
            if(ftell(fichier)==117)
                T[9][8]=caractereActuel;
            if(ftell(fichier)==118)
                T[9][9]=caractereActuel;
        }while (caractereActuel != EOF);
        fclose(fichier);
    }
    printf("\n     1  2  3  4  5  6  7  8  9  10");
    printf("\n    -------------------------------\n");
    for(i=0;i<9;i++)
    {
        printf("%d|   ",i+1);
        for(j=0;j<10;j++)
            printf("%c  ",T[i][j]);
        printf("\n\n");
    }

}

//MAIN FUNCTION OF THE PROGRAM
int main()
{

    //DEFINE THE TYPE OF THE VARIABLE
    int i,j,RiverL,RiverC,ForetL,ForetC,Drapeau1,Drapeau2,game=0,coord1,coord2,coord3,coord4,player=0,PM=0,save_position,random;
    int **T,**F;
    char start1[15];
    char start2[15];
    char pass1[15];
    char pass2[15];
    char str1[15];
    char str2[15];
    char sauvegarde;
    int ret,ret2;
    //ASK TO THE USER TO PLAY WITH A LOAD OR TO DO A NEW GAME
    printf("Do you want to use your load (tap L) or to do a new game (tap N) ? \n");
    scanf("%c",&sauvegarde);
    if(sauvegarde=='L')
    {
        T=(int **)malloc(10*sizeof(int*));
        F=(int **)malloc(10*sizeof(int*));
        for(i=0;i<10;i++)
            T[i]=(int*)malloc(10*sizeof(int));
        for(i=0;i<10;i++)
            F[i]=(int*)malloc(10*sizeof(int));
        for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    T[i][j]=' ';
                    F[i][j]=' ';
                }

                for(i=0;i<10;i++)
                {
                    for(j=0;j<10;j++)
                    {
                        T[i][j]=' ';
                        F[i][j]=' ';
                    }
                }
            }
            Affichersauvegarde(T);
            game=1;
    }
    else
    {
            //DEFINE THE VARIABLE
        srand(time(NULL));

        //RANDOM EMPLACEMENT OF THE FLAG
        Drapeau1=rand()%10;
        Drapeau2=rand()%10;

        //WELCOME MESSAGE
        printf("Welcome in KAPTUR by YANIS and STEPHANE \n\n if you want to play the game enter : start \n if you want to check the rules, then enter what you want. \n\n");

        //SCAN OF THE CHOICE OF THE PLAYER
        scanf("%s",&start1);
        strcpy(str1,start1);
        strcpy(start2, "start");
        ret = strcmp(str1, start2);

        //INIT OF THE LISTS
        T=(int **)malloc(10*sizeof(int*));
        F=(int **)malloc(10*sizeof(int*));
        for(i=0;i<10;i++)
            T[i]=(int*)malloc(10*sizeof(int));
        for(i=0;i<10;i++)
            F[i]=(int*)malloc(10*sizeof(int));
        for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                {
                    T[i][j]=' ';
                    F[i][j]=' ';
                }

                for(i=0;i<10;i++)
                {
                    for(j=0;j<10;j++)
                    {
                        T[i][j]=' ';
                        F[i][j]=' ';
                    }

                    if(i==0)
                    {
                        T[i][5]='S';
                        T[i][0]='S';
                        T[i][1]='I';
                        T[i][2]='T';
                        T[i][3]='I';
                        T[i][7]='I';
                        T[i][8]='T';
                        T[i][9]='I';
                        T[i][4]='S';
                        T[i][6]='S';
                        T[i][Drapeau1]='1';
                    }
                    if(i==8)
                    {
                        T[i][5]='s';
                        T[i][0]='s';
                        T[i][1]='i';
                        T[i][2]='t';
                        T[i][3]='i';
                        T[i][7]='i';
                        T[i][8]='t';
                        T[i][9]='i';
                        T[i][4]='s';
                        T[i][6]='s';
                        T[i][Drapeau2]='2';
                    }
                }
            }

        //DEFINE THE RANDOM EMPLACEMENT OF FOREST AND RIVER
        for(i=0;i<2;i++)
        {
            RiverC=rand()%(7-2)+2;
            RiverL=rand()%(7-1)+1;
            ForetC=rand()%(6-3)+3;
            ForetL=rand()%(8-3)+3;
            T[ForetL][ForetC]='F';
            T[ForetL][ForetC+1]='F';
            T[ForetL-1][ForetC+1]='F';
            T[ForetL-1][ForetC]='F';
            T[RiverL][RiverC]='R';
            T[RiverL][RiverC-1]='R';
            T[RiverL][RiverC+1]='R';
            F[ForetL][ForetC]='F';
            F[ForetL][ForetC+1]='F';
            F[ForetL-1][ForetC+1]='F';
            F[ForetL-1][ForetC]='F';
            F[RiverL][RiverC]='R';
            F[RiverL][RiverC-1]='R';
            F[RiverL][RiverC+1]='R';
        }

    }



    while(game==0)
    {
        //IF THE PLAYER DECIDES TO PLAY, WE PRINT THE PLAYBOARD AND WE PUT THE GAME LOOP ON
        if(ret==0)
        {
            printf("\n     1  2  3  4  5  6  7  8  9  10");
            printf("\n    -------------------------------\n");
            for(i=0;i<9;i++)
            {
                printf("%d|   ",i+1);
                for(j=0;j<10;j++)

                    printf("%c  ",T[i][j]);
                printf("\n\n");
            }
            game=1;
        }

        //IF THE PLAYER ENTER OTHER THAT "START", THE RULES ARE DISPLAYED
        if(ret!=0)
        {
            printf("Scouts are modelized by S, Infantryman by I, Shock Troups by T, Your base by B, The Flag who need be capture by D\n");
            printf("\n");
            printf("You need to capture the flag in the center and bring back it to your base!!!!\n");
            printf("\n");
            printf("Scouts have 5PM, Infantryman: 3PM , Shock Troups: 2PM\n");
            printf("\n");
            printf("WARNING if you go in the Forest you need 2PM and in the River you need all of your PM \n");
            printf("\n");
            printf(" 1. Scout vs. Scout : nothing happens;\n 2. Infantryman or troops of shock against scout : the scout is returned to his starting position; \n 3. Shock Troops against Infantryman : Infantryman is returned to his starting position;\n 4. Infantryman against Infantryman : one of them (randomly chosen with 50% of chance) is returned to its starting position;\n 5. Shock Troops Against Shock Troops : Both Shift One Space Towards their Flag. If retreat is not possible (board edge or position occupied by other pawns) then return to the starting position.\n ");
            printf("\n");
            printf("Have Fun!!!");
            printf("\n");
            printf("Do you want to start the game now ? Write 'yes' if you want, 'no' if you want to quit the game. \n");
            scanf("%s",&start1);
            strcpy(str1,start1);
            strcpy(start2, "yes");
            ret = strcmp(str1, start2);
        }

    }
    //THE BEGIN OF THE 2ND MAIN LOOP
    while(game==1)
    {
        //RANDOM VARIABLE FOR THE CHANCE OF THE INFANTRY TO FIGHT EACH OTHER
        random=rand() % 50;
        //INITI OF THE POINT OF MOVEMENT
        PM=0;
        //THE CONDITION TO MAKE THE DIFFERENCE BTW PLAYER 1 AND PLAYER 2
        if(player%2==0)
        {
            printf("--------------------PLAYER 1-------------------------\n");
            printf("First, enter the coordinates of your soldier to move him (line first, then column), ex: 1,4 \n");
            scanf("%d,%d",&coord1,&coord2);
            //HERE WITH ALL THE CONDITIONS BELOW, THE IDEA IS TO CHECK IF THE COORDINATES WHICH THE PLAYER ENTER ARE VALID
            if(coord1>0 && coord1<10)
            {
                if(coord2>0 && coord2<11)
                {
                    if(T[coord1-1][coord2-1]=='s' || T[coord1-1][coord2-1]=='t' || T[coord1-1][coord2-1]=='i' || T[coord1-1][coord2-1]=='2')
                        printf("You cannot move the other team !");
                    else
                    {
                        if(T[coord1-1][coord2-1]=='F' || T[coord1-1][coord2-1]=='R' || T[coord1-1][coord2-1]==' ' || T[coord1-1][coord2-1]=='1' || T[coord1-1][coord2-1]=='2' )
                            printf("\nYou cannot modify the map dude ! Please select a soldier.\n");
                        else
                        {
                            if(F[coord1-1][coord2-1]!='F' || F[coord1-1][coord2-1]!='R')
                            {
                                if(T[coord1-1][coord2-1]=='D')
                                {
                                    PM=5;
                                    printf("You selected THE FLAG, you've got 5PM.\n");
                                }
                                if(T[coord1-1][coord2-1]=='S')
                                {
                                    PM=5;
                                    printf("You selected a Scout, you've got 5PM.\n");
                                }

                                if(T[coord1-1][coord2-1]=='I')
                                {
                                    PM=3;
                                    printf("You selected an Infatry, you've got 3PM.\n");
                                }

                                if(T[coord1-1][coord2-1]=='T')
                                {
                                    PM=2;
                                    printf("You selected an Troup, you've got 2PM.\n");
                                }

                            }
                            //BEGINNING OF THE LOOP WITH A PM CONDITION
                           while(PM>0)
                           {
                               //THE CONDITION HERE IS TO DISPLAY A MESSAGE IF THE PLAYER IS IN THE FOREST
                               if(F[coord1-1][coord2-1]=='F')
                               {
                                   if(T[coord1-1][coord2-1]=='D')
                                   {
                                       PM=2;
                                       printf("You selected THE FLAG but you're stuck in the forest, To get out of it, It will cost 2 PM instead of one !.\n");
                                   }
                                   if(T[coord1-1][coord2-1]=='S')
                                   {
                                       PM=2;
                                       printf("You selected a Scout but you're stuck in the forest, To get out of it, It will cost 2 PM instead of one !\n");
                                   }

                                   if(T[coord1-1][coord2-1]=='I')
                                   {
                                       PM=1;
                                       printf("You selected an Infatry but you're stuck in the forest, To get out of it, It will cost 2 PM instead of one !");
                                   }

                                   if(T[coord1-1][coord2-1]=='T')
                                   {
                                       PM=1;
                                       printf("You selected a Troup but you're stuck in the forest, To get out of it, It will cost 2 PM instead of one !\n");
                                   }

                               }
                               //THE CONDITION HERE IS TO DISPLAY A MESSAGE IF THE PLAYER IS IN THE RIVER
                               if(F[coord1-1][coord2-1]=='R')
                               {
                                   if(T[coord1-1][coord2-1]=='D')
                                   {
                                       printf("You selected THE FLAG but you're stuck in the river, You can move do only one movement to get out of it !.\n");
                                   }
                                   if(T[coord1-1][coord2-1]=='S')
                                   {
                                       printf("You selected a Scout but you're stuck in the river, You can move do only one movement to get out of it !\n");
                                   }

                                   if(T[coord1-1][coord2-1]=='I')
                                   {
                                       printf("You selected an Infatry but you're stuck in the river, You can do only one movement to get out of it !");
                                   }

                                   if(T[coord1-1][coord2-1]=='T')
                                   {
                                       printf("You selected a Troup but you're stuck in the river, You can do only one movement to get out of it !\n");
                                   }

                               }

                               printf("Alright ! Then enter the destination point of your soldier. \n");
                               scanf("%d,%d",&coord3,&coord4);
                               //LIKE ABOVE, THE CONDITIONS HERE ARE FOR THE DESTINATION AND VERIFY THAT THE PLAYER ENTER VALID COORDINATE
                               if(coord3>0 && coord3<10)
                               {
                                   if(coord4>0 && coord4<11)
                                   {
                                       if(((coord3-coord1==1)||(coord1-coord3==1)||(coord3-coord1==0)||(coord1-coord3==0))&&((coord2-coord4==1)||(coord4-coord2==1)||(coord2-coord4==0)||(coord4-coord2==0)))
                                       {
                                           if(T[coord3-1][coord4-1]=='1' || T[coord3-1][coord4-1]=='2')
                                           {
                                               printf("\nerror, this place is taken by the flag !\n");
                                               PM+=1;
                                           }



                                           if(T[coord3-1][coord4-1]=='s' || T[coord3-1][coord4-1]=='t' || T[coord3-1][coord4-1]=='i' || T[coord3-1][coord4-1]=='2')
                                           {
                                               printf("\nerror, this place is taken by the other team !\n");
                                               PM+=1;
                                           }

                                           if(T[coord3-1][coord4-1]=='S')
                                           {
                                               printf("\ncareful ! There are your Scouts here\n");
                                               PM+=1;
                                           }


                                           if(T[coord3-1][coord4-1]=='T')
                                           {
                                               printf("\ncareful ! There are your Troup here\n");
                                               PM+=1;
                                           }


                                           if(T[coord3-1][coord4-1]=='I')
                                           {
                                               printf("\ncareful ! There are your Infantry here\n");
                                               PM+=1;
                                           }



                                           if(T[coord3-1][coord4-1]==' ' || T[coord3-1][coord4-1]=='R' || T[coord3-1][coord4-1]=='F')
                                           {
                                               //BELOW, WE'VE ALL THE CONDITION TO RESPECT THE RULES OF THE GAME (THE FGIHT AND DEPENDANCE OF THE FIELD)


                                               T[coord3-1][coord4-1]=T[coord1-1][coord2-1];
                                               T[coord1-1][coord2-1]=' ';

                                               //IF THE SCOUT OF PLAYER 2 BRING BACK THE FLAG OF PLAYER 1, IF PLAYER 1 PUT A SCOUT NEXT TO THE FLAG, THE FLAG FOLD BACK
                                               if(T[coord3-2][coord4-1]=='d' || T[coord3][coord4-1]=='d' || T[coord3-1][coord4-2]=='d' || T[coord3-1][coord4]=='d' || T[coord3-2][coord4-2]=='d' || T[coord3-2][coord4]=='d' || T[coord3][coord4]=='d' || T[coord3][coord4-2]=='d')
                                               {
                                                   if(T[coord3-2][coord4-1]!='2' && T[coord3][coord4-1]!='2' && T[coord3-1][coord4-2]!='2' && T[coord3-1][coord4]!='2' && T[coord3-2][coord4-2]!='2' && T[coord3-2][coord4]!='2' && T[coord3][coord4]!='2' && T[coord3][coord4-2]!='2')
                                                   {
                                                       if(T[coord3-1][coord4-1]=='S')
                                                       {
                                                           T[8][Drapeau2]='1';

                                                           if(T[coord3-2][coord4-1]=='d')
                                                               T[coord3-2][coord4-1]=' ';

                                                           if(T[coord3][coord4-1]=='d')
                                                               T[coord3][coord4-1]=' ';

                                                           if(T[coord3-1][coord4-2]=='d')
                                                               T[coord3-1][coord4-2]=' ';

                                                           if(T[coord3-1][coord4]=='d')
                                                               T[coord3-1][coord4]=' ';

                                                           if(T[coord3-2][coord4-2]=='d')
                                                               T[coord3-2][coord4-2]=' ';

                                                           if(T[coord3-2][coord4]=='d')
                                                               T[coord3-2][coord4]=' ';

                                                           if(T[coord3][coord4]=='d')
                                                               T[coord3][coord4]=' ';

                                                           if(T[coord3][coord4-2]=='d')
                                                               T[coord3][coord4-2]=' ';

                                                           printf("The Taken flag is versus a scout of Player 1... The flag return to the team 1 !.");
                                                       }
                                                   }

                                               }

                                               //CONDITION TO TAKE THE FLAG
                                               if(T[coord3-2][coord4-1]=='2' || T[coord3][coord4-1]=='2' || T[coord3-1][coord4-2]=='2'|| T[coord3-1][coord4]=='2' || T[coord3-2][coord4-2]=='2' || T[coord3-2][coord4]=='2' || T[coord3][coord4]=='2' || T[coord3][coord4-2]=='2')
                                               {
                                                   if(T[coord3-1][coord4-1]=='S')
                                                   {
                                                       printf("The flag is taken by the player 1 !");
                                                       T[coord3-1][coord4-1]=' ';
                                                       T[coord3-1][coord4-1]='D';

                                                       if(T[coord3-2][coord4-1]=='2')
                                                           T[coord3-2][coord4-1]=' ';

                                                       if(T[coord3][coord4-1]=='2')
                                                           T[coord3][coord4-1]=' ';

                                                       if(T[coord3-1][coord4-2]=='2')
                                                           T[coord3-1][coord4-2]=' ';

                                                       if(T[coord3-1][coord4]=='2')
                                                           T[coord3-1][coord4]=' ';

                                                       if(T[coord3-2][coord4-2]=='2')
                                                           T[coord3-2][coord4-2]=' ';

                                                       if(T[coord3-2][coord4]=='2')
                                                           T[coord3-2][coord4]=' ';

                                                       if(T[coord3][coord4]=='2')
                                                           T[coord3][coord4]=' ';

                                                       if(T[coord3][coord4-2]=='2')
                                                           T[coord3][coord4-2]=' ';
                                                   }
                                               }

                                               //CONDITION TO WIN
                                               if(T[coord3-2][coord4-1]=='1' || T[coord3][coord4-1]=='1' || T[coord3-1][coord4-2]=='1' || T[coord3-1][coord4]=='1' || T[coord3-2][coord4-2]=='1' || T[coord3-2][coord4]=='1' || T[coord3][coord4]=='1' || T[coord3][coord4-2]=='1')
                                               {
                                                   if(T[coord3-1][coord4-1]=='D')
                                                   {
                                                       printf("Congratulation Player 1, you won !");
                                                       game=0;
                                                       break;
                                                   }
                                               }

                                               //ALL FIGHT CONDITION AGAINST THE SCOUT
                                               if(T[coord3-2][coord4-1]=='s' || T[coord3][coord4-1]=='s' || T[coord3-1][coord4-2]=='s' || T[coord3-1][coord4]=='s' || T[coord3-2][coord4-2]=='s' || T[coord3-2][coord4]=='s' || T[coord3][coord4]=='s' || T[coord3][coord4-2]=='s')
                                               {
                                                   if(T[coord3-2][coord4-1]!='1' && T[coord3][coord4-1]!='1' && T[coord3-1][coord4-2]!='1' && T[coord3-1][coord4]!='1' && T[coord3-2][coord4-2]!='1' && T[coord3-2][coord4]!='1' && T[coord3][coord4]!='1' && T[coord3][coord4-2]!='1')
                                                   {
                                                       if(T[coord3-1][coord4-1]=='I' || T[coord3-1][coord4-1]=='T' )
                                                       {
                                                           if(T[8][8]==' ')
                                                           {
                                                               T[8][5]='s';
                                                           }
                                                           else if(T[8][0]==' ')
                                                           {
                                                               T[8][0]='s';
                                                           }

                                                           else if(T[8][6]==' ')
                                                           {
                                                               T[8][6]='s';
                                                           }

                                                           else if(T[8][4]==' ')
                                                           {
                                                               T[8][4]='s';
                                                           }

                                                           if(T[coord3-2][coord4-1]=='s')
                                                               T[coord3-2][coord4-1]=' ';

                                                           if(T[coord3][coord4-1]=='s')
                                                               T[coord3][coord4-1]=' ';

                                                           if(T[coord3-1][coord4-2]=='s')
                                                               T[coord3-1][coord4-2]=' ';

                                                           if(T[coord3-1][coord4]=='s')
                                                               T[coord3-1][coord4]=' ';

                                                           if(T[coord3-2][coord4-2]=='s')
                                                               T[coord3-2][coord4-2]=' ';

                                                           if(T[coord3-2][coord4]=='s')
                                                               T[coord3-2][coord4]=' ';

                                                           if(T[coord3][coord4]=='s')
                                                               T[coord3][coord4]=' ';

                                                           if(T[coord3][coord4-2]=='s')
                                                               T[coord3][coord4-2]=' ';


                                                           printf("The Scout of Player 2 is versus your armee ! His scout fold back.");
                                                           player+=1;
                                                       }
                                                   }

                                               }

                                               //ALL FIGHT CONDITION AGAINST A TROUPS
                                               if(T[coord3-2][coord4-1]=='t' || T[coord3][coord4-1]=='t' || T[coord3-1][coord4-2]=='t' || T[coord3-1][coord4]=='t' || T[coord3-2][coord4-2]=='t' || T[coord3-2][coord4]=='t' || T[coord3][coord4]=='t' || T[coord3][coord4-2]=='t')
                                               {
                                                   if(T[coord3-2][coord4-1]!='2' && T[coord3][coord4-1]!='2' && T[coord3-1][coord4-2]!='2' && T[coord3-1][coord4]!='2' && T[coord3-2][coord4-2]!='2' && T[coord3-2][coord4]!='2' && T[coord3][coord4]!='2' && T[coord3][coord4-2]!='2')
                                                   {
                                                       if(T[coord3-1][coord4-1]=='S')
                                                       {
                                                           if(T[0][5]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][5]='S';
                                                           }
                                                           else if(T[0][0]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][0]='S';
                                                           }

                                                           else if(T[8][6]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][6]='S';
                                                           }

                                                           else if(T[0][4]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][4]='S';
                                                           }
                                                           printf("The scout of player 1 is versus a Troop ! Your Scout fold back.");
                                                           player+=1;
                                                       }
                                                   }


                                                   if(T[coord3-1][coord4-1]=='I')
                                                   {
                                                       if(T[0][1]==' ')
                                                       {
                                                           T[coord3-1][coord4-1]=' ';
                                                           T[0][1]='I';
                                                       }
                                                       else if(T[8][3]==' ')
                                                       {
                                                           T[coord3-1][coord4-1]=' ';
                                                           T[0][3]='I';
                                                       }
                                                       else if(T[0][7]==' ')
                                                       {
                                                           T[coord3-1][coord4-1]=' ';
                                                           T[0][7]='I';
                                                       }
                                                       else if(T[0][9]==' ')
                                                       {
                                                           T[coord3-1][coord4-1]=' ';
                                                           T[0][9]='I';
                                                       }
                                                       printf("The Infantry of Player 1 is versus a Troop ! Infantry fold back.");
                                                       player+=1;
                                                   }

                                                   if(T[coord3-1][coord4-1]=='T')
                                                   {
                                                       T[coord3-1][coord4-1]=' ';
                                                       T[coord3-2][coord4-1]='T';

                                                       if(T[coord3-2][coord4-1]=='t')
                                                       {
                                                           T[coord3-2][coord4-1]=' ';
                                                           T[coord3-1][coord4-1]='t';
                                                       }

                                                       if(T[coord3][coord4-1]=='t')
                                                       {
                                                           T[coord3][coord4-1]=' ';
                                                           T[coord3+1][coord4-1]='t';
                                                       }



                                                       if(T[coord3-1][coord4-2]=='t')
                                                       {
                                                           T[coord3-1][coord4-2]=' ';
                                                           T[coord3][coord4-2]='t';
                                                       }


                                                       if(T[coord3-1][coord4]=='t')
                                                       {
                                                           T[coord3-1][coord4]=' ';
                                                           T[coord3][coord4]='t';
                                                       }


                                                       if(T[coord3-2][coord4-2]=='t')
                                                       {
                                                           T[coord3-2][coord4-2]=' ';
                                                           T[coord3-1][coord4-2]='t';
                                                       }


                                                       if(T[coord3-2][coord4]=='t')
                                                       {
                                                           T[coord3-2][coord4]=' ';
                                                           T[coord3-1][coord4]='t';
                                                       }


                                                       if(T[coord3][coord4]=='t')
                                                       {
                                                           T[coord3][coord4]=' ';
                                                           T[coord3+1][coord4]='t';
                                                       }


                                                       if(T[coord3][coord4-2]=='t')
                                                       {
                                                           T[coord3][coord4-2]=' ';
                                                           T[coord3+1][coord4-2]=' ';
                                                       }

                                                       printf("The Troop of Player 1 is versus a Troop ! Both troop fold back fold back.");
                                                       player+=1;
                                                   }

                                               }

                                               //ALL FIGHT CONDITION AGAINST AN INFANTRY
                                               if(T[coord3-2][coord4-1]=='i' || T[coord3][coord4-1]=='i' || T[coord3-1][coord4-2]=='i' || T[coord3-1][coord4]=='i' || T[coord3-2][coord4-2]=='i' || T[coord3-2][coord4]=='i' || T[coord3][coord4]=='i' || T[coord3][coord4-2]=='i')
                                               {
                                                   if(T[coord3-2][coord4-1]!='2' && T[coord3][coord4-1]!='2' && T[coord3-1][coord4-2]!='2' && T[coord3-1][coord4]!='2' && T[coord3-2][coord4-2]!='2' && T[coord3-2][coord4]!='2' && T[coord3][coord4]!='2' && T[coord3][coord4-2]!='2')
                                                   {
                                                       if(T[coord3-1][coord4-1]=='S')
                                                       {
                                                           if(T[0][5]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][5]='S';
                                                           }
                                                           else if(T[0][0]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][0]='S';
                                                           }

                                                           else if(T[0][6]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][6]='S';
                                                           }

                                                           else if(T[0][4]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][4]='S';
                                                           }
                                                           printf("The Scout of Player 1 is versus an Infantry ! Your Scout fold back.");
                                                           player+=1;
                                                       }
                                                   }


                                                   if(T[coord3-1][coord4-1]=='I')
                                                   {
                                                       if(random>50)
                                                       {
                                                           if(T[0][1]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][1]='I';
                                                           }
                                                           else if(T[8][3]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][3]='I';
                                                           }
                                                           else if(T[0][7]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][7]='I';
                                                           }
                                                           else if(T[0][9]==' ')
                                                           {
                                                               T[coord3-1][coord4-1]=' ';
                                                               T[0][9]='I';
                                                           }
                                                           printf("The infantry of player 1 is versus an other infantry, your infantry fold back.");
                                                           player+=1;
                                                       }
                                                       else
                                                       {
                                                           if(T[8][1]==' ')
                                                           {
                                                               T[8][1]='i';
                                                           }
                                                           else if(T[8][3]==' ')
                                                           {
                                                               T[8][3]='i';
                                                           }
                                                           else if(T[8][7]==' ')
                                                           {
                                                               T[8][7]='i';
                                                           }
                                                           else if(T[8][9]==' ')
                                                           {
                                                               T[8][9]='i';
                                                           }

                                                           if(T[coord3-2][coord4-1]=='i')
                                                               T[coord3-2][coord4-1]=' ';

                                                           if(T[coord3][coord4-1]=='i')
                                                               T[coord3][coord4-1]=' ';

                                                           if(T[coord3-1][coord4-2]=='i')
                                                               T[coord3-1][coord4-2]=' ';

                                                           if(T[coord3-1][coord4]=='i')
                                                               T[coord3-1][coord4]=' ';

                                                           if(T[coord3-2][coord4-2]=='i')
                                                               T[coord3-2][coord4-2]=' ';

                                                           if(T[coord3-2][coord4]=='i')
                                                               T[coord3-2][coord4]=' ';

                                                           if(T[coord3][coord4]=='i')
                                                               T[coord3][coord4]=' ';

                                                           if(T[coord3][coord4-2]=='i')
                                                               T[coord3][coord4-2]=' ';

                                                           printf("The infantry of player 1 is versus an other infantry, but they hold on and the other fold back!.");
                                                       }
                                                   }
                                               }
                                           }
                                       }
                                       else
                                       {
                                           printf("You have to move your soldier 1 emplacement next to where it's" );
                                           PM+=1;
                                       }


                                       }
                                   else
                                   {
                                       printf("Those coordinates are outside the map! Please enter valid coordintates.\n");
                                       PM+=1;
                                   }

                                   }

                        else
                        {
                            printf("Those coordinates are outside the map! Please enter valid coordintates.\n");
                            PM+=1;
                        }
                               //BELOW THIS IS HOW THE PM IS MANAGED ACCORDING TO THE FIELD
                               coord1=coord3;
                               coord2=coord4;
                               if(F[coord1-1][coord2-1]!='F' && F[coord1-1][coord2-1]!='R')
                               {
                                   PM-=1;
                                   printf("You have got %d PM !",PM);
                               }

                               else
                               {
                                   if(F[coord1-1][coord2-1]=='R' && T[coord1-1][coord2-1]=='S')
                                   {

                                       if(PM==5)
                                       {
                                           printf("You have got %d PM !",PM);
                                           PM-=5;
                                       }
                                       else
                                       {
                                           printf("Your soldier is stuck in the river...");
                                           PM=0;
                                       }
                                   }

                                   if(F[coord1-1][coord2-1]=='R' && T[coord1-1][coord2-1]=='T')
                                   {
                                       if(PM==2)
                                       {
                                           printf("You have got %d PM !",PM);
                                           PM-=2;
                                       }
                                       else
                                       {
                                           printf("Your soldier is stuck in the river...");
                                           PM=0;
                                       }
                                   }

                                   if(F[coord1-1][coord2-1]=='R' && T[coord1-1][coord2-1]=='I')
                                   {

                                       if(PM==3)
                                       {
                                           printf("You have got %d PM !",PM);
                                           PM-=3;
                                       }
                                       else
                                       {
                                           printf("Your soldier is stuck in the river...");
                                           PM=0;
                                       }
                                   }

                                   if(F[coord1-1][coord2-1]=='F' && PM>=2)
                                   {
                                       printf("You have got %d PM !",PM);
                                       PM-=1;
                                   }

                                   if(F[coord1-1][coord2-1]=='F' && PM<2)
                                   {
                                       printf("Your soldier is stuck in the forest...");
                                       PM=0;

                                   }
                               }

                        //CONTINUE TO PRINT THE PLAYGROUND IF GAME IS ON
                        if(game==1)
                        {
                            printf("\n     1  2  3  4  5  6  7  8  9  10");
                            printf("\n    -------------------------------\n");
                            for(i=0;i<9;i++)
                            {
                                printf("%d|   ",i+1);
                                for(j=0;j<10;j++)
                                    {
                                        if(T[i][j]==' ')
                                            T[i][j]=F[i][j];
                                        printf("%c  ",T[i][j]);
                                    }
                                    printf("\n\n");
                            }
                            Ecriresauvegarde(T);
                        }
                        else
                            {
                                player=0;
                                printf(" This was a good game !\n");
                            }
                        //WHEN THE PLAYER 1 HAS NO MORE PM, THE PLAYER 2 HAS TO PLAY
                        if(PM==0)
                               {
                                   printf("You haven't enough PM to move, the Player 2 has to play.\n");
                                   player+=1;
                               }
                               else
                               {
                                   //AT THE END OF EACH MOVEMENT, YOU HAVE THE CHOICE IF YOU WANT TO PASS YOUR TURN OR CONTINUE
                                   printf("If you want to skip your turn, type 'pass', if don't, then just type other things: \n");
                                   scanf("%s",&pass1);
                                   strcpy(str2,pass1);
                                   strcpy(pass2, "pass");
                                   ret2 = strcmp(str2, pass2);
                                   if(ret2==0 && PM!=0)
                                   {
                                       player+=1;
                                       PM=0;
                                   }
                               }




                    }

                }
            }
        }
        else
            printf("Those coordinates are outside the map! Please enter valid coordintates.\n");
    }
    else
        printf("Those coordinates are outside the map! Please enter valid coordintates.\n");


        }
        //SAME AS PLAYER 1
        if(player%2==1)
        {
            printf("--------------------PLAYER 2-------------------------\n");
            printf("First, enter the coordinates of your soldier to move him (line first, then column), ex: 1,4 \n");
            scanf("%d,%d",&coord1,&coord2);
            if(coord1>0 && coord1<10)
            {
                if(coord2>0 && coord2<11)
                {
                    if(T[coord1-1][coord2-1]=='S' || T[coord1-1][coord2-1]=='T' || T[coord1-1][coord2-1]=='I' || T[coord1-1][coord2-1]=='1')
                        printf("You cannot move the other team !");
                    else
                    {
                        if(T[coord1-1][coord2-1]=='F' || T[coord1-1][coord2-1]=='R' || T[coord1-1][coord2-1]==' ' || T[coord1-1][coord2-1]=='1' || T[coord1-1][coord2-1]=='2' )
                            printf("\nYou cannot modify the map dude ! Please select a soldier.\n");
                        else
                        {
                            if(F[coord1-1][coord2-1]!='F' || F[coord1-1][coord2-1]!='R')
                            {
                                if(T[coord1-1][coord2-1]=='d')
                                {
                                    PM=5;
                                    printf("You selected THE FLAG, you've got 5PM.\n");
                                }
                                if(T[coord1-1][coord2-1]=='s')
                                {
                                    PM=5;
                                    printf("You selected a Scout, you've got 5PM. \n");
                                }


                                if(T[coord1-1][coord2-1]=='i')
                                {
                                    PM=3;
                                    printf("You selected an Infatry, you've got 3PM.\n");
                                }

                                if(T[coord1-1][coord2-1]=='t')
                                {
                                    PM=2;
                                    printf("You selected an Troup, you've got 2PM.\n");
                                }

                            }

                            while(PM>0)
                            {
                                if(F[coord1-1][coord2-1]=='F')
                                {
                                    if(T[coord1-1][coord2-1]=='d')
                                    {
                                        PM=2;
                                        printf("You selected THE FLAG but you're stuck in the forest, To get out of it, It will cost 2 PM instead of one !.\n");
                                    }
                                    if(T[coord1-1][coord2-1]=='s')
                                    {
                                        PM=2;
                                        printf("You selected a Scout but you're stuck in the forest, To get out of it, It will cost 2 PM instead of one !\n");
                                    }

                                    if(T[coord1-1][coord2-1]=='i')
                                    {
                                        PM=1;
                                        printf("You selected an Infatry but you're stuck in the forest, To get out of it, It will cost 2 PM instead of one !");
                                    }

                                    if(T[coord1-1][coord2-1]=='t')
                                    {
                                        PM=1;
                                        printf("You selected a Troup but you're stuck in the forest, To get out of it, It will cost 2 PM instead of one !\n");
                                    }

                                }

                                if(F[coord1-1][coord2-1]=='R')
                                {
                                    if(T[coord1-1][coord2-1]=='d')
                                    {
                                        printf("You selected THE FLAG but you're stuck in the river, You can move do only one movement to get out of it !.\n");
                                    }
                                    if(T[coord1-1][coord2-1]=='s')
                                    {
                                        printf("You selected a Scout but you're stuck in the river, You can move do only one movement to get out of it !\n");
                                    }

                                    if(T[coord1-1][coord2-1]=='i')
                                    {
                                        printf("You selected an Infatry but you're stuck in the river, You can do only one movement to get out of it !");
                                    }

                                    if(T[coord1-1][coord2-1]=='t')
                                    {
                                        printf("You selected a Troup but you're stuck in the river, You can do only one movement to get out of it !\n");
                                    }

                                }
                                printf("Alright ! Then enter the destination point of your soldier. \n");
                                scanf("%d,%d",&coord3,&coord4);
                                if(coord3>0 && coord3<10)
                                {
                                    if(coord4>0 && coord4<11)
                                    {
                                        if(((coord3-coord1==1)||(coord1-coord3==1)||(coord3-coord1==0)||(coord1-coord3==0))&&((coord2-coord4==1)||(coord4-coord2==1)||(coord2-coord4==0)||(coord4-coord2==0)))
                                        {
                                            if(T[coord3-1][coord4-1]=='S' || T[coord3-1][coord4-1]=='T' || T[coord3-1][coord4-1]=='I' || T[coord3-1][coord4-1]=='1')
                                            {
                                                PM+=1;
                                                printf("\nerror, this place is taken by the other team !\n");
                                            }
                                            if(T[coord3-1][coord4-1]=='1' || T[coord3-1][coord4-1]=='2')
                                            {
                                                PM+=1;
                                                printf("\nerror, this place is taken by the flag !\n");
                                            }

                                            if(T[coord3-1][coord4-1]=='s')
                                            {
                                                PM+=1;
                                                printf("\ncareful ! There are your Scouts here\n");
                                            }


                                            if(T[coord3-1][coord4-1]=='t')
                                            {
                                                PM+=1;
                                                printf("\ncareful ! There are your Troup here\n");
                                            }

                                            if(T[coord3-1][coord4-1]=='i')
                                            {
                                                PM+=1;
                                                printf("\ncareful ! There are your Infantry here\n");
                                            }


                                            if(T[coord3-1][coord4-1]==' ' || T[coord3-1][coord4-1]=='R' || T[coord3-1][coord4-1]=='F')
                                            {

                                                T[coord3-1][coord4-1]=T[coord1-1][coord2-1];
                                                T[coord1-1][coord2-1]=' ';

                                                if(F[coord1-1][coord2-1]=='F')
                                                {

                                                    if(T[coord1-1][coord2-1]=='s')
                                                    {
                                                        PM=2;

                                                    }
                                                    if(T[coord1-1][coord2-1]=='i')
                                                    {
                                                        PM=1;

                                                    }

                                                    if(T[coord1-1][coord2-1]=='t')
                                                    {
                                                        PM=1;

                                                    }

                                                    printf("Oh ! You're stuck in the forest, to move your soldier it will cost 2PM instead of 1PM!");

                                                }

                                                if(F[coord1-1][coord2-1]=='R')
                                                {
                                                    if(T[coord1-1][coord2-1]=='s')
                                                    {
                                                        PM=1;

                                                    }
                                                    if(T[coord1-1][coord2-1]=='i')
                                                    {
                                                        PM=1;

                                                    }

                                                    if(T[coord1-1][coord2-1]=='t')
                                                    {
                                                        PM=1;

                                                    }

                                                    printf("Oh ! You're stuck in the River, to move your soldier it will cost aller your PM instead of 1PM!");

                                                }



                                                if(T[coord3-2][coord4-1]=='S' || T[coord3][coord4-1]=='S' || T[coord3-1][coord4-2]=='S' || T[coord3-1][coord4]=='S' || T[coord3-2][coord4-2]=='S' || T[coord3-2][coord4]=='S' || T[coord3][coord4]=='S' || T[coord3][coord4-2]=='S')
                                                {
                                                    if(T[coord3-2][coord4-1]!='2' && T[coord3][coord4-1]!='1' && T[coord3-1][coord4-2]!='1' && T[coord3-1][coord4]!='1' && T[coord3-2][coord4-2]!='1' && T[coord3-2][coord4]!='1' && T[coord3][coord4]!='1' && T[coord3][coord4-2]!='1')
                                                    {
                                                        if(T[coord3-1][coord4-1]=='i' || T[coord3-1][coord4-1]=='t' )
                                                        {
                                                            if(T[0][5]==' ')
                                                            {
                                                                T[0][5]='S';
                                                            }
                                                            else if(T[0][0]==' ')
                                                            {
                                                                T[0][0]='S';
                                                            }

                                                            else if(T[0][6]==' ')
                                                            {
                                                                T[0][6]='S';
                                                            }

                                                            else if(T[0][4]==' ')
                                                            {
                                                                T[0][4]='S';
                                                            }

                                                            if(T[coord3-2][coord4-1]=='S')
                                                                T[coord3-2][coord4-1]=' ';

                                                            if(T[coord3][coord4-1]=='S')
                                                                T[coord3][coord4-1]=' ';

                                                            if(T[coord3-1][coord4-2]=='S')
                                                                T[coord3-1][coord4-2]=' ';

                                                            if(T[coord3-1][coord4]=='S')
                                                                T[coord3-1][coord4]=' ';

                                                            if(T[coord3-2][coord4-2]=='S')
                                                                T[coord3-2][coord4-2]=' ';

                                                            if(T[coord3-2][coord4]=='S')
                                                                T[coord3-2][coord4]=' ';

                                                            if(T[coord3][coord4]=='S')
                                                                T[coord3][coord4]=' ';

                                                            if(T[coord3][coord4-2]=='S')
                                                                T[coord3][coord4-2]=' ';

                                                            printf("The Scout of Player 1 is versus your armee ! His Scout fold back.");
                                                        }
                                                    }

                                                }

                                                if(T[coord3-2][coord4-1]=='2' || T[coord3][coord4-1]=='2' || T[coord3-1][coord4-2]=='2' || T[coord3-1][coord4]=='2' || T[coord3-2][coord4-2]=='2' || T[coord3-2][coord4]=='2' || T[coord3][coord4]=='2' || T[coord3][coord4-2]=='2')
                                                {
                                                    if(T[coord3-1][coord4-1]=='d')
                                                    {
                                                        printf("Congratulation Player 2, you won !");
                                                        game=0;
                                                        break;
                                                    }
                                                }


                                                if(T[coord3-2][coord4-1]=='1' || T[coord3][coord4-1]=='1' || T[coord3-1][coord4-2]=='1' || T[coord3-1][coord4]=='1' || T[coord3-2][coord4-2]=='1' || T[coord3-2][coord4]=='1' || T[coord3][coord4]=='1' || T[coord3][coord4-2]=='1')
                                                {

                                                    if(T[coord1-1][coord2-1]=='s')
                                                    {
                                                        printf("The flag is taken by the player 2 !");
                                                        T[coord3-1][coord4-1]='d';

                                                        if(T[coord3-2][coord4-1]=='1')
                                                            T[coord3-2][coord4-1]=' ';

                                                        if(T[coord3][coord4-1]=='1')
                                                            T[coord3][coord4-1]=' ';

                                                        if(T[coord3-1][coord4-2]=='1')
                                                            T[coord3-1][coord4-2]=' ';

                                                        if(T[coord3-1][coord4]=='1')
                                                            T[coord3-1][coord4]=' ';

                                                        if(T[coord3-2][coord4-2]=='1')
                                                            T[coord3-2][coord4-2]=' ';

                                                        if(T[coord3-2][coord4]=='1')
                                                            T[coord3-2][coord4]=' ';

                                                        if(T[coord3][coord4]=='1')
                                                            T[coord3][coord4]=' ';

                                                        if(T[coord3][coord4-2]=='1')
                                                            T[coord3][coord4-2]=' ';
                                                    }
                                                }

                                                if(T[coord3-2][coord4-1]=='T' || T[coord3][coord4-1]=='T' || T[coord3-1][coord4-2]=='T' || T[coord3-1][coord4]=='T' || T[coord3-2][coord4-2]=='T' || T[coord3-2][coord4]=='T' || T[coord3][coord4]=='T' || T[coord3][coord4-2]=='T')
                                                {
                                                    if(T[coord3-2][coord4-1]!='1' && T[coord3][coord4-1]!='1' && T[coord3-1][coord4-2]!='1' && T[coord3-1][coord4]!='1' && T[coord3-2][coord4-2]!='1' && T[coord3-2][coord4]!='1' && T[coord3][coord4]!='1' && T[coord3][coord4-2]!='1')
                                                    {
                                                        if(T[coord3-1][coord4-1]=='s')
                                                        {
                                                            if(T[8][5]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][5]='s';
                                                            }
                                                            else if(T[8][0]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][0]='s';
                                                            }

                                                            else if(T[8][6]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][6]='s';
                                                            }

                                                            else if(T[8][4]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][4]='s';
                                                            }

                                                            printf("The scout of player 2 is versus a Troup ! Your Scout fold back.");
                                                        }
                                                    }


                                                    if(T[coord3-1][coord4-1]=='i')
                                                    {
                                                        if(T[8][1]==' ')
                                                        {
                                                            T[coord3-1][coord4-1]=' ';
                                                            T[8][1]='i';
                                                        }
                                                        else if(T[8][3]==' ')
                                                        {
                                                            T[coord3-1][coord4-1]=' ';
                                                            T[8][3]='i';
                                                        }
                                                        else if(T[8][7]==' ')
                                                        {
                                                            T[coord3-1][coord4-1]=' ';
                                                            T[8][7]='i';
                                                        }
                                                        else if(T[8][9]==' ')
                                                        {
                                                            T[coord3-1][coord4-1]=' ';
                                                            T[8][9]='i';
                                                        }
                                                        printf("The Infantry of player 2 is versus a Troup ! Your Infantry fold back.");
                                                    }

                                                    if(T[coord3-1][coord4-1]=='t')
                                                    {
                                                        T[coord3-1][coord4-1]=' ';
                                                        T[coord3][coord4-1]='t';

                                                        if(T[coord3-2][coord4-1]=='T')
                                                        {
                                                            T[coord3-2][coord4-1]=' ';
                                                            T[coord3-3][coord4-1]='T';
                                                        }

                                                        if(T[coord3][coord4-1]=='T')
                                                        {
                                                            T[coord3][coord4-1]=' ';
                                                            T[coord3-1][coord4-1]='T';
                                                        }



                                                        if(T[coord3-1][coord4-2]=='T')
                                                        {
                                                            T[coord3-1][coord4-2]=' ';
                                                            T[coord3-2][coord4-2]='T';
                                                        }


                                                        if(T[coord3-1][coord4]=='T')
                                                        {
                                                            T[coord3-1][coord4]=' ';
                                                            T[coord3-2][coord4]='T';
                                                        }


                                                        if(T[coord3-2][coord4-2]=='T')
                                                        {
                                                            T[coord3-2][coord4-2]=' ';
                                                            T[coord3-3][coord4-2]='T';
                                                        }


                                                        if(T[coord3-2][coord4]=='T')
                                                        {
                                                            T[coord3-2][coord4]=' ';
                                                            T[coord3-3][coord4]='T';
                                                        }


                                                        if(T[coord3][coord4]=='T')
                                                        {
                                                            T[coord3][coord4]=' ';
                                                            T[coord3-1][coord4]='T';
                                                        }


                                                        if(T[coord3][coord4-2]=='T')
                                                        {
                                                            T[coord3][coord4-2]=' ';
                                                            T[coord3-1][coord4-2]=' ';
                                                        }

                                                        printf("The Troop of Player 2 is versus a Troop ! Both troop fold back fold back.");
                                                    }

                                                }

                                                if(T[coord3-2][coord4-1]=='D' || T[coord3][coord4-1]=='D' || T[coord3-1][coord4-2]=='D' || T[coord3-1][coord4]=='D' || T[coord3-2][coord4-2]=='D' || T[coord3-2][coord4]=='D' || T[coord3][coord4]=='D' || T[coord3][coord4-2]=='D')
                                                {
                                                    if(T[coord3-2][coord4-1]!='1' && T[coord3][coord4-1]!='1' && T[coord3-1][coord4-2]!='1' && T[coord3-1][coord4]!='1' && T[coord3-2][coord4-2]!='1' && T[coord3-2][coord4]!='1' && T[coord3][coord4]!='1' && T[coord3][coord4-2]!='1')
                                                    {
                                                        if(T[coord3-1][coord4-1]=='s')
                                                        {
                                                            T[8][Drapeau2]='2';

                                                            if(T[coord3-2][coord4-1]=='D')
                                                                T[coord3-2][coord4-1]=' ';

                                                            if(T[coord3][coord4-1]=='D')
                                                                T[coord3][coord4-1]=' ';

                                                            if(T[coord3-1][coord4-2]=='D')
                                                                T[coord3-1][coord4-2]=' ';

                                                            if(T[coord3-1][coord4]=='D')
                                                                T[coord3-1][coord4]=' ';

                                                            if(T[coord3-2][coord4-2]=='D')
                                                                T[coord3-2][coord4-2]=' ';

                                                            if(T[coord3-2][coord4]=='D')
                                                                T[coord3-2][coord4]=' ';

                                                            if(T[coord3][coord4]=='D')
                                                                T[coord3][coord4]=' ';

                                                            if(T[coord3][coord4-2]=='D')
                                                                T[coord3][coord4-2]=' ';

                                                            printf("The Taken flag is versus a scout of Player 2... The flag return to the team 2 !.");
                                                        }
                                                    }

                                                }


                                                if(T[coord3-2][coord4-1]=='I' || T[coord3][coord4-1]=='I' || T[coord3-1][coord4-2]=='I' || T[coord3-1][coord4]=='I' || T[coord3-2][coord4-2]=='I' || T[coord3-2][coord4]=='I' || T[coord3][coord4]=='I' || T[coord3][coord4-2]=='I')
                                                {
                                                    if(T[coord3-2][coord4-1]!='1' && T[coord3][coord4-1]!='1' && T[coord3-1][coord4-2]!='1' && T[coord3-1][coord4]!='1' && T[coord3-2][coord4-2]!='1' && T[coord3-2][coord4]!='1' && T[coord3][coord4]!='1' && T[coord3][coord4-2]!='1')
                                                    {
                                                        if(T[coord3-1][coord4-1]=='s')
                                                        {
                                                            if(T[8][5]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][5]='s';
                                                            }
                                                            else if(T[8][0]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][0]='s';
                                                            }

                                                            else if(T[8][6]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][6]='s';
                                                            }

                                                            else if(T[8][4]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][4]='s';
                                                            }
                                                            printf("The scout of player 2 is versus a Infantry ! Your scout fold back.");
                                                        }
                                                    }


                                                    if(T[coord3-1][coord4-1]=='i')
                                                    {
                                                        if(random>50)
                                                        {
                                                            if(T[8][1]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][1]='i';
                                                            }
                                                            else if(T[8][3]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][3]='i';
                                                            }
                                                            else if(T[8][7]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][7]='i';
                                                            }
                                                            else if(T[0][9]==' ')
                                                            {
                                                                T[coord3-1][coord4-1]=' ';
                                                                T[8][9]='i';
                                                            }
                                                            printf("The infantry of player 2 is versus an other infantry, your infantry fold back.");
                                                        }
                                                        else
                                                        {
                                                            if(T[0][1]==' ')
                                                            {
                                                                T[0][1]='I';
                                                            }
                                                            else if(T[0][3]==' ')
                                                            {
                                                                T[0][3]='I';
                                                            }
                                                            else if(T[0][7]==' ')
                                                            {
                                                                T[0][7]='I';
                                                            }
                                                            else if(T[0][9]==' ')
                                                            {
                                                                T[0][9]='I';
                                                            }

                                                            if(T[coord3-2][coord4-1]=='I')
                                                                T[coord3-2][coord4-1]=' ';

                                                            if(T[coord3][coord4-1]=='I')
                                                                T[coord3][coord4-1]=' ';

                                                            if(T[coord3-1][coord4-2]=='I')
                                                                T[coord3-1][coord4-2]=' ';

                                                            if(T[coord3-1][coord4]=='I')
                                                                T[coord3-1][coord4]=' ';

                                                            if(T[coord3-2][coord4-2]=='I')
                                                                T[coord3-2][coord4-2]=' ';

                                                            if(T[coord3-2][coord4]=='I')
                                                                T[coord3-2][coord4]=' ';

                                                            if(T[coord3][coord4]=='I')
                                                                T[coord3][coord4]=' ';

                                                            if(T[coord3][coord4-2]=='I')
                                                                T[coord3][coord4-2]=' ';

                                                            printf("The infantry of player 2 is versus an other infantry, but they hold on and the other fold back!.");
                                                        }
                                                    }
                                                }
                                            }

                                        }

                                        else
                                        {
                                            printf("You have to move your soldier 1 emplacement next to where it's" );
                                            PM+=1;
                                        }
                                    }
                                    else
                                    {
                                        printf("Those coordinates are outside the map! Please enter valid coordintates.\n");
                                        PM+=1;
                                    }
                                }
                                else
                                {
                                    printf("Those coordinates are outside the map! Please enter valid coordintates.\n");
                                    PM+=1;
                                }

                                coord1=coord3;
                                coord2=coord4;
                                if(F[coord1-1][coord2-1]!='F' && F[coord1-1][coord2-1]!='R')
                                {
                                    PM-=1;
                                    printf("You have got %d PM !",PM);
                                }

                                else
                                {
                                    if(F[coord1-1][coord2-1]=='R' && T[coord1-1][coord2-1]=='s')
                                    {

                                        if(PM==5)
                                        {
                                            printf("You have got %d PM !",PM);
                                            PM-=5;
                                        }
                                        else
                                        {
                                            printf("Your soldier is stuck in the river...");
                                            PM=0;
                                        }
                                    }

                                    if(F[coord1-1][coord2-1]=='R' && T[coord1-1][coord2-1]=='t')
                                    {
                                        if(PM==2)
                                        {
                                            printf("You have got %d PM !",PM);
                                            PM-=2;
                                        }
                                        else
                                        {
                                            printf("Your soldier is stuck in the river...");
                                            PM=0;
                                        }
                                    }

                                    if(F[coord1-1][coord2-1]=='R' && T[coord1-1][coord2-1]=='i')
                                    {

                                        if(PM==3)
                                        {
                                            printf("You have got %d PM !",PM);
                                            PM-=3;
                                        }
                                        else
                                        {
                                            printf("Your soldier is stuck in the river...");
                                            PM=0;
                                        }
                                    }

                                    if(F[coord1-1][coord2-1]=='F' && PM>=2)
                                    {
                                        printf("You have got %d PM !",PM);
                                        PM-=1;
                                    }

                                    if(F[coord1-1][coord2-1]=='F' && PM<2)
                                    {
                                        printf("Your soldier is stuck in the forest...");
                                        PM=0;

                                    }
                                }

                                if(game==1)
                                {
                                    printf("\n     1  2  3  4  5  6  7  8  9  10");
                                    printf("\n    -------------------------------\n");
                                    for(i=0;i<9;i++)
                                    {
                                        printf("%d|   ",i+1);
                                        for(j=0;j<10;j++)
                                        {
                                            if(T[i][j]==' ')
                                                T[i][j]=F[i][j];
                                            printf("%c  ",T[i][j]);
                                        }
                                        printf("\n\n");
                                    }
                                    Ecriresauvegarde(T);
                                }
                                else
                                {
                                    player=0;
                                    printf(" This was a good game !\n");
                                }

                                if(PM==0)
                                {
                                    printf("You haven't enough PM to move, the Player 2 has to play.\n");
                                    player+=1;
                                }
                                else
                                {
                                    printf("If you want to skip your turn, type 'pass', if don't, then just type other things: \n");
                                    scanf("%s",&pass1);
                                    strcpy(str2,pass1);
                                    strcpy(pass2, "pass");
                                    ret2 = strcmp(str2, pass2);
                                    if(ret2==0 && PM!=0)
                                    {
                                        player+=1;
                                        PM=0;
                                    }
                                }
                            }

                        }


                    }
                }
                else
                {
                    PM+=1;
                    printf("Those coordinates are outside the map! Please enter valid coordintates.\n");
                }
            }
            else
            {
                printf("Those coordinates are outside the map! Please enter valid coordintates.\n");
                PM+=1;
            }

        }

    }
    for(i=0;i<10;i++)
        free(T[i]);
    free(T);
    return 0;
}
