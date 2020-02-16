#include<bits/stdc++.h>
#include<windows.h>
#define rep(n) for(int i=1;i<=n;i++)
#define clr system("cls")
#define w8 Sleep(200)

int demo[9]={1,2,3,4,5,6,7,8,9};

using namespace std;

int result(int a[]);
void prnt(int a,int b, int c);
int oppo(int a[]);
void sgame();
void mgame();
void inst();
void getmore();
void cre();
void menu();
void base();
void tuto();
void ani();
void load();
void animation();
void tic();
void tac();
void toe();
void status(){}

int main()
{
    cout<<"\n\n\n\n\n\tWelcome to # Tic Tac Toe #\n\n";
    Sleep(400);
    cout<<"\n\n\tPlease MAXIMIZE your window for better view\n\n";
    Sleep(300);
    cout<<"\n\n\tpress ENTER after maximizing\n\n\n\n";
    getchar();
    clr;
    load();
    animation();
    ani();
    menu();
    return 0;
}

void menu(){
    while(1){
    clr;
    cout<<"\n\n\n....................................# TIC TAC TOE #...........................................................\n";
    cout<<"..............................................................................................................\n\n";
    cout<<"\n\n_____________________________________________________________________________________\n";
    cout<<"                                       MAIN MENU\n\n";
    Sleep(300);
    cout<<"\t1 >>>  Single player game\n";
    Sleep(300);
    cout<<"\t2 >>>  multi player game\n";
    Sleep(300);
    cout<<"\t3 >>>  Instruction\n";
    Sleep(300);
    cout<<"\t4 >>>  Logo\n";
    Sleep(300);
    cout<<"\t5 >>>  get more games\n";
    Sleep(300);
    cout<<"\t6 >>>  Credits\n";
    Sleep(300);
    cout<<"\t7 >>>  Tutorial\n";
    Sleep(300);
    cout<<"\t8 >>>  Exit\n";
    cout<<"\n_____________________________________________________________________________________\n";
    Sleep(300);
    cout<<"\nENTER YOUR CHOICE >>> ";
    int op;
    cin>>op;
    if(op!=1&&op!=2&&op!=3&&op!=4&&op!=5&&op!=6&&op!=7&&op!=8){
    while(op!=1&&op!=2&&op!=3&&op!=4&&op!=5&&op!=6&&op!=7&&op!=8){
        cout<<endl<<"(@@)unvalied(@@)"<<endl<<"press between 1 and 8 ::";
        cin>>op;
    }
   }
    clr;
    getchar();
    if(op!=8)load();
    if(op==1) sgame();
    else if(op==2) mgame();
    else if(op==3) inst();
    else if(op==4) animation();
    else if(op==5) getmore();
    else if(op==6) cre();
    else if(op==7) tuto();
    else if(op==8) break;
    }
    clr;
    cout<<endl<<endl<<endl<<"Thanks a lot for playing my TIC TAC TOC'16 game"<<endl;
    w8;
   cout<<endl<<"All rights recived"<<endl;
   w8;
   cout<<endl<<"CJC'16"<<endl<<endl;
   w8;
   cout<<"Mehrajul Islam"<<endl;
    getchar();
    w8;
}

void mgame(){
    clr;
    char a[50],b[50];
    cout<<"\n\n\n\tWelcome to the multi player mode of tic tac toe\n\n";
    cout<<"Enter the name of the 1st player  ::  ";
    gets(a);
    if(strlen(a)==0){
        while(strlen(a)==0){
            cout<<"Invalid\n>>>";
            gets(a);
        }
    }
    cout<<"\n\nEnter the name of the 2nd player  ::  ";
    gets(b);
    if(strlen(b)==0||strcmp(a,b)==0){
        while(strlen(b)==0||strcmp(a,b)==0){
            cout<<"Invalid\n>>>";
            gets(b);
        }
    }
    clr;
    int ps,os,r=-1,play[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1},c=0;
    while(1){
            c++;
    cout<<"\n\n   #---#\n   |TIC|\n   |TAC|\n   |TOE|\n   #---#\n";
    rep(11){
        if(i%4==0) cout<<"\t----+---+----\t----+---+----";
        else if((i+2)%4==0) {
                if(i==2){
                    cout<<"\t  "<<demo[0]<<" | "<<demo[1]<<" | "<<demo[2];
                    prnt(play[0],play[1],play[2]);
                }
            else if(i==6){
                cout<<"\t  "<<demo[3]<<" | "<<demo[4]<<" | "<<demo[5];
                prnt(play[3],play[4],play[5]);
            }
            else  {
                cout<<"\t  "<<demo[6]<<" | "<<demo[7]<<" | "<<demo[8];
                prnt(play[6],play[7],play[8]);
            }
        }
        else cout<<"\t    |   |   \t    |   |   ";
        cout<<"\n";
    }
    if(r==0){
       cout<<"\n\n\t(@@)WOW(@@)\n\n\t"<<a<<" win the match........\n\npress enter...";
      w8;
        getchar();
        getchar();
        clr;
        break;
    }
     if(r==2){
        cout<<"\n\n\t(@@)!!OMG!!(@@)";
        w8;
        cout<<"\n\n\tThe game is draw........\n\npress enter...";
        getchar();
        getchar();
        clr;
        break;
    }
    else if(r==1){
        cout<<"\n\n\t(-_-)SORRY(-_-)";
        w8;
        cout<<"\n\n\t"<<a<<" lost the match........\n\npress enter...";
        getchar();
        getchar();
        clr;
        break;
    }
    if(c>2) r=result(play);
        if(r==0){
        cout<<"\n\n\t(@@)WOW(@@)\n\n\t"<<a<<" win the match........\n\npress enter...";
        getchar();
        getchar();
        clr;
        break;
    }
    else if(r==2){
        cout<<"\n\n\t(@@)!!OMG!!(@@)\n\n\tThe game is draw........\n\npress enter...";
        getchar();
        getchar();
        clr;
        break;
    }
    else if(r==1){
        cout<<"\n\n\t(-_-)SORRY(-_-)\n\n\t"<<a<<" lost the match........\n\npress enter...";
        getchar();
        getchar();
        clr;
        break;
    }
    if(c%2==1){
    cout<<"\n  "<<a<<"  press 1/2/3/4/5/6/7/8/9 as your shot........\n\n>>>";
    cin>>ps;
    if(play[ps-1]!=-1||ps>9||ps<1){
        while(play[ps-1]!=-1||ps>9||ps<1){
            cout<<"UNVALID  please enter correct value  >>> ";
            cin>>ps;
        }
    }
    play[ps-1]=0;
    if(play[0]!=-1&&play[1]!=-1&&play[2]!=-1&&play[3]!=-1&&play[4]!=-1&&play[5]!=-1&&play[6]!=-1&&play[7]!=-1&&play[8]!=-1){
        r=2;
        }
        clr;
    }
    else{
        cout<<"\n  "<<b<<"  press 1/2/3/4/5/6/7/8/9 as your shot........\n\n>>>";
    cin>>os;
    if(play[os-1]!=-1||os>9||os<1){
        while(play[os-1]!=-1||os>9||os<1){
            cout<<"UNVALID  please enter correct value  >>> ";
            cin>>os;
        }
    }
    play[os-1]=1;
    if(play[0]!=-1&&play[1]!=-1&&play[2]!=-1&&play[3]!=-1&&play[4]!=-1&&play[5]!=-1&&play[6]!=-1&&play[7]!=-1&&play[8]!=-1){
        r=2;
        }
        clr;
    }
    }
    clr;
}


void getmore(){
        clr;
    cout<<"\n\nGO TO CJC's Group in facebook\n\n";
    w8;
    cout<<"1 >>> go to www.facebook.com\n\n";
    w8;
    cout<<"2>>>search Chittagong Junior Coders\n";
    w8;
    cout<<"\n3 >>> go to files \n\n";
    w8;
    cout<<"4 >>>then download and play...(@@)\n\n";
    w8;
    cout<<"thanks...........\n\npress enter...(my kolla).......\n\n\n";
    getchar();
}

void inst(){
    clr;
    cout<<"\n\n\n\t# TIC TAC TOE #\n\t INSTRUCTIONS!!!\n\n";
    Sleep(800);
    cout<<"1 >>> I hardly recomand you not to use any character\n      ex::(do not use any thing without integer)\n";
    Sleep(900);
    cout<<"\n\n2 >>> I also recomand you please do not use + - * / \n";
    Sleep(900);
    cout<<"\n\n3 >>> This a game which depends on your every input \n      so please do not press extra button without noticing..\n";
    Sleep(900);
    cout<<"\n\nThats all\n\n";
    Sleep(300);
    cout<<"press enter....";
    getchar();
}

void sgame(){
    clr;
    int ps,os,r=-1,play[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1},c=0,dif=0;
    cout<<"\n\n\n\tChoose difficulty level :: \n\n";
    w8;
    cout<<"\t1 >>> easy\n";
    cout<<"\t2 >>> midium\n";
    cout<<"\t3 >>> hard (LOCKED)\n";
    cout<<"\t4 >>> extreme (LOCKED)\n\nEnter your choice :: ";
    cin>>dif;
    if(dif!=1&&dif!=2){
        while(dif!=1&&dif!=2){
            cout<<"\n\ninvalid \n>>>";
            cin>>dif;
        }
    }
    while(1){
            clr;
            c++;
    cout<<"\n\n   #---#\n   |TIC|\n   |TAC|\n   |TOE|\n   #---#\n";
    rep(11){
        if(i%4==0) cout<<"\t----+---+----\t----+---+----";
        else if((i+2)%4==0) {
                if(i==2){
                    cout<<"\t  "<<demo[0]<<" | "<<demo[1]<<" | "<<demo[2];
                    prnt(play[0],play[1],play[2]);
                }
            else if(i==6){
                cout<<"\t  "<<demo[3]<<" | "<<demo[4]<<" | "<<demo[5];
                prnt(play[3],play[4],play[5]);
            }
            else  {
                cout<<"\t  "<<demo[6]<<" | "<<demo[7]<<" | "<<demo[8];
                prnt(play[6],play[7],play[8]);
            }
        }
        else cout<<"\t    |   |   \t    |   |   ";
        cout<<"\n";
    }
    if(r==0){
        cout<<"\n\n\t(@@)WOW(@@)\n\n\tYou win the match........\n\npress enter...";
        w8;
        getchar();
        getchar();
        clr;
        break;
    }
    else if(r==2){
        cout<<"\n\n\t(@@)!!OMG!!(@@)";
        w8;
        cout<<"\n\n\tThe game is draw........\n\npress enter...";
        getchar();
        getchar();
        clr;
        break;
    }
    else if(r==1){
        cout<<"\n\n\t(-_-)SORRY(-_-)";
        w8;
        cout<<"\n\n\tYou lost the match........\n\npress enter...";
        getchar();
        getchar();
        clr;
        break;
    }
    if(c>2) r=result(play);
        if(r==0){
        cout<<"\n\n\t(@@)WOW(@@)\n\n\tYou win the match........\n\npress enter...";
        getchar();
        getchar();
        clr;
        break;
    }
    else if(r==2){
        cout<<"\n\n\t(@@)!!OMG!!(@@)\n\n\tThe game is draw........\n\npress enter...";
        getchar();
        getchar();
        clr;
        break;
    }
    else if(r==1){
        cout<<"\n\n\t(-_-)SORRY(-_-)\n\n\tYou lost the match........\n\npress enter...";
        getchar();
        getchar();
        clr;
        break;
    }
    cout<<"\npress 1/2/3/4/5/6/7/8/9 as your shot........\n\n>>>";
    cin>>ps;
    if(play[ps-1]!=-1||ps>9||ps<1){
        while(play[ps-1]!=-1||ps>9||ps<1){
            cout<<"UNVALID  please enter correct value  >>> ";
            cin>>ps;
        }
    }
    play[ps-1]=0;
    if(play[0]!=-1&&play[1]!=-1&&play[2]!=-1&&play[3]!=-1&&play[4]!=-1&&play[5]!=-1&&play[6]!=-1&&play[7]!=-1&&play[8]!=-1){
        r=2;
    }
    if(dif==1)  {
            os=rand()%8;
            os++;
            if(play[os-1]==-1)   play[os-1]=1;
            else{
                while(play[os-1]!=-1){
                    os=rand()%8;
                    os++;
                }
            play[os-1]=1;
            }
            clr;
    }
    else {
        os=oppo(play);
        play[os-1]=1;
        clr;
        }
    clr;
    }
    clr;
}

void cre(){
    clr;
    cout<<"\n\n\n\t# TIC TAC TOE #\n\tCREDITS!!!\n\n";
    Sleep(900);
    cout<<"\tTHE MOST CONFUSING QUSTION (-_-)\n\tHOWEVER....\n\n";
    Sleep(300);
    cout<<"0 >>> Me  !!(o.O)!!\n";
    Sleep(300);
    cout<<"1 >>> ALLAH THE ALMIGHTY\n";
    Sleep(300);
    cout<<"2 >>> My Mother\n";
    Sleep(300);
    cout<<"3 >>> My father\n";
    Sleep(300);
    cout<<"4 >>> My brother\n";
    Sleep(300);
    cout<<"5 >>> Junaid al mahin\n";
    Sleep(300);
    cout<<"6 >>> Towfiqul Islam\n";
    Sleep(300);
    cout<<"7 >>> Asif Mujtaba SOWMIK\n";
    Sleep(300);
    cout<<"7 >>> Rasheed al shafee\n";
    Sleep(300);
    cout<<"8 >>> Biborno vai\n";
    Sleep(300);
    cout<<"9 >>> Arif vai\n";
    Sleep(300);
    cout<<"10 >>> Google\n";
    Sleep(300);
    cout<<"11 >>> Tamim sahriar subeen\n";
    Sleep(300);
    cout<<"12 >>> Chit chat coaders\n";
    Sleep(300);
    cout<<"13 >>> Coders planet\n";
    Sleep(300);
    cout<<"14 >>> fully CJC......\n";
    Sleep(300);
    cout<<"thats all.......\n";
    cout<<"press enter.....";
    getchar();
}

int oppo(int a[]){
    if(a[0]==-1&&a[1]==1&&a[2]==1)  return 1;
    else if(a[1]==-1&&a[0]==1&&a[2]==1)  return 2;
    else if(a[2]==-1&&a[0]==1&&a[1]==1)  return 3;
    else if(a[3]==-1&&a[4]==1&&a[5]==1)  return 4;
    else if(a[4]==-1&&a[3]==1&&a[5]==1)  return 5;
    else if(a[5]==-1&&a[4]==1&&a[3]==1)  return 6;
    else if(a[6]==-1&&a[7]==1&&a[8]==1)  return 7;
    else if(a[7]==-1&&a[6]==1&&a[8]==1)  return 8;
    else if(a[8]==-1&&a[7]==1&&a[6]==1)  return 9;
    else if(a[0]==-1&&a[3]==1&&a[6]==1)  return 1;
    else if(a[3]==-1&&a[0]==1&&a[6]==1)  return 4;
    else if(a[6]==-1&&a[3]==1&&a[0]==1)  return 7;
    else if(a[1]==-1&&a[4]==1&&a[7]==1)  return 2;
    else if(a[4]==-1&&a[7]==1&&a[4]==1)  return 5;
    else if(a[7]==-1&&a[1]==1&&a[4]==1)  return 8;
    else if(a[2]==-1&&a[8]==1&&a[5]==1)  return 3;
    else if(a[5]==-1&&a[2]==1&&a[8]==1)  return 6;
    else if(a[8]==-1&&a[5]==1&&a[2]==1)  return 9;
    else if(a[2]==-1&&a[4]==1&&a[6]==1)  return 3;
    else if(a[4]==-1&&a[6]==1&&a[2]==1)  return 5;
    else if(a[6]==-1&&a[2]==1&&a[4]==1)  return 7;
    else if(a[0]==-1&&a[4]==1&&a[8]==1)  return 1;
    else if(a[4]==-1&&a[8]==1&&a[0]==1)  return 5;
    else if(a[8]==-1&&a[0]==1&&a[4]==1)  return 9;
    else if(a[0]==-1&&a[1]==0&&a[2]==0)  return 1;
    else if(a[1]==-1&&a[0]==0&&a[2]==0)  return 2;
    else if(a[2]==-1&&a[0]==0&&a[1]==0)  return 3;
    else if(a[3]==-1&&a[4]==0&&a[5]==0)  return 4;
    else if(a[4]==-1&&a[3]==0&&a[5]==0)  return 5;
    else if(a[5]==-1&&a[4]==0&&a[3]==0)  return 6;
    else if(a[6]==-1&&a[7]==0&&a[8]==0)  return 7;
    else if(a[7]==-1&&a[6]==0&&a[8]==0)  return 8;
    else if(a[8]==-1&&a[7]==0&&a[6]==0)  return 9;
    else if(a[0]==-1&&a[3]==0&&a[6]==0)  return 1;
    else if(a[3]==-1&&a[0]==0&&a[6]==0)  return 4;
    else if(a[6]==-1&&a[3]==0&&a[0]==0)  return 7;
    else if(a[1]==-1&&a[4]==0&&a[7]==0)  return 2;
    else if(a[4]==-1&&a[7]==0&&a[4]==0)  return 5;
    else if(a[7]==-1&&a[1]==0&&a[4]==0)  return 8;
    else if(a[2]==-1&&a[8]==0&&a[5]==0)  return 3;
    else if(a[5]==-1&&a[2]==0&&a[8]==0)  return 6;
    else if(a[8]==-1&&a[5]==0&&a[2]==0)  return 9;
    else if(a[2]==-1&&a[4]==0&&a[6]==0)  return 3;
    else if(a[4]==-1&&a[6]==0&&a[2]==0)  return 5;
    else if(a[6]==-1&&a[2]==0&&a[4]==0)  return 7;
    else if(a[0]==-1&&a[4]==0&&a[8]==0)  return 1;
    else if(a[4]==-1&&a[8]==0&&a[0]==0)  return 5;
    else if(a[8]==-1&&a[0]==0&&a[4]==0)  return 9;
    else {
        int k=rand()%8;
        if(a[k]!=-1){
            while(a[k]!=-1) k=rand()%8;
        }
        return k+1;
    }
}

void prnt(int a,int b, int c){
    cout<<"\t  ";
    if(a==-1) cout<<" ";
    else if(a==0) cout<<"O";
    else cout<<"X";
    cout<<" | ";
    if(b==-1) cout<<" ";
    else if(b==0) cout<<"O";
    else cout<<"X";
    cout<<" | ";
    if(c==-1) cout<<" ";
    else if(c==0) cout<<"O";
    else cout<<"X";
}

int result(int a[]){
    if(a[0]==0&&a[1]==0&&a[2]==0)  return 0;
    else if(a[3]==0&&a[4]==0&&a[5]==0)  return 0;
    else if(a[6]==0&&a[7]==0&&a[8]==0)  return 0;
    else if(a[0]==0&&a[3]==0&&a[6]==0)  return 0;
    else if(a[1]==0&&a[4]==0&&a[7]==0)  return 0;
    else if(a[2]==0&&a[5]==0&&a[8]==0)  return 0;
    else if(a[0]==0&&a[4]==0&&a[8]==0)  return 0;
    else if(a[2]==0&&a[4]==0&&a[6]==0)  return 0;
    else if(a[0]==1&&a[1]==1&&a[2]==1)  return 1;
    else if(a[3]==1&&a[4]==1&&a[5]==1)  return 1;
    else if(a[6]==1&&a[7]==1&&a[8]==1)  return 1;
    else if(a[0]==1&&a[3]==1&&a[6]==1)  return 1;
    else if(a[1]==1&&a[4]==1&&a[7]==1)  return 1;
    else if(a[2]==1&&a[5]==1&&a[8]==1)  return 1;
    else if(a[0]==1&&a[4]==1&&a[8]==1)  return 1;
    else if(a[2]==1&&a[4]==1&&a[6]==1)  return 1;
    else return -1;
}

void base(){
    rep(11){
        if(i%4==0) cout<<"\t----+---+----";
        else if((i+2)%4==0) {
                if(i==2)    cout<<"\t  "<<demo[0]<<" | "<<demo[1]<<" | "<<demo[2];
            else if(i==6)   cout<<"\t  "<<demo[3]<<" | "<<demo[4]<<" | "<<demo[5];
            else    cout<<"\t  "<<demo[6]<<" | "<<demo[7]<<" | "<<demo[8];
        }
        else cout<<"\t    |   |   ";
        cout<<"\n";
    }
}

void tuto(){
    clr;
    cout<<"\n\n\n\n\n\n\n\n\n\t\tWELLCOME TO THE TUTORIAL\n\n\n\n\n\t   Press enter when you are ready....";
    getchar();
    clr;
    cout<<"\n\n";
    base();
    cout<<"\n\n\n\n\tThis is a model of tic tac toe.........\n";
    cout<<"\n\there you can see the numbers which denotes the value of each 9 points....\n\n";
    cout<<"\tYou have to just enter these values(1/2/3/4/5/6/7/8/9) as your shot";
    cout<<"\n\nNow enter your shot to complete the tutorial................\n\n>>>>";
    int a; cin>>a;
    if(a<1||a>9){
        while(a<1||a>9){
            cout<<"Unvalied\n\nenter your shot again to complete the tutorial................\n\n>>>>";
            cin>>a;
        }
    }
    clr;
    getchar();
    cout<<"\n\n\n\n\n\n\n\n\t\t(@@)WOW(@@)\n\t  You have passed the tutorial\n\n";
    cout<<"\tThanks for playing playing tutorial\n\n\tNow you are  ready  to play\n\n\n\n\n\n\npress enter...........";
    getchar();
    clr;
}

void ani(){
    char p=(char)177;
    cout<<"\n\n";
    rep(29){
        if(i==10||i==20) cout<<"\t      "<<p<<p;
        else if(i==12) cout<<"    TIC\t        ";
        else if(i==13) cout<<"     TAC        ";
        else if(i==14) cout<<"      TOE       ";
        else if(i==15) cout<<"       '16      ";
        else if(i==16) cout<<"   by   \t";
        else if(i==17) cout<<"    MEHRAJ      ";
        else if(i==18) cout<<"     CJC'16     ";
        else if(i==19) cout<<"      GMHS'16   ";
        else  cout<<"\t\t";
    if(i==10||i==20){
        rep(31) printf("%c",177);
    }
    else{
        rep(29){
            if(i==10||i==20) printf("%c",177);
            else printf(" ");
        }
    }
    cout<<endl;
    Sleep(50);
    }
    cout<<"\n\tPRESS ENTER....\n";
    getchar();
    Sleep(10);
    clr;
}

void load(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  LOADING...\n\t\t   ");
    for(int r=1;r<=40;r++){
    for(int q=0;q<=20000000;q++);//to display the character slowly
    printf("%c",177);
    }
    clr;
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  ...DONE...\n\n\t\t   ");

    cout<<"\n\n\n\t\t\t\tpress enter....\n\n\n\n\n";
    getchar();
    clr;
}


void tic(){
rep(9){
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    cout<<endl;
    }

        w8; clr;

rep(9){
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    if(i>2&&i<8) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"    ";
    else cout<<"oo  ";
    cout<<endl;
    }

     w8; clr;

rep(9){
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    if(i>2&&i<8) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"    ";
    else cout<<"oo  ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
}

     w8; clr;
}

void tac(){
rep(9){
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    if(i>2&&i<8) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"    ";
    else cout<<"oo  ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
}
cout<<"\n";
rep(9){
    cout<<"\t";
    if(i<4) cout<<"ooo";
    else cout<<"   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    cout<<endl;
    }
        w8; clr;
    rep(9){
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    if(i>2&&i<8) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"    ";
    else cout<<"oo  ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
}
cout<<"\n";
rep(9){
    cout<<"\t";
    if(i<4) cout<<"ooo";
    else cout<<"   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    cout<<"ooo";
    if((i>3&&i<6)||i>7) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo  ";
    cout<<endl;
    }
        w8; clr;
    rep(9){
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    if(i>2&&i<8) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"    ";
    else cout<<"oo  ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
}
cout<<"\n";
rep(9){
    cout<<"\t";
    if(i<4) cout<<"ooo";
    else cout<<"   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    cout<<"ooo";
    if((i>3&&i<6)||i>7) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo  ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
    }
    w8; clr;
}

void toe(){
    rep(9){
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    if(i>2&&i<8) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"    ";
    else cout<<"oo  ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
}
cout<<"\n";
rep(9){
    cout<<"\t";
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    cout<<"ooo";
    if((i>3&&i<6)||i>7) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo  ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
    }
    cout<<"\n";
    rep(9){
    cout<<"\t\t";
    if(i<4) cout<<"ooo";
    else cout<<"   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    cout<<endl;
    }
        w8; clr;
    rep(9){
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    if(i>2&&i<8) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"    ";
    else cout<<"oo  ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
}
cout<<"\n";
rep(9){
    cout<<"\t";
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    cout<<"ooo";
    if((i>3&&i<6)||i>7) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo  ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
    }
    cout<<"\n";
    rep(9){
    cout<<"\t\t";
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo";
    cout<<endl;
    }
        w8; clr;
    rep(9){
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    if(i>2&&i<8) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"    ";
    else cout<<"oo  ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
}
cout<<"\n";
rep(9){
    cout<<"\t";
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    cout<<"ooo";
    if((i>3&&i<6)||i>7) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo  ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
    }
    cout<<"\n";
    rep(9){
    cout<<"\t\t";
    if(i<4) cout<<"\tooo";
    else cout<<"\t   ";
    cout<<"ooo";
    if(i<4) cout<<"ooo  ";
    else cout<<"     ";
    cout<<"ooo";
    if(i>2&&i<8) cout<<"  ";
    else cout<<"oo";
    cout<<"ooo  ";
    cout<<"ooo";
    if(i==3||i==7) cout<<"     ";
    else cout<<"oooooo";
    cout<<endl;
    }
    w8;
}

void animation(){
    tic();
    tac();
    toe();
    cout<<"\npress enter.......";
    getchar();
    clr;
}
