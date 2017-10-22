#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#define MAX 5
#define LMAX 7
#define SIZE 50
char name[MAX][SIZE];
int i,j;
int e1,e2,e3,e4,e5,e6,e7;

void Level1()
{
       int ch,n,count=0;

       while(1)
       {
	 printf("\nSelect stage\n");
	 printf("\n1.ANIMALS\n");
	 printf("\n2.BIRDS\n");
	 printf("\n3.PLACES\n");
	 printf("\n4.EXIT\n");
	 scanf("%d",&ch);
	 switch(ch)
	 {
		case 1: {
			printf("\nSTAGE:~1~\n");
			printf("\n-*-Just find 5 Animal names-*-\n");
			printf("\nT I G E R T M J");
			printf("\nC L I D O G O K");
			printf("\nG H Y I U M N M");
			printf("\nC H E E T G K K ");
			printf("\nH N R E N D E F");
			printf("\nL I O N T G Y L");
			printf("\nV E G R A A G J");
			printf("\nF V H A I B H O\n");
			printf("\nStart yOuR GaMe\n");
			for(i=0;i<MAX;i++)
			{
				scanf("%s",name[i]);
			}
			printf("\nThe Entered String\n");
			for(i=0;i<MAX;i++){
			printf("\nThe string in lower case is->%s",name[i]);}
			for(i=0;i<MAX;i++)
			{
				for(j=0;j<=strlen(name[i]);j++)
				{
					if(name[i][j]>=65 && name[i][j]<=90)
					{
						name[i][j]=name[i][j]+32;
					}
				}
			}
				printf("\nConverted String \n");
				for(i=0;i<MAX;i++)
				{
					printf("\n%s",name[i]);
				}
				e1=0;
				e2=0;
				e3=0;
				e4=0;
				e5=0;
				count=0;
				for(i=0;i<MAX;i++)
				{
					printf("\nBefore entering into for loop\ne1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\ncount=%d\n",e1,e2,e3,e4,e5,count);
					if((strcmp(name[i],"tiger")==0) && e1==0)
					{
						e1=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}
					else if((strcmp(name[i],"cheetah")==0) && e2==0)
					{
					       e2=1;
					       count+=1;
					       printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);
					}
					else if((strcmp(name[i],"dog")==0) && e3==0)
					{
						e3=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}
					else if((strcmp(name[i],"lion")==0) && e4==0)
					{
						e4=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}
					else if((strcmp(name[i],"monkey")==0) && e5==0)
					{
						e5=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}

				}
				if(count==5)
				{
					printf("\nCONGRATS \nYou Won\n");
				}
				else
				{
					printf("\nfound only %d\n",count);
					printf("\nFailed to find %d more animal names\n",5-count);
				}
			      }
				break;

		case 2:{
			printf("\nSTAGE:~2~\n");
			printf("\n-*-Can YoU fInD aNY 5 BiRDS?-*-\n");
			printf("\nT E G M A G P I E");
			printf("\nS L A D O G O W M");
			printf("\nG H Y G U M N R G");
			printf("\nC E V U L T U R E");
			printf("\nH N R Y N E E H J");
			printf("\nS T A R L I N G J\n");
			printf("\nStart yOuR GaMe\n");
			for(i=0;i<MAX;i++)
			{
				scanf("%s",name[i]);
			}
			printf("\nThe Entered String\n");
			for(i=0;i<MAX;i++){
			printf("\nThe string in lower case is->%s",name[i]);}
			for(i=0;i<MAX;i++)
			{
				for(j=0;j<=strlen(name[i]);j++)
				{
					if(name[i][j]>=65 && name[i][j]<=90)
					{
						name[i][j]=name[i][j]+32;
					}
				}
			}
				printf("\nConverted String \n");
				for(i=0;i<MAX;i++)
				{
					printf("\n%s",name[i]);
				}
				e1=0;
				e2=0;
				e3=0;
				e4=0;
				e5=0;
				count=0;
				for(i=0;i<MAX;i++)
				{
					printf("\nBefore entering into for loop\ne1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\ncount=%d\n",e1,e2,e3,e4,e5,count);
					if((strcmp(name[i],"eagle")==0) && e1==0)
					{
						e1=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}
					else if((strcmp(name[i],"hen")==0) && e2==0)
					{
					       e2=1;
					       count+=1;
					       printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);
					}
					else if((strcmp(name[i],"vulture")==0) && e3==0)
					{
						e3=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}
					else if((strcmp(name[i],"magpie")==0) && e4==0)
					{
						e4=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}
					else if((strcmp(name[i],"starling")==0) && e5==0)
					{
						e5=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}

				}
				if(count==5)
				{
					printf("\nCONGRATS \nYou Won\n");
				}
				else
				{
					printf("\nfound only %d\n",count);
					printf("\nFailed to find %d more birds names\n",5-count);
				}
			      }
				break;


		case 3:{
			printf("\nSTAGE:~3~\n");
			printf("\n-*-Can yOu find those 5 worst places boloW:) \n");
			printf("\nA I G E M T M H J");
			printf("\nS L I D Y G Y G R");
			printf("\nG I L I S M S G R");
			printf("\nC G E E O H O N W");
			printf("\nH N O Y P D R S S");
			printf("\nV A N A E P E N G");
			printf("\nB A N G E L E R E");
			printf("\nL L A D A K H Y G");
			printf("\nB A N G A L O R E");
			printf("\nStart yOuR GaMe\n");
			for(i=0;i<MAX;i++)
			{
				scanf("%s",name[i]);
			}
			printf("\nThe Entered String\n");
			for(i=0;i<MAX;i++){
			printf("\nThe string in lower case is->%s",name[i]);}
			for(i=0;i<MAX;i++)
			{
				for(j=0;j<=strlen(name[i]);j++)
				{
					if(name[i][j]>=65 && name[i][j]<=90)
					{
						name[i][j]=name[i][j]+32;
					}
				}
			}
				printf("\nConverted String \n");
				for(i=0;i<MAX;i++)
				{
					printf("\n%s",name[i]);
				}
				e1=0;
				e2=0;
				e3=0;
				e4=0;
				e5=0;
				count=0;
				for(i=0;i<MAX;i++)
				{
					printf("\nBefore entering into for loop\ne1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\ncount=%d\n",e1,e2,e3,e4,e5,count);
					if((strcmp(name[i],"bangalore")==0) && e1==0)
					{
						e1=1;
						count+=1;
						printf("\nCount=%d\ne1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}
					else if((strcmp(name[i],"ladakh")==0) && e2==0)
					{
					       e2=1;
					       count+=1;
					       printf("\nCount=%d\ne1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);
					}
					else if((strcmp(name[i],"goa")==0) && e3==0)
					{
						e3=1;
						count+=1;
						printf("\nCount=%d\ne1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}
					else if((strcmp(name[i],"mysore")==0) && e4==0)
					{
						e4=1;
						count+=1;
						printf("\nCount=%d\ne1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}
					else if((strcmp(name[i],"alleppey")==0) && e5==0)
					{
						e5=1;
						count+=1;
						printf("\nCount=%d\ne1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\nname=%s\n",count,e1,e2,e3,e4,e5,name[i]);

					}

				}
				if(count==5)
				{
					printf("\nCONGRATS \nYou Won\n");
				}
				else
				{
					printf("\nfound only %d\n",count);
					printf("\nFailed to find %d more places names\n",5-count);
				}
			      }
				break;
		case 4:exit(0);
		default:printf("\nINVALID CHOICE\n");

	      }

       }
}
void Level2()
{
	int ch,n,count=0;
       char str[SIZE];

       while(1)
       {
	 printf("\nSelect stage\n");
	 printf("\n1.GueSS That word\n");
	 printf("\n2.Char FiLL\n");
	 printf("\n3.EXIT\n");
	 scanf("%d",&ch);
	 switch(ch)
	 {
		case 1: {
			printf("\nSTAGE:~1~\n");
			printf("\n-*-Can You Guess?-*-\n");
			printf("\nMost exciting or interesting movement in a story\n");
			scanf("%s",str);

				if(strcmpi(str,"climax")==0)
				{
					printf("\nYeah.., Right answer\n");
					count+=1;
				}
				else
				{
					printf("\nOoooo No!!!! Wrong anwer\n");
				}
				printf("\nStrong Russian alcoholic drink\n");
				scanf("%s",str);

				if(strcmpi(str,"vodka")==0)
				{
					printf("\nYeah.., Right answer\n");
					count+=1;
				}
				else
				{
					printf("\nOoooo No!!!! Wrong anwer\n");
				}
				printf("\nScientific study of animals and their behaviour\n");
				scanf("%s",str);

				if(strcmpi(str,"zoology")==0)
				{
					printf("\nYeah.., Right answer\n");
					count+=1;
				}
				else
				{
					printf("\nOoooo No!!!! Wrong anwer\n");
				}
				printf("\nPerson who is new and inexperienced in a job\n");
				scanf("%s",str);

				if(strcmpi(str,"novice")==0)
				{
					printf("\nYeah.., Right answer\n");
					count+=1;
				}
				else
				{
					printf("\nOoooo No!!!! Wrong anwer\n");
				}

				printf("\nMan who is polite and behaves well\n");
				scanf("%s",str);

				if(strcmpi(str,"gentleman")==0)
				{
					printf("\nYeah.., Right answer\n");
					count+=1;
				}
				else
				{
					printf("\nOoooo No!!!! Wrong anwer\n");
				}



				if(count==5)
				{
					printf("\nCongrats \nYou won\n");
				}
				else
				{
					printf("\nfound only %d\n",count);
					printf("\nFailed to answer %d more questions\n",5-count);
				}
			      }
				break;
				case 2:{
			printf("\nJust Guess the words\n");
			printf("\nD B F R _ N _ I E _ J Y");
			printf("\nQ _ K L M N O P A B K _");
			printf("\n_ R N H A _ _ E Y C S _");
			printf("\nA Y A _ C D E F C _ M C ");
			printf("\nR _ I J _ L M N _ E N A");
			printf("\nR _ Q R S O U Z E F O _");
			printf("\n_ N Y Z A B N D F G P _");
			printf("\n_ F G H I J K G G H Q A");
			printf("\nS B C D F E G H I J K N");
			printf("\nL F G H I J K G G H Q T\n");
			printf("\nStart yOuR GaMe\n");
			for(i=0;i<LMAX;i++)
			{
				scanf("%s",name[i]);
			}
			printf("\nThe Entered String\n");
			for(i=0;i<LMAX;i++){
			printf("\nThe string in lower case is->%s",name[i]);}
			for(i=0;i<LMAX;i++)
			{
				for(j=0;j<=strlen(name[i]);j++)
				{
					if(name[i][j]>=65 && name[i][j]<=90)
					{
						name[i][j]=name[i][j]+32;
					}
				}
			}
				printf("\nConverted String \n");
				for(i=0;i<LMAX;i++)
				{
					printf("\n%s",name[i]);
				}
				e1=0;
				e2=0;
				e3=0;
				e4=0;
				e5=0;
				e6=0;
				e7=0;
				count=0;
				for(i=0;i<LMAX;i++)
				{
					printf("\nBefore entering into for loop\ne1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\ne6=%d\ne7=%d\ncount=%d\n",e1,e2,e3,e4,e5,e6,e7,count);
					if((strcmp(name[i],"dingdong")==0) && e1==0)
					{
						e1=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\ne6=%d\ne7=%d\nname=%s\n",count,e1,e2,e3,e4,e5,e6,e7,name[i]);

					}
					else if((strcmp(name[i],"frankie")==0) && e2==0)
					{
					       e2=1;
					       count+=1;
					       printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\ne6=%d\ne7=%d\nname=%s\n",count,e1,e2,e3,e4,e5,e6,e7,name[i]);
					}
					else if((strcmp(name[i],"yarn")==0) && e3==0)
					{
						e3=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\ne6=%d\ne7=%d\nname=%s\n",count,e1,e2,e3,e4,e5,e6,e7,name[i]);

					}
					else if((strcmp(name[i],"zeus")==0) && e4==0)
					{
						e4=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\ne6=%d\ne7=%d\nname=%s\n",count,e1,e2,e3,e4,e5,e6,e7,name[i]);

					}
					else if((strcmp(name[i],"quarrels")==0) && e5==0)
					{
						e5=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\ne6=%d\ne7=%d\nname=%s\n",count,e1,e2,e3,e4,e5,e6,e7,name[i]);
					}
					else if((strcmp(name[i],"harley")==0) && e5==0)
					{
						e6=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\ne6=%d\ne7=%d\nname=%s\n",count,e1,e2,e3,e4,e5,e6,e7,name[i]);
					}
					else if((strcmp(name[i],"yuccaplant")==0) && e5==0)
					{
						e7=1;
						count+=1;
						printf("\nCount=%d\nte1=%d\ne2=%d\ne3=%d\ne4=%d\ne5=%d\ne6=%d\ne7=%d\nname=%s\n",count,e1,e2,e3,e4,e5,e6,e7,name[i]);
					}

				}
				if(count==7)
				{
					printf("\nCONGRATS \nYou Won\n");
				}
				else
				{
					printf("\nfound only %d\n",count);
					printf("\nFailed to find %d more\n",7-count);
				}
			      }
				break;

				case 3:exit(0);
				default:printf("\nInvalid Choice\n");
			}
	}


}

void main()
{
	char str[10];
	int Lev;
	clrscr();
	printf("\nwORd SEARCH GaME\n");
	printf("\nEnter your Name\n");
	scanf("%s",str);

	printf("\nHi %s:)\n",str);
	printf("\nSeLeCt LeVeL\n");
	printf("\n1.Level-1\n2.Level-2\n3.Exit\n");
	scanf("%d",&Lev);
	switch(Lev)
	{
		case 1:Level1();
			break;
		case 2:Level2();
			break;
		case 3:exit(0);
		default:printf("\nInvalid Choice\n");
	}
	getch();


}