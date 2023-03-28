#include<stdio.h>
#include<stdlib.h>
void pos(char (*)[],int *,int (*)[]);
void input(int);
void scan(int,int);
char a[3][3],c1,c2,s[30],s1[30];
int a1[3][3];
int b[10],c=0;
	void main()
{
printf("player1 pls enter your name:");
scanf("%s",s);
printf("%s enter your character:",s);
scanf(" %c",&c1);
printf("player2 pls enter your name:");
scanf("%s",s1);
printf("%s enter your character:",s1);
scanf(" %c",&c2);
while(1)
{
if(c1!=c2)//avoiding both players taking same character to play
break;
else
{
printf("%s pls enter character other than %c:",s1,c1);
scanf(" %c",&c2);
}
}
printf("\n\n");
	while(1)
	{

		int k,l,m,q,p1,p2,v,w,w1,j1,j2,j3,j4,j5,j6,j7,j8,z;
		printf("Available positions are:\n");
		pos(a,b,a1);
		if(c==0)
			printf("%s it's your turn pls enter position\n",s);
		else if(c==1)
			printf("%s  it's your turn pls enter position\n",s1);
l1:scanf("%d",&q);
   while(1){
	   if(q>=1 && q<=9)
	   {	   v=0,z=0;
		   while(b[v]!=99)
		   {		
			  if(q==b[v++])
			   {
			   z=1;
			   }
			
			
		   }
		   if(b[0]==99)
		    break;
		   else
		   {	if(z==1){
			   input(q);
			   break;
			}
			else{
			printf("pls enter the available location:");
			goto l1;
			}
		   }
	   }
	   else
	   {
		   printf("pls enter correct position:");
		   goto l1;
	   }
   }
   //logic starts

   w=w1=0;
   j1=(a[w][w1]+a[w][w1+1]+a[w][w1+2]);
   j2=(a[w+1][w1]+a[w+1][w1+1]+a[w+1][w1+2]);
   j3=(a[w+2][w1]+a[w+2][w1+1]+a[w+2][w1+2]);
   j4=(a[w][w1]+a[w+1][w1]+a[w+2][w1]);
   j5=(a[w][w1+1]+a[w+1][w1+1]+a[w+2][w1+1]);
   j6=(a[w][w1+2]+a[w+1][w1+2]+a[w+2][w1+2]);
   j7=(a[w][w1]+a[w+1][w1+1]+a[w+2][w1+2]);
   j8=(a[w+2][w1]+a[w+1][w1+1]+a[w][w1+2]);
   if(j1==c1*3)
   {
	   printf("%s you won\n",s);
	   break;
   }
   else if(j1==c2*3)
   {
	   printf("%s you won\n",s1);
	   break;
   }
   else if(j2==c1*3){
	   printf("%s you won\n",s);
	   break;
   }	
   else if(j2==c2*3)
   {
	   printf("%s you won\n",s1);
	   break;
   }
   else if(j3==c1*3)
   {
	   printf("%s you won\n",s);
	   break;
   }
   else  if(j3==c2*3)
   {
	   printf("%s you won\n",s1);
	   break;
   }
   else if(j4==c1*3)
   {
	   printf("%s you won\n",s);
	   break;
   }
   else if(j4==c2*3)
   {
	   printf("%s you won\n",s1);
	   break;
   }
   else if(j5==c1*3)
   {
	   printf("%s you won\n",s);
	   break;
   }
   else if(j5==c2*3)
   {
	   printf("%s you won\n",s1);
	   break;
   }
   else if(j6==c1*3)
   {
	   printf("%s you won\n",s);
	   break;
   }
   else if(j6==c2*3)
   {
	   printf("%s you won\n",s1);
	   break;
   }
   else if(j7==c1*3)
   {
	   printf("%s you won\n",s);
	   break;
   }
   else if(j7==c2*3)
   {
	   printf("%s you won\n",s1);
	   break;
   }
   else if(j8==c1*3)
   {
	   printf("%s you won\n",s);
	   break;
   }
   else if(j8==c2*3)
   {
	   printf("%s you won\n",s1);
	   break;
   }
   else if(b[1]==99)
   {
	   printf("the game is draw\n");

	   break;
   }
}
}
   void input(int q)
   {int i,j;
	   switch(q)
	   {
		   case 1:i=0,j=0;
			  scan(i,j);
			  return;
		   case 2:i=0,j=1;
			  scan(i,j);
			  return;
		   case 3:i=0,j=2;
			  scan(i,j);
			  return;
		   case 4:i=1,j=0;
			  scan(i,j);
			  return;
		   case 5:i=1,j=1;
			  scan(i,j);
			  return;
		   case 6:i=1,j=2;
			  scan(i,j);
			  return;
		   case 7:i=2,j=0;
			  scan(i,j);
			  return;
		   case 8:i=2,j=1;
			  scan(i,j);
			  return;
		   case 9:i=2,j=2;
			  scan(i,j);
			  return;
		   default:printf("pls enter correct location");
	   }
   }
   void pos(char (*p)[3],int *b,int (*a1)[3])
   {	  
	   int m,k,l,v=0;
	   for(k=0;k<3;k++)
	{
	for(l=0;l<3;l++)
	a1[k][l]=0;
	}
	for(k=0;k<10;k++)
	b[k]=0;

	   for(m=1,k=0;k<3;k++)
	   {
		   for(l=0;l<3;l++,m++)
		   {
			   if(p[k][l]=='\0')
			   {
				   b[v++]=m;
				   a1[k][l]=m;
			   }
			
		   }

	   }
	   b[v]=99;	
	   for(k=0;k<3;k++)
	   {
		   for(l=0;l<3;l++)
		   {	if(a1[k][l]==0)
			printf("   ");
			else
			   printf("%d  ",a1[k][l]);
		   }
		   printf("\n\n");
	   }
   }
   void scan(int i,int j)
   {system("clear");
	   int p1,p2;
   if(c==0)
   {
	   a[i][j]=c1;
	   c=1;
		   for(p1=0;p1<3;p1++)
		   {	printf("----------\n");
			   for(p2=0;p2<3;p2++)
			   {
				   printf("%c  ",a[p1][p2]);
			   }
			printf("\n");
		   }	printf("----------\n");
		   return;
	   
	   }
   else if(c==1)
   {

	   a[i][j]=c2;
	   c=0;
		   for(p1=0;p1<3;p1++)
		   {printf("----------\n");
			   for(p2=0;p2<3;p2++)
			   {
				   printf(" %c  ",a[p1][p2]);
			   }
			   printf("\n");
		   }   	   printf("----------\n");
		   return;
	   }
   }

