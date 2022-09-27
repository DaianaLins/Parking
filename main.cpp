#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<string.h>

#define ESQUERDA 75
#define DIREITA 77
#define CIMA 72
#define BAIXO 80
#define ENTER 13
#define ESPACO 32

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGRAY 7
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15

typedef struct{
	char nome[30];
	char usuario[20];
	char senha[20];
}dados;
struct a
{
	char np[200];
	char c[200];
	char nump[200];
	char qp[200];
	char vp[200];
	int cod;
}logP[200];

typedef struct
{
	char c[200];
	char t[200];
	char n[200];
	char e[200];
	int vazio,cod;
	struct a clientePed;
	
}log;

dados cadastro();

log mostrar();

int main();

void caixamenu(void);

void desenharquadrado(void);

void loginINICIAL(void);

void quadrados_usuario(void);

void titulo(void);

void loginusuario(void);

void teladecadastro(void);

void visualizaropcoes(void);

void teladevisualizacao(void);

void listartodos(int vezes);

void teladealteracao(int cadastro);

void teladeexclusao(void);

void alterar(int i,int cadastro);

void quadradogrande(void);

void alterar(int i);

void textcolor(int i){ 
	//Fun��o que � usada da interface para colocar cores
	HANDLE h1 = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
	BOOL b = GetConsoleScreenBufferInfo(h1, &bufferInfo);
	bufferInfo.wAttributes &= 0x00F0;
	SetConsoleTextAttribute (h1, bufferInfo.wAttributes |= i);
}


void gotoxy(int x, int y){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x-1, y-1});
}

//----------------------------------------------

void carro(){ // Fun��o da interface do carro
 	int x, y=1;
 	system("mode 120, 50");
 	textcolor(YELLOW);
 	for(x=1; x<=120; x++){
 		gotoxy(x,y);
 		printf("\xdb");
 		
	 }x=120;
	 for(y=1; y<=50; y++){
	 	gotoxy(x,y);
	 	printf("\xdb");
	 	
	 }y=50;
	 for(x=120;x>=1;x--){
	 	gotoxy(x,y);
	 	printf("\xdb");
	 	
	 }x=1;
	 for(y=50; y>=1; y--){
	 	gotoxy(x,y);
	 	printf("\xdb");
	 	
	 }y=1;
	 
     textcolor(LIGHTGRAY);
     textcolor(LIGHTRED);
	 gotoxy(16, 11);
	 printf("\xdb\xdb");
	 gotoxy(18, 10);
	 printf("\xdb\xdb\xdb\xdb\xdb");
	 gotoxy(16, 12);
	 printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	 gotoxy(21, 12);
	 printf("\xdb\xdb\xdb\xdb");
	 gotoxy(21, 11);
	 printf("\xdb\xdb");
	 gotoxy(22,12);
	 printf("\xdb");
	 gotoxy(23,13);
	 printf("\xdb\xdb");
	 gotoxy(24,13);
	 printf("\xdb\xdb");
	 gotoxy(25, 11);
	 printf("\xdb\xdb");
	 gotoxy(27,10);
	 printf("\xdb\xdb");
	 gotoxy(29,9);
	 printf("\xdb\xdb");
	 gotoxy(31,8);
	 printf("\xdb\xdb");
	 gotoxy(33,7);
	 printf("\xdb\xdb");
	 gotoxy(35,6);
	 printf("\xdb\xdb\xdb\xdb");
	
	 
	 for(int i=39;i<79;i++){
	 	gotoxy(i,5);
		printf("\xdb");
	 }
	 gotoxy(79,6);
	 printf("\xdb\xdb\xdb\xdb"); 
	 gotoxy(83,7);
	 printf("\xdb\xdb");
	 gotoxy(85,8);
	 printf("\xdb\xdb");
	 gotoxy(87,9);
	 printf("\xdb\xdb");
	 gotoxy(89,10);
	 printf("\xdb\xdb");
	 gotoxy(91,11);
	 printf("\xdb\xdb");
	 gotoxy(93,12);
	 printf("\xdb\xdb");
	 gotoxy(93,12);
	 printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	 gotoxy(95,11);
	 printf("\xdb\xdb"); 
	 gotoxy(95,10);
	 printf("\xdb\xdb\xdb\xdb\xdb");
	 gotoxy(100,11);
	 printf("\xdb\xdb");
	 gotoxy(92,13);
	 printf("\xdb");
	 gotoxy(93,13);
	
	 printf("\xdb\xdb");
	 for(int i=25;i<93;i++){
	 
		gotoxy(i,14);
		printf("\xdb"); 	
	 }
	 
	 gotoxy(21,14);
	 printf("\xdb\xdb");
	 gotoxy(19,15);
	 printf("\xdb\xdb");
	 gotoxy(17,16);
	 printf("\xdb\xdb");
	 gotoxy(15,17);
	 printf("\xdb\xdb");
	 gotoxy(13,18);
	 printf("\xdb\xdb");
	 gotoxy(13,19);
	 printf("\xdb\xdb");
	 gotoxy(13,20);
	 printf("\xdb\xdb");
	 gotoxy(13,21);
	 printf("\xdb\xdb");
	 gotoxy(13,22);
	 printf("\xdb\xdb");
	 gotoxy(13,23);
	 printf("\xdb\xdb");
	 gotoxy(13,24);
	 printf("\xdb\xdb");
	 textcolor(LIGHTGRAY);
	 
	 //Roda esquerda
	 textcolor(DARKGRAY);
	 gotoxy(11,23);
	 printf("\xdb\xdb");
	 gotoxy(11,24);
	 printf("\xdb\xdb");
	 gotoxy(11,24);
	 printf("\xdb\xdb");
	 gotoxy(11,25);
	 printf("\xdb\xdb");
	 gotoxy(11,26);
	 printf("\xdb\xdb"); 
	 gotoxy(11,27);
	 printf("\xdb\xdb");
	 gotoxy(11,28);
	 printf("\xdb\xdb");
	 gotoxy(11,29);
	 printf("\xdb\xdb");
	 gotoxy(11,30);
	 printf("\xdb\xdb");
	 gotoxy(11,31);
	 printf("\xdb\xdb");
	 gotoxy(11,32);
	 printf("\xdb\xdb");
	 gotoxy(11,33);
	 printf("\xdb\xdb");
	 gotoxy(11,34);
	 printf("\xdb\xdb");
	 gotoxy(25,34);
	 printf("\xdb\xdb");
	 gotoxy(25,33);
	 printf("\xdb\xdb");
	 
	 for(int i=13;i<25;i++){
	 	gotoxy(i,35);
	 printf("\xdb"); 	
	 }
	 textcolor(LIGHTGRAY);
	 
	 // LINHA QUE LIGA OS PNEUS
	 
	textcolor(LIGHTRED);
	 gotoxy(15,25);
	 printf("\xdb\xdb");
	 gotoxy(15,26);
	 printf("\xdb\xdb");
	 gotoxy(15,27);
	 printf("\xdb\xdb");
	 gotoxy(15,28);
	 printf("\xdb\xdb");
	 gotoxy(15,29);
	 printf("\xdb\xdb");
	 gotoxy(15,30);
	 printf("\xdb\xdb");
	 gotoxy(15,31);
	 printf("\xdb\xdb");
	 gotoxy(17,32);
	 printf("\xdb\xdb");
	 
	 
	 
	 for(int i=17;i<101;i++){
	 	gotoxy(i,32);
	 	printf("\xdb");
	 }
	 
	 textcolor(LIGHTGRAY);
	 
    // Roda Direita
	 
     textcolor(LIGHTRED);
	 gotoxy(101,25);
	 printf("\xdb\xdb");
	 gotoxy(101,26);
	 printf("\xdb\xdb");
	 gotoxy(101,27);
	 printf("\xdb\xdb");
	 gotoxy(101,28);
	 printf("\xdb\xdb");
	 gotoxy(101,29);
	 printf("\xdb\xdb");
	 gotoxy(101,30);
	 printf("\xdb\xdb");
	 gotoxy(101,31);
	 printf("\xdb\xdb");
	 textcolor(LIGHTGRAY);
	 textcolor(DARKGRAY);
	 gotoxy(91,34);
	 printf("\xdb\xdb");
	 gotoxy(91,33);
	 printf("\xdb\xdb");
	 for(int i=93;i<105;i++){
	 gotoxy(i,35);
	 printf("\xdb");
 	}
 	textcolor(LIGHTGRAY);
     textcolor(LIGHTGRAY);
     textcolor(LIGHTRED);
	 gotoxy(103,23);
	 printf("\xdb\xdb");
	 gotoxy(103,24);
	 printf("\xdb\xdb");
	 textcolor(LIGHTGRAY);
	 textcolor(DARKGRAY);
	 gotoxy(105,23);
	 printf("\xdb\xdb");
	 gotoxy(105,24);
	 printf("\xdb\xdb");
	 gotoxy(105,25);
	 printf("\xdb\xdb");
	 gotoxy(105,26);
	 printf("\xdb\xdb");
	 gotoxy(105,27);
	 printf("\xdb\xdb");
	 gotoxy(105,28);
	 printf("\xdb\xdb");
	 gotoxy(105,29);
	 printf("\xdb\xdb");
	 gotoxy(105,30);
	 printf("\xdb\xdb");
	 gotoxy(105,31);
	 printf("\xdb\xdb");
	 gotoxy(105,32);
	 printf("\xdb\xdb");
	 gotoxy(105,33);
	 printf("\xdb\xdb");
	 gotoxy(105,34);
	 printf("\xdb\xdb");
	textcolor(LIGHTGRAY);
	 //Lumin�ria do carro (esquerdo)
	 textcolor(YELLOW);
	 gotoxy(17,18);
	 printf("\xdb\xdb");
	 
	 for(int i=17;i<25;i++){
	 
		gotoxy(i,18);
		printf("\xdb"); 	
	 }
	textcolor(LIGHTGRAY);
	textcolor(YELLOW);
	 gotoxy(25,19);
	 printf("\xdb");
	 textcolor(LIGHTGRAY);
	 textcolor(BROWN);
	 gotoxy(21, 19);
	 printf("\xdb");
	 gotoxy(21, 20);
	 printf("\xdb");
	 gotoxy(22, 21);
	
	textcolor(LIGHTGRAY);
	textcolor(BROWN);
	 printf("\xdb\xdb\xdb");
	 gotoxy(26,19);
	 textcolor(LIGHTGRAY);
	  textcolor(YELLOW);
	 printf("\xdb\xdb\xdb");
	 gotoxy(29,20);
	 printf("\xdb\xdb");
	 gotoxy(31,21);
	 printf("\xdb\xdb");
	 gotoxy(33,22);
	 printf("\xdb\xdb");
	 gotoxy(33,23);
	 printf("\xdb\xdb");
	 gotoxy(17,19);
	 printf("\xdb\xdb");
	 gotoxy(17,20);
	 printf("\xdb\xdb");
	 gotoxy(17,21);
	 printf("\xdb\xdb");
	 gotoxy(17,22);
	 printf("\xdb\xdb");
	 gotoxy(19,23);
	 printf("\xdb\xdb");
	 gotoxy(20,23);
	 printf("\xdb\xdb\xdb\xdb\xdb");
	 for(int i=25;i<33;i++)
	 {
	 gotoxy(i,24);
	 printf("\xdb");
	 }
	 textcolor(LIGHTGRAY);
	 
	 //Escadinha inferior (direito)
	 
	  textcolor(LIGHTRED);
	 gotoxy(95,14);
	 printf("\xdb\xdb");
	 gotoxy(97,15);
	 printf("\xdb\xdb");
	 gotoxy(99,16);
	 printf("\xdb\xdb");
	 gotoxy(101,17);
	 printf("\xdb\xdb");
	 gotoxy(103,18);
	 printf("\xdb\xdb");
	 gotoxy(103,19);
	 printf("\xdb\xdb");
	 gotoxy(103,20);
	 printf("\xdb\xdb");
	 gotoxy(103,21);
	 printf("\xdb\xdb");
	 gotoxy(103,22);
	 printf("\xdb\xdb");
	  textcolor(LIGHTGRAY);
	 // Lumin�ria do carro (direito)
     textcolor(YELLOW);
	for(int i=93;i<101;i++){
	 
		gotoxy(i,18);
		printf("\xdb"); 	
	 }
	 gotoxy(89,19);
	 printf("\xdb\xdb");
	 gotoxy(89,19);
	 printf("\xdb\xdb\xdb\xdb");
	 gotoxy(87,20);
	 printf("\xdb\xdb");
	 gotoxy(85,21);
	 printf("\xdb\xdb");
	  textcolor(LIGHTGRAY);
	   textcolor(BROWN);
	 gotoxy(96,19);
	 printf("\xdb");
	 gotoxy(96,20);
	 printf("\xdb");
	 gotoxy(93,21);
	 printf("\xdb\xdb\xdb");
	  textcolor(LIGHTGRAY);
	   textcolor(YELLOW);
	 gotoxy(83,22);
	 printf("\xdb\xdb");
	 gotoxy(83,23);
	 printf("\xdb\xdb");

	 for(int i=85;i<91;i++)
	 {
	 gotoxy(i,24);
	 printf("\xdb");
	}
	 for(int i=91;i<97;i++)
	 {
	 gotoxy(i,23);
	 printf("\xdb");
	}
	 
	 printf("\xdb\xdb");
	 gotoxy(99,19);
	 printf("\xdb\xdb");
	 gotoxy(99,20);
	 printf("\xdb\xdb");
	 gotoxy(99,21);
	 printf("\xdb\xdb");
	 gotoxy(99,22);
	 printf("\xdb\xdb");
	 gotoxy(99,21);
	 printf("\xdb\xdb");
	textcolor(LIGHTGRAY);
	 // Parte do meio
	textcolor(YELLOW);
	 gotoxy(39,22);
	 printf("\xdb\xdb");
	 gotoxy(37,23);
	 printf("\xdb\xdb");
	 gotoxy(37,24);
	 printf("\xdb\xdb");
	 gotoxy(39,25);
	 printf("\xdb\xdb");
	 gotoxy(41,26);
	 printf("\xdb\xdb\xdb\xdb");
	 gotoxy(45,27);
	 printf("\xdb\xdb");
	  textcolor(LIGHTGRAY);
	   textcolor(BROWN);
	 gotoxy(57,20);
	 printf("\xdb\xdb\xdb\xdb");
	 gotoxy(39,24);
	 printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  \xdb");
	 gotoxy(66, 24);
	 printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	 gotoxy(63, 24);
	 printf("\xdb");
	 gotoxy(63, 23);
	 printf("\xdc");
	 gotoxy(63, 25);
	 printf("\xdb");
	 gotoxy(54, 23);
	 printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");
	 gotoxy(54, 25);
	 printf("\xdb");
	 gotoxy(54,26);
	 printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
	 textcolor(LIGHTGRAY);
	  textcolor(YELLOW);
	 for(int i=39;i<77;i++){
	 	gotoxy(i,22);
	 	printf("\xdb");	
	 }
	  for(int i=45;i<71;i++){
	 	gotoxy(i,27);
	 	printf("\xdb");
	 }
	 gotoxy(71,27);
	 printf("\xdb\xdb");
	 gotoxy(73,26);
	 printf("\xdb\xdb\xdb\xdb");
	 gotoxy(77,25);
	 printf("\xdb\xdb");
	 gotoxy(77,22);
	 printf("\xdb\xdb");
	 gotoxy(79,23);
	 printf("\xdb\xdb");
	 gotoxy(79,24);
	 printf("\xdb\xdb");
	 
	  textcolor(LIGHTGRAY);
	 
	 // Detalhe lado direito
	  textcolor(YELLOW);
	 gotoxy(85,27);
	 printf("\xdb\xdb");
	 gotoxy(85,28);
	 printf("\xdb\xdb");
	 gotoxy(87,26);
	 printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	 gotoxy(87,29);
	 printf("\xdb\xdb\xdb\xdb");
	 gotoxy(91,30);
	 printf("\xdb\xdb\xdb\xdb\xdb\xdb");
	 gotoxy(97,29);
	 printf("\xdb\xdb");
	 gotoxy(97,28);
	 printf("\xdb\xdb");
	 gotoxy(97,27);
	 printf("\xdb\xdb");
	 
	 // Detalhe Lado esquerdo
	 gotoxy(21,26);
	 printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	 gotoxy(31,27);
	 printf("\xdb\xdb");
	 gotoxy(31,28);
	 printf("\xdb\xdb");
	 gotoxy(19,27);
	 printf("\xdb\xdb");
	 gotoxy(19,28);
	 printf("\xdb\xdb");
	 gotoxy(19,29);
	 printf("\xdb\xdb");
	 gotoxy(21,30);
	 printf("\xdb\xdb");
	 gotoxy(27,29);
	 printf("\xdb\xdb\xdb\xdb");
	 gotoxy(23,30);
	 printf("\xdb\xdb\xdb\xdb");
	  textcolor(LIGHTGRAY);
	 //placa//
	Sleep(30);
	 textcolor(YELLOW);
	gotoxy(40,28);
	printf("=========================================");
	Sleep(30);
	gotoxy(40,29);
	printf("||");
	Sleep(30);
	gotoxy(40,30);
	printf("||");
	Sleep(30);
	gotoxy(40,31);
	printf("||");
	Sleep(30);
	gotoxy(40,32);
	printf("||");
	Sleep(30);
	gotoxy(40,32);
	printf("=========================================");
	Sleep(30);
	gotoxy(79,29);
	printf("||");
	Sleep(30);
	gotoxy(79,30);
	printf("||");
	Sleep(30);
	gotoxy(79,31);
	printf("||");
	 textcolor(LIGHTGRAY);
	//estrutura do p//
	gotoxy(43, 29);
	printf("\xdb");
	Sleep(30);
	gotoxy(43, 30);
	printf("\xdb");
	Sleep(30);
	gotoxy(43, 31);
	printf("\xdb");
	Sleep(30);
	gotoxy(44,29);
	printf("\xdf\xdf");
	Sleep(30);
	gotoxy(46, 29);
	printf("\xdb");
	Sleep(30);
	gotoxy(46, 30);
	printf("\xdf");
	Sleep(30);
	gotoxy(44,30);	
	printf("\xdf\xdf");
	//estrutura do 4//
	Sleep(30);
	gotoxy(51,29);
	printf("\xdb");
	Sleep(30);
	gotoxy(51,30);
	printf("\xdb");
	Sleep(30);
	gotoxy(51,31);
	printf("\xdb");
	Sleep(30);
	gotoxy(50,29);
	printf("\xdf");
	Sleep(30);
	gotoxy(49,29);
	printf("\xdc");
	Sleep(30);
	gotoxy(48,30);
	printf("\xdb");
	Sleep(30);
	gotoxy(49,30);
	printf("\xdc");
	Sleep(30);
	gotoxy(50,30);
	printf("\xdc");
	Sleep(30);
	gotoxy(51,30);
	printf("\xdb");
	Sleep(30);
	gotoxy(52,30);
	printf("\xdc");
	//estrutura do R//
	Sleep(30);
	gotoxy(54,29);
	printf("\xdb");
	Sleep(30);
	gotoxy(54,30);
	printf("\xdb");
	Sleep(30);
	gotoxy(54,31);
	printf("\xdb");
	Sleep(30);
	gotoxy(55,29);
	printf("\xdf\xdf");
	Sleep(30);
	gotoxy(57,29);
	printf("\xdc");
	Sleep(30);
	gotoxy(57,30);
	printf("\xdc");
	Sleep(30);
	gotoxy(57,31);
	printf("\xdb");
	Sleep(30);
	gotoxy(55,30);
	printf("\xdf\xdf");
	Sleep(30);
    //estrutura do K//
    Sleep(30);
    gotoxy(59,29);
	printf("\xdb");
	Sleep(30);
	gotoxy(59,30);
	printf("\xdb");
	Sleep(30);
	gotoxy(59,31);
	printf("\xdb");
	Sleep(30);
	gotoxy(60,30);
	printf("\xdf");
	Sleep(30);
	gotoxy(61,29);
	printf("\xdc");
	Sleep(30);
	gotoxy(62,29);
	printf("\xdf");
	Sleep(30);
	gotoxy(61,30);
	printf("\xdc");
	Sleep(30);
	gotoxy(62,31);
	printf("\xdf");
	Sleep(30);
	gotoxy(63,31);
	printf("\xdc");
 	//estrutura do 1//
 	Sleep(30);
 	gotoxy(65,29);
 	printf("\xdb");
 	Sleep(30);
 	gotoxy(65,30);
	printf("\xdb");
	Sleep(30);
	gotoxy(65,31);
	printf("\xdb");
	Sleep(30);
	gotoxy(64,29);
	printf("\xdc");
	//estrutura do N//
	Sleep(30);
	gotoxy(67,29);
	printf("\xdb");
	Sleep(30);
	gotoxy(67,30);
	printf("\xdb");
	Sleep(30);
	gotoxy(67,31);
	printf("\xdb");
	Sleep(30);
	gotoxy(68,29);
	printf("\xdb");
	Sleep(30);
	gotoxy(69,30);
	printf("\xdb");
	Sleep(30);
	gotoxy(70,31);
	printf("\xdb");
	Sleep(30);
	gotoxy(71,31);
	printf("\xdb");
	Sleep(30);
	gotoxy(71,30);
	printf("\xdb");
	Sleep(30);
	gotoxy(71,29);
	printf("\xdb");
	//estrutura do G//
	Sleep(30);
	gotoxy(73,29);
	printf("\xdc");
	Sleep(30);
	gotoxy(73,30);
	printf("\xdb");
	Sleep(30);
	gotoxy(73,31);
	printf("\xdf");
	Sleep(30);
	gotoxy(74,31);
	printf("\xdc\xdc\xdc");
	Sleep(30);
	gotoxy(74,29);
	printf("\xdf\xdf\xdf");
	Sleep(30);
	gotoxy(77,31);
	printf("\xdf");
	Sleep(30);
	gotoxy(75,30);
	printf("\xdc\xdc");
	Sleep(30);
	gotoxy(77,29);
	printf("\xdc");	

    gotoxy(40, 37);
	system("PAUSE");
	getch();
	system("cls");
	loginINICIAL();
	 
}

void desenharquadrado(void){
	int x, y=1;
 	system("mode 120, 50");
 	textcolor(YELLOW);
 	for(x=1; x<=120; x++){
 		gotoxy(x,y);
 		printf("\xdb");
 		
	 }x=120;
	 for(y=1; y<=50; y++){
	 	gotoxy(x,y);
	 	printf("\xdb");
	 	
	 }y=50;
	 for(x=120;x>=1;x--){
	 	gotoxy(x,y);
	 	printf("\xdb");
	 	
	 }x=1;
	 for(y=50; y>=1; y--){
	 	gotoxy(x,y);
	 	printf("\xdb");
	 	
	 }y=1;
	 
     textcolor(LIGHTGRAY);
}


//----------------------------------------------

void loginusuario(void){
     titulo();
     quadrados_usuario();                                     

}

//----------------------------------------------

void loginINICIAL(void){
	desenharquadrado();
	titulo();
	textcolor(YELLOW);
	for(int i=35;i<77;i++){ // 1 QUADRO
	 	gotoxy(i,10);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,14);
	 	printf("\xdf");	
   }
   
    for(int i=10;i<14;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=10;i<14;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,14);
   printf("\xdf");
   
    for(int i=35;i<77;i++){ // 2 QUADRO
	 	gotoxy(i,18);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,22);
	 	printf("\xdf");	
   }
   
    for(int i=18;i<22;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=18;i<22;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,22);
   printf("\xdf");
   
    for(int i=35;i<77;i++){ // 3 QUADRO
	 	gotoxy(i,26);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,30);
	 	printf("\xdf");	
   }
   
    for(int i=26;i<30;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=26;i<30;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   char user[]="      ";
   
   gotoxy(77,30);
   printf("\xdf");
   textcolor(LIGHTGRAY);
   gotoxy(49,12);
   printf(" ADMINISTRADOR");
   
   
   gotoxy(43,20);
   printf(" LOGIN : ");

   gotoxy(43,28);
   printf(" SENHA : ");

   //cadastro();
   dados cad;
	FILE *arq;
	char usuario[20],senha[20];
	arq = fopen("cadastro.dados","rb");
	gotoxy(52,20);
	fflush(stdin);
	scanf("%s",&usuario);
	gotoxy(52,28);
	fflush(stdin);
	scanf("%s",&senha);
	while(fread(&cad,sizeof(dados),1,arq)){
		if(!strcmp(usuario,cad.usuario)){
			if(!strcmp(senha,cad.senha)){
				gotoxy(47,34);;
				printf("BEM VINDO(A), %s",cad.nome);
				getch();
				fclose(arq);
				system("cls");
				loginusuario();
			}
		}
	}
	fclose(arq);
   	gotoxy(45,34);
	printf("LOGIN OU SENHA INCORRETOS",cad.nome);
   getch();
   system("cls");
   loginINICIAL();
   
	
}


//----------------------------------------------

void titulo(){
	textcolor(YELLOW);
	gotoxy(35, 2);
      printf(" _____  _  _   _____  _  ____ _   _  _____ ");
      gotoxy(35, 3);
      printf("|  __ \\| || | |  __ \\| |/ /_ | \\ | |/ ____|");
      gotoxy(35, 4);
      printf("| |__) | || |_| |__) | ' / | |  \\| | |  __ ");
      gotoxy(35, 5);
      printf("|  ___/|__   _|  _  /|  <  | | . ` | | |_ |");
      gotoxy(35, 6);
      printf("| |       | | | | \\ \\| . \\ | | |\\  | |__| |");
      gotoxy(35, 7);
      printf("|_|       |_| |_|  \\_|_|\\_\\|_|_| \\_|\\_____|");
      textcolor(LIGHTGRAY);
  }
      
      
//----------------------------------------------      
 
void quadrados_usuario(){
	desenharquadrado();
	titulo();
    textcolor(YELLOW); 
    for(int i=35;i<77;i++){ // 1 QUADRO
	 	gotoxy(i,10);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,14);
	 	printf("\xdf");	
   }
   
    for(int i=10;i<14;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=10;i<14;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,14);
   printf("\xdf");
   
    for(int i=35;i<77;i++){ // 2 QUADRO
	 	gotoxy(i,16);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,20);
	 	printf("\xdf");	
   }
   
    for(int i=16;i<20;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=16;i<20;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,20);
   printf("\xdf");
   
    for(int i=35;i<77;i++){ // 3 QUADRO
	 	gotoxy(i,22);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,26);
	 	printf("\xdf");	
   }
   
    for(int i=22;i<26;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=22;i<26;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }

for(int i=35;i<77;i++){ // 4 QUADRO
	 	gotoxy(i,28);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,32);
	 	printf("\xdf");	
   }
   
    for(int i=28;i<32;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=28;i<32;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }

   for(int i=35;i<77;i++){ // 5 QUADRO (4 DE DIFEREN�A)
	 	gotoxy(i,34);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,38);
	 	printf("\xdf");	
   }
   
    for(int i=34;i<38;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=34;i<38;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   for(int i=35;i<77;i++){ // 6 QUADRO (4 DE DIFEREN�A)
	 	gotoxy(i,40);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,44);
	 	printf("\xdf");	
   }
   
    for(int i=40;i<44;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=40;i<44;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,44);
   printf("\xdf");
   
   
   gotoxy(77,26);
   printf("\xdf");
   
   gotoxy(77,32);
   printf("\xdf");
   
   gotoxy(77,38);
   printf("\xdf");
   textcolor(LIGHTGRAY);
   gotoxy(45,12);
   printf("1 - CADASTRO");
   
   gotoxy(45,18);
   printf("2 - VISUALIZAR CADASTRO ");

   gotoxy(45,24);
   printf("3 - ALTERAR CADASTRO ");
   
   gotoxy(45,30);
   printf("4 - EXCLUIR VEICULO ");
   
   gotoxy(45,36);
   printf("5 - SAIR ");
   
   gotoxy(45,42);
   printf("SELECIONE A OPCAO: ");
   
   int valor;
   
   gotoxy(65,42);
   scanf("%d", &valor);

   switch ( valor ){
    case 1 :
    teladecadastro();
    break;
    
    case 2 : 
    visualizaropcoes();
    break;
    
    case 3 :
    teladealteracao(0);
    break;
    
    case 4 :
    teladeexclusao();    
    break;
    
    case 5:
    exit(0);
    break;
    
    default:
    gotoxy(47,46);
    printf("VALOR INVALIDO!");
    getch();
    quadrados_usuario();
}


	/*int x=32,y=20,a;  // SETINHAS
	do{
		gotoxy(x,y);
		printf("->");
		switch(a=getch()){
			case CIMA:
				if(y!=12){
					gotoxy(x,y);
					printf("  ");
					y-=8;
				}break;
			case BAIXO:
				if(y!=28){
					gotoxy(x,y);
					printf("  ");
					y+=8;
				}
		}
		
	}while(a!=ENTER);

   getch();
   system("cls");
   */

}

//----------------------------------------------

void teladecadastro(){
	desenharquadrado();
	titulo();
    textcolor(YELLOW); 
    for(int i=35;i<77;i++){ // 1 QUADRO
	 	gotoxy(i,10);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,12);
	 	printf("\xdf");	
   }
   
    for(int i=10;i<12;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=10;i<12;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,12);
   printf("\xdf");
   
    for(int i=35;i<77;i++){ // 2 QUADRO
	 	gotoxy(i,15);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,17);
	 	printf("\xdf");	
   }
   
    for(int i=15;i<17;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=15;i<17;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,17);
   printf("\xdf");
   
    for(int i=35;i<77;i++){ // 3 QUADRO
	 	gotoxy(i,20);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,22);
	 	printf("\xdf");	
   }
   
    for(int i=20;i<22;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=20;i<22;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   
   gotoxy(77,22);
   printf("\xdf");
   
   for(int i=35;i<77;i++){ // 4 QUADRO
	 	gotoxy(i,25);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,27);
	 	printf("\xdf");	
   }
   
    for(int i=25;i<27;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=25;i<27;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   
   gotoxy(77,27);
   printf("\xdf");

   for(int i=35;i<77;i++){ // 5 QUADRO
	 	gotoxy(i,30);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,32);
	 	printf("\xdf");	
   }
   
    for(int i=30;i<32;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=30;i<32;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   
   gotoxy(77,32);
   printf("\xdf");
   textcolor(LIGHTGRAY);
   int i; log cadastro;
   
   FILE *arq;
   
   arq = fopen("dados.log","ab");

   gotoxy(39,11);
   printf(" CODIGO DE 1-200 :");
   gotoxy(39,16);
   printf(" PROPRIETARIO : ");
   gotoxy(39,21);
   printf(" PLACA : ");
   gotoxy(39,26);
   printf(" MARCA : ");
   gotoxy(39,31);
   printf(" MODELO :");
   	int cond;
   
   do{
   	cond=2;
	gotoxy(58,11);
	scanf("%d", &cadastro.cod);
	FILE *testar; log verificar;
	testar = fopen("dados.log","rb");
	while(fread(&verificar,sizeof(log),1,testar)){
		if(verificar.cod==cadastro.cod){
			fclose(testar);
			gotoxy(57,11);
			textcolor(LIGHTRED);
			printf("CODIGO JA EM USO!");
			getch();
			gotoxy(57,11);
			printf("                  ");
			textcolor(LIGHTGRAY);
			cond=1;
		   }
	   }fclose(testar);
   }while(cond==1);
	   
   gotoxy(55,16);
   scanf("%s", &cadastro.n);
   gotoxy(50,21);
   scanf("%s", &cadastro.c); 
   gotoxy(50,26);
   scanf("%s", &cadastro.e);
   gotoxy(50,31);
   scanf("%s", &cadastro.t);
   gotoxy(48,36);
   printf("CADASTRADO COM SUCESSO!");
   fwrite(&cadastro,sizeof(log),1,arq);
   fclose(arq);
   getch();
   system("cls");
   titulo();
   quadrados_usuario();
}


void teladevisualizacao(void){
	desenharquadrado();
	titulo();
	textcolor(YELLOW);
	for(int i=35;i<77;i++){ // 1 QUADRO
	 	gotoxy(i,10);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,14);
	 	printf("\xdf");	
   }
   
    for(int i=10;i<14;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=10;i<14;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");
	 	
	gotoxy(77,14);
	printf("\xdf");
	 		
   }
   textcolor(LIGHTGRAY);
   
   int valor;
   gotoxy(40,12);
   printf("DIGITE SEU CODIGO: ");
   scanf("%d", &valor);
   
   FILE *arq; log teste,oficial; int errado=0;
   
   arq = fopen("dados.log","rb");
   
   while(fread(&teste,sizeof(log),1,arq)){
   		if(teste.cod==valor){
   			oficial=teste;
   			errado=1;
   			break;
		}
   }
   fclose(arq);
   
   if(errado==0){
   	gotoxy(45,16);
   	printf("CODIGO NAO ENCONTRADO!");
   	getch();
   	system("cls");
   	teladevisualizacao();
   }
   
   //variavel pra printar � a "oficial"
   
   textcolor(YELLOW);
   for(int i=35;i<77;i++){ // 2 QUADRO GRANDE
	 	gotoxy(i,16);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,29);
	 	printf("\xdf");	
   }
   
    for(int i=16;i<29;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=16;i<29;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,29);
   printf("\xdf");
      
   textcolor(LIGHTGRAY);
   
   //variavel pra printar � a "oficial"
   
   gotoxy(48,17);
   printf("DADOS DO CADASTRO");
   gotoxy(45,20);
   printf("PROPRIETARIO: %s",oficial.n);
   gotoxy(45,22);
   printf("PLACA: %s",oficial.c);
   gotoxy(45,24);
   printf("MARCA: %s",oficial.e);
   gotoxy(45,26);
   printf("MODELO: %s",oficial.t);
   
   gotoxy(34,32);
   printf("PRESSIONE ENTER PARA RETORNAR AO MENU PRINCIPAL");
   
   getch();
   system("cls");
   quadrados_usuario();
}

void visualizaropcoes(void){
	desenharquadrado();
	titulo();
	textcolor(YELLOW);
	for(int i=35;i<77;i++){ // 1 QUADRO
	 	gotoxy(i,10);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,14);
	 	printf("\xdf");	
   }
   
    for(int i=10;i<14;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=10;i<14;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,14);
   printf("\xdf");
   
    for(int i=35;i<77;i++){ // 2 QUADRO
	 	gotoxy(i,16);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,20);
	 	printf("\xdf");	
   }
   
    for(int i=16;i<20;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=16;i<20;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,20);
   printf("\xdf");
   
    for(int i=35;i<77;i++){ // 2 QUADRO
	 	gotoxy(i,22);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,26);
	 	printf("\xdf");	
   }
   
    for(int i=22;i<26;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=22;i<26;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,26);
   printf("\xdf");
   textcolor(LIGHTGRAY);
   gotoxy(40,12);
   printf("1 - PROCURAR POR CODIGO");
   gotoxy(40,18);
   printf("2 - LISTAR VEICULOS");
   gotoxy(40,24);
   printf("SELECIONE A OPCAO: ");
   
   int valor;
   
   gotoxy(60,24);
   scanf("%d", &valor);

   switch ( valor ){
    case 1 :
    getch();
    system("cls");
    teladevisualizacao();
    break;
    
    case 2 :
    getch();
    system("cls");
    listartodos(1);
    break;
    
    default:
    gotoxy(45,28);
   	printf("OPCAO INVALIDA! ");	
   	getch();
    visualizaropcoes();
}
}

void listartodos(int vezes){
	desenharquadrado();
	titulo();
	
	textcolor(YELLOW);
	
	for(int i=35;i<77;i++){ // 1 QUADRO GRANDE
	 	gotoxy(i,10);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,21);
	 	printf("\xdf");	
   }
   
    for(int i=10;i<21;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=10;i<21;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   gotoxy(77,21);
   printf("\xdf");
   
   gotoxy(48,12);
   printf("DADOS DO CADASTRO");
   
   	for(int i=51;i<61;i++){ // 2 QUADRO
	 	gotoxy(i,23);
	 	printf("\xdf");	
	 	 }

	 for(int i=51;i<61;i++){
	 	gotoxy(i,27);
	 	printf("\xdf");	
   }
   
    for(int i=23;i<27;i++){
	 	gotoxy(51,i);
	 	printf("\xdb");	
   }
   
   for(int i=23;i<27;i++){
	 	gotoxy(61,i);
	 	printf("\xdb"); 	
   }
   
   gotoxy(61,27);
   printf("\xdf");
   
   for(int i=35;i<56;i++){ // 3  QUADRO
	 	gotoxy(i,29);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<56;i++){
	 	gotoxy(i,33);
	 	printf("\xdf");	
   }
   
    for(int i=29;i<33;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=29;i<33;i++){
	 	gotoxy(56,i);
	 	printf("\xdb");	 	
   }
   
   gotoxy(56,33);
   printf("\xdf");
   
    for(int i=58;i<77;i++){ // 4 QUADRO
	 	gotoxy(i,29);
	 	printf("\xdf");	
	 	 }

	 for(int i=58;i<77;i++){
	 	gotoxy(i,33);
	 	printf("\xdf");	
   }
   
    for(int i=29;i<33;i++){
	 	gotoxy(58,i);
	 	printf("\xdb");	
   }
   
   for(int i=29;i<33;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	 	
   }
	gotoxy(77,33);
   printf("\xdf");
	textcolor(LIGHTGRAY);
	
	gotoxy(43,31);
	printf(" << ");

    gotoxy(67,31);
	printf(" >> ");

	int a;
	do{
		gotoxy(45,13);
	   	printf("                              ");
	   	gotoxy(45,14);
	   	printf("                              ");
	   	gotoxy(45,15);
		printf("                              ");
		gotoxy(45,16);
		printf("                              ");
		gotoxy(45,17);
		printf("                              ");
		
		FILE *arq; int tamanho=0; log visualizar;
	
		arq = fopen("dados.log","rb");
		
		while(fread(&visualizar,sizeof(log),1,arq)){
			tamanho++;
		}fclose(arq);
		
		if(tamanho==0){
			printf("nao ha cadastros!");
			getch();
			system("cls");
			quadrados_usuario();
		}
		
		arq = fopen("dados.log","rb");
		int qnt=0;
		while(fread(&visualizar,sizeof(log),1,arq)){
			qnt++;
			if(qnt==vezes){
				break;
			}
		}fclose(arq);
		
		gotoxy(53,25);
		printf(" %d / %d ",vezes,tamanho);
		
		gotoxy(45,13);
	   	printf("CODIGO: %d",visualizar.cod);
	   	gotoxy(45,14);
	   	printf("PROPRIETARIO: %s",visualizar.n);
	   	gotoxy(45,15);
		printf("PLACA: %s",visualizar.c);
		gotoxy(45,16);
		printf("MARCA: %s",visualizar.e);
		gotoxy(45,17);
		printf("MODELO: %s",visualizar.t);
		
		gotoxy(34, 35);
		printf("PRESSIONE ENTER PARA RETORNAR AO MENU PRINCIPAL");
		
		switch(a=getch()){
			case ESQUERDA:
				if(vezes!=1){
					vezes--;
					//listartodos(vezes);
				}
				break;
			case DIREITA:
				if(vezes!=tamanho){
					vezes++;
					//listartodos(vezes);
				}
				break;
			case ENTER:
				system("cls");
				quadrados_usuario();
				break;
		}
	}while(a!=ENTER);


	listartodos(vezes);
    getch();
    system("cls");
	
}


void teladealteracao(int cadastro){
	desenharquadrado();
	titulo();

	textcolor(YELLOW);
	
	FILE *arq;
	
	int i=0; 
	
	for(int i=35;i<77;i++){ // 1 QUADRO
	 	gotoxy(i,10);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,12);

	 	printf("\xdf");	
   }
   
   
    for(int i=10;i<12;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=10;i<12;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
    gotoxy(77,12);
   printf("\xdf");
   textcolor(LIGHTGRAY);
   if(cadastro==0){	
	   gotoxy(45,11);
	   printf(" DIGITE SEU CODIGO:  ");
	   scanf("%d",&cadastro);
   }else{
   	   gotoxy(45,11);
	   printf(" DIGITE SEU CODIGO:  %d",cadastro);
	   i=1;
   }
   
   log b;
   arq = fopen("dados.log","rb");
		while(fread(&b,sizeof(log),1,arq)){
		   	if(b.cod==cadastro){
		   		i=1;
		   		break;
			}	
		}fclose(arq);
   
   if(i==0){
   	gotoxy(47,14);
   	printf("CODIGO NAO ENCONTRADO!");
   	getch();
   	system("cls");
   	teladealteracao(0);
   }
   
   textcolor(YELLOW);
   
   for(int i=35;i<77;i++){ // 2 QUADRO
	 	gotoxy(i,15);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,17);
	 	printf("\xdf");	
   }
   
    for(int i=15;i<17;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=15;i<17;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,17);
   printf("\xdf");
   
    for(int i=35;i<77;i++){ // 3 QUADRO GRANDE
	 	gotoxy(i,16);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,27);
	 	printf("\xdf");	
   }
   
    for(int i=16;i<27;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=16;i<27;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   gotoxy(77,12);
   printf("\xdf");
   gotoxy(77,27);
   printf("\xdf");
   
   for(int i=35;i<77;i++){ // 1 QUADRO
	 	gotoxy(i,30);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,32);

	 	printf("\xdf");	
   }
   
    for(int i=30;i<32;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=30;i<32;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
    gotoxy(77,32);
   printf("\xdf");
   
   textcolor(LIGHTGRAY);
   
   gotoxy(42,16);
   printf("  QUAL VOCE DESEJA ALTERAR ? ");
   
   gotoxy(47,19);
   printf(" 1 - PROPRIETARIO ");

   gotoxy(47,21);
   printf(" 2 - PLACA  ");

   gotoxy(47,23);
   printf(" 3 - MARCA  ");

   gotoxy(47,25);
   printf(" 4 - MODELO ");
    
   gotoxy(40,31);
   printf(" DIGITE A OPCAO: ");
    
   int valor;
   gotoxy(57,31);
   scanf("%d", &valor);
   
   if(valor>=1&&valor<5){
   	system("cls");
   	alterar(valor,cadastro);
   }else{
   	if(valor==8969888687){
   		fclose(arq);
   		system("cls");
   		quadrados_usuario();
	   }
	   gotoxy(47,34);
   	printf ("VALOR INVALIDO!\n");
   	
   }
    getch();   
    teladealteracao(cadastro);
} 

void alterar(int i,int cadastro){
	//arquivo � dados.log
	FILE *arq; FILE *aux;
	log b,passagem;
	
	arq = fopen("dados.log","rb");
	aux = fopen("dados.aux","wb");
	
	while(fread(&passagem,sizeof(log),1,arq)){
		if(passagem.cod!=cadastro){
			fwrite(&passagem,sizeof(log),1,aux);
		}else{
			b=passagem;
		}
	}
	
	if(i==1){
		titulo();
		quadradogrande();
		gotoxy(39,12);
	    printf("PROPRIETARIO ATUAL: %s",b.n);
	    strcpy(b.n,"                          ");
	    gotoxy(39,20);
	    printf("NOVO PROPRIETARIO: ");
	    gotoxy(58,20);
	    fflush(stdin);
	    gets(b.n);
	    gotoxy(43,24);
	    printf("ALTERACAO FEITA COM SUCESSO!");
	}if(i==2){
		titulo();
		quadradogrande();
		gotoxy(39,12);
	    printf("PLACA ATUAL: %s",b.c);
	    strcpy(b.c,"                          ");
	    gotoxy(39,20);
	    printf("NOVA PLACA: ");
	    gotoxy(51,20);
	    fflush(stdin);
	    gets(b.c);
	    gotoxy(43,24);
	    printf("ALTERACAO FEITA COM SUCESSO!");
	} if(i==3){
		titulo();
		quadradogrande();
		gotoxy(39,12);
	    printf("MARCA ATUAL: %s",b.e);
	   strcpy(b.e,"                          ");
	    gotoxy(39,20);
	    printf("NOVA MARCA: ");
	    gotoxy(51,20);
	    fflush(stdin);
	    gets(b.e);
	    gotoxy(43,24);
	    printf("ALTERACAO FEITA COM SUCESSO!");
	} if(i==4){
		titulo();
		quadradogrande();
		gotoxy(39,12);
	    printf("MODELO ATUAL: %s",b.t);
	   strcpy(b.t,"                          ");
	    gotoxy(39,20);
	    printf("NOVO MODELO: ");
	    gotoxy(53,20);
	    fflush(stdin);
	    gets(b.t);
	    gotoxy(43,24);
	    printf("ALTERACAO FEITA COM SUCESSO!");
	}
	getch();
	system("cls");
	
	fwrite(&b,sizeof(log),1,aux);
	
	fclose(arq);
	fclose(aux);
	
	arq = fopen("dados.log","wb");
	aux = fopen("dados.aux","rb");
	
	while(fread(&passagem,sizeof(log),1,aux)){
		fwrite(&passagem,sizeof(log),1,arq);
	}
	
	fclose(arq);
	fclose(aux);
	
	quadrados_usuario();
}

void teladeexclusao(void){
	desenharquadrado();
	titulo();
	textcolor(YELLOW);
	for(int i=35;i<77;i++){ // 1 QUADRO
	 	gotoxy(i,10);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,14);
	 	printf("\xdf");	
   }
   
    for(int i=10;i<14;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=10;i<14;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	 	
   }
   
   gotoxy(77,14);
   printf("\xdf");
   textcolor(LIGHTGRAY);
   
   int valor,valorexclusao;
  
   gotoxy(40,12);
   printf("DIGITE SEU CODIGO: ");
   scanf("%d", &valor);
   
   FILE *arq; log b; int cont=0;
   
   arq = fopen("dados.log","rb");
   
   while(fread(&b,sizeof(log),1,arq)){
   	if(b.cod==valor){
   		cont=1;
   		break;
	   }
   }fclose(arq);
   if(cont==0){
   	fclose(arq);
   	gotoxy(45,16);
   	printf("CODIGO NAO ENCONTRADO!");
   	getch();
   	system("cls");
	teladeexclusao();
   }
   
   textcolor(YELLOW);
   for(int i=35;i<77;i++){ // 2 QUADRO GRANDE
	 	gotoxy(i,16);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,30);
	 	printf("\xdf");	
   }
   
    for(int i=16;i<30;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=16;i<30;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   for(int i=35;i<77;i++){ // 3 QUADRO
	 	gotoxy(i,32);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,37);
	 	printf("\xdf");	
   }
   
    for(int i=32;i<37;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=32;i<37;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");
		 	 	
   }
   gotoxy(77,37);
   printf("\xdf");

   gotoxy(77,30);
   printf("\xdf");
   textcolor(LIGHTGRAY);
   
   gotoxy(48,17);
   printf("DADOS DO CADASTRO");
   gotoxy(45,20);
   printf("PROPRIETARIO: %s",b.n);
   gotoxy(45,22);
   printf("PLACA: %s",b.c);
   gotoxy(45,24);
   printf("MARCA: %s",b.e);
   gotoxy(45,26);
   printf("MODELO: %s",b.t);
   
   
    gotoxy(38,34);
   printf("DESEJA REALMENTE EXCLUIR O CADASTRO?");
   gotoxy(47,35);
   printf("1 - SIM / 2 - NAO: ");
   scanf("%d",&valorexclusao); 
   
   if(valorexclusao==1){
   	FILE *aux; log passagem;
   	aux = fopen("dados.aux","wb");
   	
   	arq = fopen("dados.log","rb");
   
	   while(fread(&passagem,sizeof(log),1,arq)){
	   	if(b.cod!=passagem.cod){
	   		fwrite(&passagem,sizeof(log),1,aux);
		   }
	   }fclose(arq);
	   fclose(aux);
	   
	   aux = fopen("dados.aux","rb");
   	
   		arq = fopen("dados.log","wb");
   
	   while(fread(&passagem,sizeof(log),1,aux)){
	   		fwrite(&passagem,sizeof(log),1,arq);
	   }fclose(arq);
	   fclose(aux);
       
       gotoxy(43,39);
	   printf("USUARIO APAGADO COM SUCESSO!");
	   getch();
	   system("cls");
	   quadrados_usuario();
   }
   
   if(valorexclusao==2){
   	
       gotoxy(48,39);
	   printf("EXCLUSAO DESCARTADA!");
	   getch();
	   system("cls");
	   quadrados_usuario();  	
} 
   gotoxy(48,39);
   printf("VALOR INVALIDO!");
   getch();
   system("cls");
   teladeexclusao();

   quadrados_usuario();
}

void quadradogrande(){
	textcolor(YELLOW);
	for(int i=35;i<77;i++){ // 1 QUADRO
	 	gotoxy(i,10);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,14);
	 	printf("\xdf");	
   }
   
    for(int i=10;i<14;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=10;i<14;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,14);
   printf("\xdf");
   
    for(int i=35;i<77;i++){ // 2 QUADRO
	 	gotoxy(i,18);
	 	printf("\xdf");	
	 	 }

	 for(int i=35;i<77;i++){
	 	gotoxy(i,22);
	 	printf("\xdf");	
   }
   
    for(int i=18;i<22;i++){
	 	gotoxy(35,i);
	 	printf("\xdb");	
   }
   
   for(int i=18;i<22;i++){
	 	gotoxy(77,i);
	 	printf("\xdb");	
   }
   
   gotoxy(77,22);
   printf("\xdf");
   textcolor(LIGHTGRAY);	
}

void caixamenu(void){
	textcolor(YELLOW);
	for(int i=4;i<12;i++){ // 1 QUADRO
	 	gotoxy(i,3);
	 	printf("\xdf");	
	 	 }

	 for(int i=4;i<12;i++){
	 	gotoxy(i,6);
	 	printf("\xdf");	
   }
   
    for(int i=3;i<6;i++){
	 	gotoxy(4,i);
	 	printf("\xdb");	
   }
   
   for(int i=3;i<6;i++){
	 	gotoxy(12,i);
	 	printf("\xdb");	
   }
   
   gotoxy(12,6);
   printf("\xdf");
   textcolor(LIGHTGRAY);
   gotoxy(7,4);
   printf("ESC");
   
}

log mostrar(){
	FILE *arq; log dados;
	arq = fopen("dados.log","rb");
	while(fread(&dados,sizeof(log),1,arq)){
		printf("CODIGO:%d\nPROPRIETARIO: %s\nPLACA: %s\nMARCA: %s\nMODELO: %s\n\n",dados.cod,dados.n,dados.c,dados.e,dados.t);
	}
}


dados cadastro(){
	FILE *arq;
	arq = fopen("cadastro.dados","ab");
	dados g;
	fflush(stdin);
	scanf("%s",&g.nome);
	fflush(stdin);
	scanf("%s",&g.usuario);
	fflush(stdin);
	scanf("%s",&g.senha);
	fwrite(&g,sizeof(dados),1,arq);
	fclose(arq);
}

int main(){
	cadastro();
	mostrar(); getch();
	carro();
	teladeexclusao();
	teladecadastro();
	teladevisualizacao();
}
