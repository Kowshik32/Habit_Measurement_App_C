#include<stdio.h>
#include<stdlib.h>

void login();
void option();
void list();
void dev();

login()
{

    int number,pin;
    printf("Enter the Number: ");
    scanf("%d",&number);
    printf("Enter the password:");
    scanf("%d",&pin);


    if(number == 22  && pin==21)
    {
        printf("Login Sucessfull\n\n");
        printf("--------------------\n");
        getch();
        option();
    }
    else ("Invalid password & username\n");
}

void dev()
{
    system("cls");

    printf("\t\t1.Kowshik Mozumder\n");
    printf("\t\tBsc In Software Engineering\n");
    printf("\t\tDaffodil International University\n");

    int h;
    scanf("%d",&h);
    if(h==1)
    {
        option();
    }
    getch();
}
option()
{

while(1)
{



    int g,y;
    system("cls");
    printf("\t1.Menu:\n");
    printf("\t2.Back To Login:\n");
    printf("\t3.Exit\n");
    printf("\t4.View Developers:\n");
    scanf("%d",&g);
    if(g==1)
    {
        list();

    }
    else if(g==2)
    {
        login();
        break;
    }
    else if (g==3)
    {

        exit(1);
    }

    else if(g==4)
    {

        dev();
        break;
    }

    else printf("Invalid password\n");
}
}


list()
{



    int number;
    int pin;
    int s=0,g=0,p=0,x=0,d=0,w=0,l=0,e=0,n=0,c=0;



    system("cls");
    getch();

    printf("Welcome TO Habit Measurement\n");
    printf("-------HAVIT LIST--------\n ");
    printf("1.SLEEP:\n");
    //
    printf("2.GYM:\n");
    //
    printf("3.Study:\n");
    //
    printf("4.Prayer:\n");
    //
    printf("5.Drink:\n");
    //
    printf("6.Waste:\n");
    //
    printf("7.Love:\n");
    //
    printf("8.Learning:\n");
    //
    printf("9.Entertainment:\n");
    //
    printf("10.Clean:\n");
    printf("Press 0 then Show Day Report: ");
    while(1)
    {

        int choice;
        printf("\n\n>>Enter Your Choice:\n");
        scanf("%d",&choice);
        if(choice==0)
        {
            break;
        }

        if(choice==1)
        {
            printf("1.SLEEP: ");
            scanf("%d",&s);
        }
        else if(choice==2)
        {
            printf("2.GYM: ");
            scanf("%d",&g);

//
        }
        else if(choice==3)
        {
            printf("3.Study: ");
            scanf("%d",&p);

//
        }
        else if(choice==4)
        {
            printf("4.Payer: ");
            scanf("%d",&x);

        }
        else if(choice==5)
        {
            printf("Drink: ");
            scanf("%d",&d);

        }
        else if(choice==6)
        {
            printf("6.Waste: ");
            scanf("%d",&w);
        }
        else if(choice==7)
        {

            printf("7.Love\n");
            scanf("%d",&l);
        }
        else if(choice==8)
        {

            printf("8.Learning\n");
            scanf("%d",&n);
        }



        else if(choice==9)
        {
            printf("9.Entertainment: ");
            scanf("%d",&e);
        }


        else if(choice==10)
        {
            printf("10.Clean: ");
            scanf("%d",&c);

        }
        else
        {

            printf("invalid\n");
        }

    }



    int Sleep = 6;
    int Gym = 2;
    int Study = 8;
    int Payer = 5;
    int Drink = 10;
    int Waste = 4;
    int Love = 7;
    int Learning = 3;
    int Entertainment = 5;
    int Clean = 1;

    int sl=0,gy=0,st=0,pa=0,dn=0,wt=0,lm=0,ln=0,en=0,ct=0;
    int yesNo,choice;

    sl = (s*100)/Sleep;
    printf("\n________\n");
    printf("\n\t----------Day report--------------------\n");
    printf("\t\n________\n\t");

    printf("\nSleep work  parsentance:%d \n",sl);
    if (sl == 100)
    {
        printf("\n Sleep work Commitment:BRILLIANCE");
    }
    else if (sl >=70)
    {
        printf("\n Sleep work Commitment:GOOD");
    }
    else if (sl >=50)
    {
        printf("\n Sleep work Commitment:AVERAGE");
    }
    else if (sl >=30)
    {
        printf("\n Sleep work Commitment:LESS AVERAGE");
    }
    else
    {
        printf("\n Sleep work Commitment:CHANGE YOURSELF");
    }

    printf("\n_______\n");

    gy = (g*100)/Gym;

    	printf("\nGYM work parsentance: %d \n",gy);
    	if (gy == 100){
     printf("\n GYM work Commitment: BRILLIANCE");
}
else if (gy >=70){
    printf("\n GYM work Commitment:GOOD");
}
else if (gy >=50){
    printf("\n GYM work Commitment:AVERAGE");
}else if (gy >=30){
    printf("\n GYM work Commitment:LESS AVERAGE");
}
else {
    printf("\n GYM work Commitment:CHANGE YOURSELF");
}

printf("\n__________________________________\n");

st = (p*100)/Study;

    	printf("\nStudy work parsentance:%d \n",st);
    	if (st == 100){
    printf("\n Study work Commitment: BRILLIANCE");
}
else if (st >=70){
    printf("\n Study work Commitment:GOOD");
}
else if (st >=50){
    printf("\n Study work Commitment:AVERAGE");
}else if (st >=30){
    printf("\n Study work Commitment:LESS AVERAGE");
}
else {
    printf("\n Study work Commitment:CHANGE YOURSELF");
}

printf("\n___________________________________\n");


pa = (x*100)/Payer;

    	printf("\nPrayer parsentance:%d \n",pa);
    	if (pa == 100){
    printf("\n Prayer work Commitment: BRILLIANCE");
}
else if (pa >=70){
    printf("\n Prayer work Commitment:GOOD");
}
else if (pa >=50){
    printf("\n Prayer work Commitment: AVERAGE");
}
else if (pa >=50){
    printf("\n Prayer work Commitment:AVERAGE");
}else if (pa >=30){
    printf("\n Prayer work Commitment:LESS AVERAGE");
}
else {
    printf("\n Prayer work Commitment:CHANGE YOURSELF");
}

printf("\n__________________________\n");

 dn = (d*100)/Drink;

    	printf("\nDrink Water parsentance:%d \n",dn);
    	if (dn == 100){
    printf("\n Drink Water Commitment:BRILLIANCE");
}
else if (dn >=70){
    printf("\n Drink water Commitment:GOOD");
}
else if (dn >=50){
    printf("\n Drink water Commitment:AVERAGE");
}else if (dn >=30){
    printf("\n Drink water Commitment:LESS AVERAGE");
}
else {
    printf("\n Drink water Commitment:CHANGE YOURSELF");
}

printf("\n____________________________\n");
        wt = (w*100)/Waste;
    	printf("\n_Day report\n");
    	printf("Waste time parsentance:%d \n", wt);

printf("\n_________________________\n");
    lm = (l*100)/Love;
    	printf("\n_Day report\n");
    	printf("Love Motion parsentance:\t%d \n", lm);
    	if (wt == 100){
    printf("\n Love motion Commitment:MAX");
}
else if (wt >50){
    printf("\n Love motion Commitment:AVERAGE");
}else if (wt <49){
    printf("\n Love motion Commitment:MINI");
}
else {
    printf("\n Love motion Commitment:CHANGE YOURSELF");
}

printf("\n_________________________________\n");

ln = (n*100)/Learning;

    	printf("Learning new thing parsentance:%d \n", ln);
    	if (ln == 100){
    printf("\n Learning new things Commitment:THREE");
}
else if (ln >50){
    printf("\n Learning new things Commitment:TWO");
}else if (ln <49){
    printf("\n Learning new things Commitment:ONE");
}
else {
    printf("\n Learning new things Commitment:CHANGE YOURSELF");
}

printf("\n______________________________\n");


en = (e*100)/Entertainment;

    	printf("Entertainment parsentance:%d \n", en);
    	if (en == 100){
    printf("\n Entertainment Commitment:MAX");
}
else if (en >50){
    printf("\n Entertainment Commitment:AVERAGE");
}else if (en <49){
    printf("\n Entertainment Commitment:MINI");
}
else {
    printf("\n Entertainment Commitment:CHANGE YOURSELF");
}

printf("\n__________________________\n");

ct = (c*100)/Clean;

    	printf("Cleaning :\t%d", ct);
    	if (ct == 100){
    printf("\n Clean Commitment:Clean");
}
else {
    printf("\n Clean Commitment:CHANGE YOURSELF");
}

printf("\n__________________________\n");

getch();
}






int main()
{
    while(1)
    {


        int a;
        printf("\n\t1.Login\n");
        scanf("%d",&a);
        if(a==1)
        {
         login();
        }
        else
        {

            printf("INVALID\n");
            getch();
        }
    }
}
