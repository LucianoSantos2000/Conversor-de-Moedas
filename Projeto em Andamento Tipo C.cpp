#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <time.h>
/* O Projeto esta sendo feito por luciano..... */
/*
___________________���������������� 
_________________��������������������� 
__�_�__________������������������������______�__�__� 
__�_�__�______������____������____������______�_�_� 
�_�_�_�______������______����______�������____����� 
_�����______�������___O_�����__O__��������_������� 
_��������__���������____������____����������___��� 
____��____����������������������������������____�� 
____�_____������������������������������__��___� 
_____��������__������������������������__������ 
__________���__������������������������__��� 
___________���_____����������������_____�� 
____________��________����������_______�� 
_____________���_______________________� 
_______________��____�����������______� 
________________���_____�����������__� 
___________________���_____���������� 
______________________�����__��������� 
_____________________________���������� 
______________________________���������
 */

int main (void){
    char comando[9] = "color ";
    char cores[2];
    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("Escolha sua Cor");
    
    printf ("Escolha sua Cor para melhor leitura:\n\n");
    printf ("\t0 - Preto\t8 - Cinza\n");
    printf ("\t1 - Azul\t9 - Azul Claro\n");
    printf ("\t2 - Verde\tA - Verde Claro\n");
    printf ("\t3 - Verde �gua\tB - Verde �gua Claro\n");
    printf ("\t4 - Vermelho\tC - Vermelho Claro\n");
    printf ("\t5 - Roxo\tD - Lil�s\n");
    printf ("\t6 - Amarelo\tE - Amarelo Claro\n");
    printf ("\t7 - Branco\tF - Branco Brilhante\n");
    printf ("\n\nCor de fundo: ");
    scanf("%c", &cores[0]);
    getchar();
    
    printf ("Cor do texto: ");
    scanf("%c", &cores[1]);
    
    strcat (comando, cores);
    
    system (comando);
    
	int moedas;

	do{
	
printf("\ndigite novamente o numero para saber o valor das moedas\n");
	printf("\nDigite um Numero de pa�s para saber a cotacao da Moeda em BRL\n");
	printf("\n 1- Afeganist�o AFN:\n");
	printf("\n 2- AFrica do sul ZAR:\n");
	printf("\n 3- Albania lek alban�s ALL:\n");
	printf("\n 4- Alemanha EUR:\n");
	printf("\n 5- Andorra EUR:\n");
	printf("\n 6- Angola AOA:\n");
	printf("\n 7- Antiga e Barbuda XCD:\n");
	printf("\n 8- Ar�bia Saudita SAR:\n");
	printf("\n 9- Argelia DZD:\n");
	printf("\n 10- Argetina ARS:\n");
	printf("\n 11- Arm�nia AMD:\n");
	printf("\n 12- Austr�lia AUD:\n");
	printf("\n 13- Austria EUR:\n");
	printf("\n 14- Azerbaij�o AZN:\n");
	printf("\n 15- Bahamas BSD:\n");
	printf("\n 16- Bangladexe BDT:\n");
	printf("\n 17- Barbados BBD:\n");
	printf("\n 18- B�rem BHD:\n");
	printf("\n 19- B�lgica EUR:\n");
	printf("\n 20- Belize BZD:\n");
	printf("\n 21- Benim XOF:\n");
	printf("\n 22- Bielorr�ssia BYN\n");
	printf("\n 23- Bol�via BOB:\n");
	printf("\n 24- B�snia e Herzegovina BAM:\n");
	printf("\n 25- Botsuana BWP BHD:\n");
	printf("\n 26- Brunei BND:\n");
	printf("\n 27- Bulg�ria BGN\n");
	printf("\n 28- Burquina Faso XOF:\n");
	printf("\n 29- Bur�ndi BIF:\n");
	printf("\n 30- But�o BTN:\n");
	printf("\n 31- Cabo Verde CVE:\n");
	printf("\n 32- Camar�es XAF:\n");
	printf("\n 33- Camboja KHR:\n");
	printf("\n 34- Canad� CAD:\n");
	printf("\n 35- Catar  QAR:\n");
	printf("\n 36- Cazaquist�o KZT:\n");
	printf("\n 37- CHADE XAF:\n");
	printf("\n 38- Chile CLP :\n");
	printf("\n 39- China CNY:\n");
	printf("\n 40- Chipre EUR:\n");
	printf("\n 41- Col�mbia COP:\n");
	printf("\n 42- Comores KMF:\n");
	printf("\n 43- Congo-Brazzaville XAF:\n");
	printf("\n 44- Coreia do NORTE KPW:\n");
	printf("\n 45- Coreia do Sul kRW:\n");
	printf("\n 46- Cosovo EUR:\n");
	printf("\n 47- Costa do Marfim XOF:\n");
	printf("\n 48- Costa Rica CRC:\n");
    printf("\n 49- Cro�cia HRK CRC:\n");
	printf("\n 50- Cuaite KWD:\n");
	printf("\n 51- Cuba  CUP:\n");
	printf("\n 52- Dinamarca DKK:\n");
	printf("\n 53- Dominica XCD:\n");
	printf("\n 54- EGITO EGP:\n");
	printf("\n 55- Emirados �rabes Unidos AED:\n");
	printf("\n 56- Equador USD HRK:\n");
	printf("\n 57- Eritreia ERN:\n");
	printf("\n 58- Eslov�quia EUR:\n");
	printf("\n 59- Eslov�nia  EUR:\n");
	printf("\n 60- Espanha  EUR:\n");
	printf("\n 61- Essuat�ni SZL:\n");
	printf("\n 62- Estado da Palestina ILS:\n");
	printf("\n 63- Estados Unidos USD:\n");
	printf("\n 64- Est�nia EUR:\n");
	printf("\n 65- Eti�pia ETB:\n");
	printf("\n 66- Fiji FJD:\n");
	printf("\n 67- Filipinas PHP:\n");
	printf("\n 68- Finl�ndia EUR:\n");
	printf("\n 69- Fran�a EUR:\n");
	printf("\n 70- Gab�o XAF:\n");
	printf("\n 71- G�mbia GMD:\n");
	printf("\n 72- GANA GHS:\n");
	printf("\n 73- Ge�rgia GEL:\n");
	printf("\n 74- Granada	XCD:\n");
	printf("\n 75- Gr�cia EUR:\n");
	printf("\n 76- Guatemala GTQ:\n");
	printf("\n 77- Guiana GYD:\n");
	printf("\n 78- Guin� GNF:\n");
	printf("\n 79- Guin� Equatorial XAF:\n");
	printf("\n 80- Guin�-Bissau XOF:\n");
	printf("\n 81- Haiti HTG:\n");
	printf("\n 82- Honduras HNL:\n");
	printf("\n 83- Hungria HUF:\n");
	printf("\n 84- I�men YER:\n");
	printf("\n 85- Ilhas Marechal USD:\n");
	printf("\n 86- �ndia INR:\n");
	printf("\n 87- Indon�sia IDR:\n");
	printf("\n 88- Ir�o IRR:\n");
	printf("\n 89- Iraque IQD:\n");
	printf("\n 90- Irlanda EUR:\n");
	printf("\n 91- Isl�ndia ISK:\n");
	printf("\n 92- Israel ILS:\n");
	printf("\n 93- It�lia EUR:\n");
	printf("\n 94- Jamaica JMD:\n");
	printf("\n 95- Jap�o JPY:\n");
	printf("\n 96- Jibuti DJF\n");
	printf("\n 97- Jord�nia JOD:\n");
	printf("\n 98- Laus LAK:\n");
	printf("\n 99- LESOTO LSL:\n");
	printf("\n 100- Let�nia EUR:\n");
	printf("\n 101- L�bano LBP:\n");
	printf("\n 102- Lib�ria LRD:\n");
	printf("\n 103- L�bia LYD:\n");
	printf("\n 104- Listenstaine CHF:\n");
	printf("\n 105- Litu�nia EUR:\n");
	printf("\n 106- LUXEMBURGO EUR:\n");
	printf("\n 107- Maced�nia do Norte MKD:\n");
	printf("\n 108- Madag�scar MGA:\n");
	printf("\n 109- Mal�sia MYR:\n");
	printf("\n 110- Mal�ui MWK:\n");
	printf("\n 111- Maldivas MVR:\n");
	printf("\n 112- Mali XOF:\n");
	printf("\n 113- Malta EUR:\n");
	printf("\n 114- Marrocos MAD:\n");
	printf("\n 115- Maur�cia MUR:\n");
	printf("\n 116- Maurit�nia MRO:\n");
	printf("\n 117- M�xico MXN:\n");
	printf("\n 118- Mianmar MMK:\n");
	printf("\n 119- Micron�sia USD:\n");
	printf("\n 120- Mo�ambique MZN:\n");
	printf("\n 121- Mold�via MDL:\n");
	printf("\n 122- M�naco EUR:\n");
	printf("\n 123- Mong�lia MNT:\n");
	printf("\n 124- Montenegro EUR:\n");
	printf("\n 125- Nam�bia NAD:\n");
	printf("\n 126- Nauru AUD:\n");
	printf("\n 127- Nepal NPR:\n");
	printf("\n 128- Nicar�gua NIO:\n");
	printf("\n 129- N�GER XOF:\n");
	printf("\n 130- Nig�ria NGN:\n");
	printf("\n 131- Noruega NOK:\n");
	printf("\n 132- Nova Zel�ndia NZL:\n");
	printf("\n 133- Om� OMR:\n");
	printf("\n 134- Pa�ses Baixos EUR:\n");
	printf("\n 135- Palau USD:\n");
	printf("\n 136- Panam� PAB:\n");
	printf("\n 137- Papua Nova Guin� PGK:\n");
	printf("\n 138- Paquist�o PKR:\n");
	printf("\n 139- Paraguai PYG:\n");
	printf("\n 140- Peru PEN:\n");
	printf("\n 141- Pol�nia PLN:\n");
	printf("\n 142- Portugal EUR:\n");
	printf("\n 143- Qu�nia KES:\n");
	printf("\n 144- Quirguist�o KGS:\n");
	printf("\n 145- Quirib�ti AUD:\n");
	printf("\n 146- Reino Unido GBP:\n");
	printf("\n 147- Rep�blica Centro-Africana XAF:\n");
	printf("\n 148- Rep�blica Checa CZK:\n");
	printf("\n 149- Rep�blica Democr�tica do Congo CDF:\n");
	printf("\n 150- Rep�blica Dominicana DOP:\n");
	printf("\n 151- Rom�nia RON:\n");
	printf("\n 152- Ruanda RWF:\n");
	printf("\n 153- R�ssia RUB:\n");
	printf("\n 154- Salom�o SBD:\n");
	printf("\n 155- Salvador USD:\n");
	printf("\n 156- Samoa WST:\n");
	printf("\n 157- Santa L�cia XCD:\n");
	printf("\n 158- S�o Crist�v�o e Neves XCD:\n");
	printf("\n 159- S�o Marinho EUR:\n");
	printf("\n 160- S�o Tom� e Pr�ncipe STD:\n");
	printf("\n 161- S�o Vicente e Granadinas XCD\:\n");
	printf("\n 162- Seicheles SCR:\n");
	printf("\n 163- Senegal XOF:\n");
	printf("\n 164- Serra Leoa SLL:\n");
	printf("\n 165- S�rvia RSD:\n");
	printf("\n 166- Singapura SGD:\n");
	printf("\n 167- S�ria SYP:\n");
	printf("\n 168- Som�lia SOS:\n");
	printf("\n 169- Sri Lanca LKR:\n");
	printf("\n 170- Sud�o SDG:\n");
	printf("\n 171- Sud�o do Sul SSP:\n");
	printf("\n 172- S�cia SEK:\n");
	printf("\n 173- Su��a CHF:\n");
	printf("\n 174- Suriname SRD:\n");
	printf("\n 175- Tail�ndia THB:\n");
	printf("\n 176- Taiu� TWD:\n");
	printf("\n 177- Tajiquist�o TJS:\n");
	printf("\n 178- Tanz�nia TZS:\n");
	printf("\n 179- Timor-Leste:\n");
	printf("\n 180- Togo XOF:\n");
	printf("\n 181- TONGA TOP:\n");
	printf("\n 182- Trindade e Tobago:\n");
	printf("\n 183- Tun�sia TND:\n");
	printf("\n 184- Turcomenist�o:\n");
	printf("\n 185- Turquia TRY:\n");
	printf("\n 186- Tuvalu AUD:\n");\
	printf("\n 187- Ucr�nia UAH:\n");
	printf("\n 188- Uganda UGX:\n");
	printf("\n 189- Uruguai UYU:\n");
	printf("\n 190- Usbequist�o:\n");
	printf("\n 191- Vanuatu VUV:\n");
	printf("\n 192- Vaticano EUR:\n");
	printf("\n 193- Venezuela VEF:\n");
	printf("\n 194- Vietname VND:\n");
	printf("\n 195- Z�mbia ZMW:\n");
	printf("\n 196- Zimb�bue USD:\n");
	printf("\n Digite um n�mero entre 1 a 196:\n");
	printf("\n");
	scanf("%d", &moedas);
	
	switch(moedas) {
	
	case 1 :
	printf("\nO Valor da Moeda: Afeganist�o AFN � 0,054 Real brasileiro\n");
	break;
	
	case 2 :
	printf("\nO Valor da moeda: Africa do sul ZAR � 0,33 Real brasileiro\n");
	break;
	
	case 3 :
	printf("\nO Valor da moeda: Albania Lek Alb�nes ALL � 0,043 Real brasileiro\n");
	break;
	
	case 4 :
	printf("\nO Valor da moeda: Alemanha EUR � 5,21 Real brasileiro\n");
	break;
	
	case 5 :
	printf("\nO Valor da moeda: Andorra EUR � 5,21 Real brasileiro\n");
	break;
	
	case 6 :
	printf("\nO Valor da moeda: Angola AOA � 0,010 Real brasileiro\n");
	break;
	
	case 7 :
	printf("\nO Valor da moeda: Antiga e barbuda XCD � 1,76 Real brasileiro\n");
	break;
	
	case 8 :
	printf("\nO Valor da moeda: Ar�bia saudita SAR � 1,26 Real brasileiro\n");
	break;
	
	case 9 :
	printf("\nO Valor da moeda: Argelia DZD � 0,033 Real brasileiro\n");
	break;
	
	case 10 :
	printf("\nO Valor da moeda: Argetina ARS � 0,043 Real brasileiro\n");
	break;
	
	case 11 :
	printf("\nO Valor da moeda: Arm�nia AMD � 0,0097 Real brasileiro\n");
	break;
	
	case 12 :
	printf("\nO valor da moeda: Austr�lia AUD � 3,56 Real brasileiro\n");
	break;
	
	case 13 :
	printf("\nO Valor da moeda: Austria EUR � 5,21 Real brasileiro\n");
	break;
	
	case 14 :
	printf("\nO Valor da moeda: Azerbaij�o AZN � 2,79 Real brasileiro\n");
	break;
	
	case 15 :
	printf("\nO Valor da moeda: Bahamas BSD � 4,73 Real brasileiro\n");
	break;
	
	case 16 :
	printf("\nO Valor da moeda: Bangladexe BDT � 0,055 Real brasileiro\n");
	break;
	
	case 17 :
	printf("\nO Valor da moeda: Barbados BBD � 2,34 Real brasileiro\n");
	break;
	
	case 18 :
	printf ("\nO Valor da moeda: B�rem BHD � 12,56 Real brasileiro\n");
	break;

	case 19 :
	printf("\nO Valor da moeda: B�lgica EUR � 5,21 Real brasileiro\n");
	break;
	
	case 20 :
	printf("\nO Valor da moeda: Belize BZD � 2,35 Real brasileiro\n");
	break;
	
	case 21 :
	printf("\nO Valor da moeda: Benim XOF � 0,0079 Real brasileiro\n");
	break;
	
	case 22 :
	printf("\nO Valor da moeda: Bielorr�ssia BYN � 1,45 Real brasileiro\n");
	break;
	
	case 23 :
	printf ("\nO Valor da moeda: Bol�via BOB � 0,69 Real brasileiro\n");
	break;
	
	case 24 :
	printf("\nO Valor da moeda: B�snia e Herzegovina BAM � 2,66 Real brasileiro\n");
	break;
	
	case 25 :
	printf("\nO Valor da moeda: Botsuana BWP � 0,41 Real brasileiro\n");
	break;
	
	case 26 :
	printf("\nO Valor da moeda: Brunei BND � 3,49 Real brasileiro\n");
	break;
		
	case 27 :
	printf("\nO Valor da moeda: Bulg�ria BGN � 2,66 Real brasileiro\n");
    break;
    
	case 28 :
	printf("\nO Valor da moeda: Burquina Faso XOF � 0,0079 Real brasileiro\n");
	break;
	
	case 29 :
	printf("\nO Valor da moeda: Bur�ndi BIF � 0,0023 Real brasileiro\n");
	break;
	
	case 30 :
	printf("\nO Valor da moeda: But�o BTN � 0,062 Real brasileiro\n");
	break;\
	
	case 31 :
	printf("\nO Valor da moeda: Cabo Verde CVE � 0,047 Real brasileiro\n");
	break;
	
	case 32 :
	printf("\nO Valor da moeda: Camar�es XAF � 0,0079 Real brasileiro\n");
	break;
	
	case 33 :
	printf("\nO Valor da moeda: Camboja KHR � 0,0012 Real brasileiro\n");
	break;
	
	case 34 :
	printf("\nO Valor da moeda: Canad� CAD � 3,78 Real brasileiro\n");
	break;
	
	case 35 :
	printf("\nO Valor da moeda: Catar  QAR � 1,30 Real brasileiro\n");
	break;
	
	case 36 :
	printf("\nO valor da moeda: Cazaquist�o KZT � 0,0096 Real brasileiro\n");
	break;
	
	case 37 :
	printf("\nO valor da moeda: Chade XAF � 0,0079 Real brasileiro\n");
	break;
	
	case 38 :
	printf("\nO Valor da moeda: Chile CLP � 0,0061 Real brasileiro\n");
	break;
	
	case 39 :
	printf("\nO Valor da moeda: China CNY � 0,75 Real brasileiro\n");
	break;
	
	case 40 :
	printf("\nO Valor da moeda: �Chipre EUR� � 5,21 Real brasileiro\n");
	break;
	
	case 41 :
	printf("\nO Valor da moeda: Col�mbia COP � 0,0012 Real brasileiro\n");
	break;
	
	case 42 :
	printf("\nO Valor da moeda: Comores KMF � 0,011 Real brasileiro\n");
	break;
	
	case 43 :
	printf("\nO Valor da moeda: Congo-Brazzaville XAF � 0,0079 Real brasileiro\n");
	break;
	
	case 44 :
	printf("\nO Valor da moeda: Coreia do Norte KPW � 0,0052 Real brasileiro\n");
	break;
	
	case 45 :
	printf("\nO Valor da moeda: Coreia do Sul KRW � 0,0039 Real brasileiro\n");
	break;
	
	case 46 :
	printf("\nO valor da moeda: Cosovo EUR � 5,21 Real brasileiro\n");
	break;
	
	case 47 :
	printf("\nO Valor da moeda: Costa do Marfim XOF � 0,0079 Real brasileiro\n");
	break;
	
	case 48 :
	printf("\nO Valor da moeda: Costa Rica CRC � 0,0073 Real brasileiro\n");
	break;
	
	case 49 :
	printf("\nO Valor da moeda: Cro�cia HRK � 0,69 Real brasileiro\n");
	break;

	case 50 :
	printf("\nO Valor Da Moeda: Cuaite KWD � 15,57 Real brasileiro\n");
	break;
	
	case 51 :
	printf("\nO Valor da Moeda: Cuba CUP � 0,20 Real brasileiro\n");
	break;
	
	case 52 :
	printf("\nO Valor da Moeda: Dinamarca DKK � 0,70 Real brasileiro\n");
	break;
	
	case 53 :
	printf("\nO Valor da Moeda: Dominica XCD � 1,76 Real brasileiro\n");
	break;
	
	case 54 :
	printf("\nO Valor da Moeda: Egito EGP � 0,26 Real brasileiro\n");
	break;
	
	case 55 :
	printf("\nO Valor da Moeda: Emirados �rabes Unidos AED � 1,29 Real brasileiro\n");
	break;
	
	case 56 :
	printf("\nO Valor da Moeda: Equador USD � 4,74 Real brasileiro\n");
	break;
	
	case 57 :
	printf("\nO Valor da Moeda: Eritreia ERN � 26,47 Real brasileiro\n");
	break;
	
	case 58 :
	printf("\nO Valor da Moeda: Eslov�quia EUR � 5,21 Real brasileiro\n");
	break;
	
	case 59 :
	printf("\nO Valor da Moeda: Eslov�nia  EUR � 5,21 Real brasileiro\n");
	break;
	
	case 60 :
	printf("\nO Valor da Moeda: Espanha  EUR � 5,21 Real brasileiro\n");
	break;
	
	case 61 :
	printf("\nO Valor da Moeda: Essuat�ni SZL � 0,32 Real brasileiro\n");
	break;
	
	case 62 :
	printf("\nO Valor da Moeda: Estado da Palestina ILS � 1,47 Real brasileiro\n");
	break;
	
	case 63 :
	printf("\nO Valor da Moeda: Estados Unidos USD � 4,74 Real brasileiro\n");
	break;
	
	case 64 :
	printf("\nO Valor da Moeda: Est�nia EUR � 5,21 Real brasileiro\n");
	break;
	
	case 65 :
	printf("\nO Valor da Moeda: Eti�pia ETB � 0,092 Real brasileiro\n");
	break;
	
	case 66 :
	printf("\nO Valor da Moeda: Fiji FJD � 2,27 Real brasileiro\n");
	break;
	
	case 67 :
	printf("\nO Valor da Moeda: Filipinas PHP � 0,091 Real brasileiro\n");
	break;
	
	case 68 :
	printf("\nO Valor da Moeda: Finl�ndia EUR � 5,21 Real brasileiro\n");
	break;
	
	case 69 :
	printf("\nO Valor da Moeda: Fran�a EUR � 5,21 Real brasileiro\n");
	break;
	
	case 70 :
	printf("\nO Valor da Moeda: Gab�o XAF � 0,0079 Real brasileiro\n");
	break;
	
	case 71 :
	printf("\nO Valor da Moeda: G�mbia GMD � 0,088 Real brasileiro\n");
	break;
	 
	case 72 :
	printf("\nO Valor da Moeda: Gana GHS � 0,64 Real brasileiro\n");
	break;
	
	case 73 :
	printf("\nO Valor da Moeda: Ge�rgia GEL � 1,48 Real brasileiro\n");
	break;
	
	case 74 :
	printf("\nO Valor da Moeda: Granada	XCD � 1,75 Real brasileiro\n");
	break;
	
	case 75 :
	printf("\nO Valor da Moeda: Gr�cia EUR � 5,21 Real brasileiro\n");
	break;
	
	case 76 :
	printf("\nO Valor da Moeda: Guatemala GTQ � 0,61 Real brasileiro\n");
	break;
	
	case 77 :
	printf("\nO Valor da Moeda: Guiana GYD � 0,023 Real brasileiro\n");
	break;
	
	case 78 :
	printf("\nO Valor da Moeda: Guin� GNF � 0,00053 Real brasileiro\n");
	break;
	
	case 79 :
	printf("nO Valor da Moedea: Guin� Equatorial XAF � 0,0079 Real brasileiro\n");
	break;
	
	case 80 :
	printf("nO Valor da Moeda: Guin�-Bissau XOF � 0,0079 Real brasileiro\n");
	break;
	
	case 81 :
	printf("\nO Valor da Moeda: Haiti HTG � 0,045 Real brasileiro\n");
	break;
	
	case 82 :
	printf("\nO Valor da Moeda: Honduras HNL � 0,19 Real brasileiro\n");
	break;
	
	case 83 :
	printf("\nO Valor da Moeda: Hungria HUF � 0,014 Real brasileiro\n");
    break;
	
	case 84 :
	printf("\nO Valor da Moeda: I�men YER � 0,019 Real brasileiro\n");
	break;
	
	case 85 :
	printf("\nO Valor da Moeda: Ilhas Marechal USD � 4,74 Real brasileiro\n");
	break;
	
	case 86 :
	printf("\nO Valor da Moeda: �ndia INR � 0,062 Real brasileiro\n");
	break;
	
    case 87 :
	printf("\nO Valor da Moeda: Indon�sia IDR � 0,00033 Real brasileiro\n");
	break;
	
	case 88 :
	printf("\nO Valor da Moeda: Ir�o IRR � 0,00011 Real brasileiro\n");
	break;
	
	case 89 :
	printf("\nO Valor da Moeda: Iraque IQD � 0,0032 Real brasileiro\n");
	break;
	
	case 90 :
	printf("\nO Valor da Moeda: Irlanda EUR � 5,21 Real brasileiro\n");
	break;
	
	case 91 :
	printf("\nO Valor da Moeda: Isl�ndia ISK � 0,037 Real brasileiro\n");
	break;
	
	case 92 :
	printf("\nO Valor da Moeda: Israel ILS � 1,47 Real brasileiro\n");
	break;
	
	case 93 :
	printf("\nO Valor da Moeda: It�lia EUR � 5,21 Real brasileiro\n");
	break;
	
	case 94 :
	printf("\nO Valor da Moeda: Jamaica JMD � 0,031 Real brasileiro\n");
	break;
	
	case 95 :
	printf("\nO Valor da Moeda: Jap�o JPY � 0,039 Real brasileiro\n");
	break;
	
	case 96 :
	printf("\nO Valor da Moeda: Jibuti DJF � 0,027 Real brasileiro\n");
	break;
	
	case 97 :
	printf("\nO Va\lor da Moeda: Jord�nia JOD � 6,68 Real brasileiro\n");
	break;
	
	case 98 :
	printf("\nO Valor da Moeda: Laus LAK � 0,00041 Real brasileiro\n");
	break;
	
	case 99 :
	printf("\nO Valor da Moeda: Lesoto LSL � 0,32 Real brasileiro\n");
	break;
	
	case 100 :
	printf("\nO Valor da Moeda: Let�nia EUR � 5,21 Real brasileiro\n");
	break;
	
	case 101 :
	printf("\nO Valor da Moeda: L�bano LBP � 0,0031 Real brasileiro\n");
	break;
	
	case 102 :
	printf("\nO Valor da Moeda: Lib�ria LRD � 0,031 Real brasileiro\n");
	break;
	
	case 103 :
	printf("\nO Valor da Moeda: L�bia LYD � 1,01 Real brasileiro\n");
	break;
	
	case 104 :
	printf("\nO Valor da Moeda: Listenstaine CHF � 5,09 Real brasileiro\n");
	break;
	
	case 105 :
	printf("\nO Valor da Moeda: Litu�nia EUR � 5,21 Real brasileiro\n");
	break;
	
	case 106 :
	printf("\nO Valor da Moeda: Luxemburgo EUR � 5,21 Real brasileiro\n");
	break;
	
	case 107 :
	printf("\nO Valor da Moeda: Maced�nia do Norte MKD � 0,084 Real brasileiro\n");
	break;
	
	case 108 :
	printf("\nO Valor da Moeda: Madag�scar MGA � 0,0012 Real brasileiro\n");
	break;
	
	case 109 :
	printf("\nO Valor da Moeda: Mal�sia MYR � 1,13 Real brasileiro\n");
	break;
	
	case 110 :
	printf("\nO Valor da Moeda: Mal�ui MWK � 0,0058 Real brasileiro\n");
	break;
	
	case 111 :
	printf("\nO Valor da Moeda: Maldivas MVR � 0,31 Real brasileiro\n");
	break;
	
	case 112 :
	printf("\nO Valor da Moeda: Mali XOF � 0,0079 Real brasileiro\n");
	break;
	
	case 113 :
	printf("\nO Valor da Moeda: Malta EUR � 5,21 Real brasileiro\n");
	break;
	
	case 114 :
	printf("\nO Valor da Moeda: Marrocos MAD � 0,49 Real brasileiro\n");
	break;
	
	case 115 :
	printf("\nO Valor da Moeda: Maur�cia MUR � 0,11 Real brasileiro\n");
	break;
	
	case 116 :
	printf("\nO Valor da Moeda: Maurit�nia MRO � 0,13 Real brasileiro\n");
	break;
	
	case 117 :
	printf("\nO Valor da Moeda: M�xico MXN � 0,24 Real brasileiro\n");
	break;
	
	case 118 :
	printf("\nO Valor da Moeda: Mianmar MMK � 0,0027 Real brasileiro\n");
	break;
	
	case 119 :
	printf("\nO Valor da Moeda: Micron�sia USD � 4,74 Real brasileiro\n");
	break;
	
	case 120 :
	printf("\nO Valor da Moeda: Mo�ambique MZN � 0,074 Real brasileiro\n");
	break;
	
	case 121 :
	printf("\nO Valor da Moeda: Mold�via MDL � 0,26 Real brasileiro\n");
	break;
	
	case 122 :
	printf("\nO Valor da Moeda: M�naco EUR � 5,21 Real brasileiro\n");
	break;
	
	case 123 :
	printf("\nO Valor da Moeda: Mong�lia MNT � 0,0016 BRL\n");
	break;
	
	case 124 :
	printf("\nO Valor da Moeda: Montenegro EUR � 5,21 Real brasileiro\n");
	break;
	
	case 125 :
	printf("\nO Valor da Moeda: Nam�bia NAD � 0,32 Real brasileiro\n");
	break;
	
	case 126 :
	printf("\nO Valor da Moeda: Nauru AUD � 3,56 Real brasileiro\n");
	break;
	
	case 127 :
	printf("\nO Valor da Moeda: Nepal NPR � 0,039 Real brasileiro\n");
	break;
	
	case 128 :
	printf("\nO Valor da Moeda: Nicar�gua NIO � 0,13 Real brasileiro\n");
	break;
	
	case 129 :
	printf("\nO Valor da Moeda: N�ger  XOF � 0,0079 Real brasileiro\n");
	break;
	
	case 130 :
	printf("\nO Valor da Moeda: Nig�ria NGN � 0,011 Real brasileiro\n");
	break;
	
	case 131 :
	printf("\nO Valor da Moeda: Noruega NOK � 0,55 Real brasileiro\n");
	break;
	
	case 132 :
	printf("\nO Valor da Moeda: Nova Zel�ndia NZL � 3,29 Real brasileiro\n");
	break;
	
	case 133 :
	printf("\nO Valor da Moeda: Om� OMR � 12,31 Real brasileiro\n");
	break;
	
	case 134 :
	printf("\nO Valor da Moeda: Pa�ses Baixos EUR � 5,21 Real brasileiro\n");
	break;
	
	case 135 :
	printf("\nO Valor da Moeda: Palau USD � 4,74 Real brasileiro\n");
	break;
	
	case 136 :
	printf("\nO Valor da Moeda: Panam� PAB � 4,73 Real brasileiro\n");
	break;
	
	case 137 :
	printf("\nO Valor da Moeda: Papua Nova Guin� PGK � 1,34 Real brasileiro\n");
	break;
	
	case 138 :
	printf("\nO Valor da Moeda: Paquist�o PKR � 0,026 Real brasileiro\n");
	break;
	
	case 139 :
	printf("\nO Valor da Moeda: Paraguai PYG � 0,00068 Real brasileiro\n");
	break;
	
	case 140 :
	printf("\\nO Valor da Moeda: Peru PEN � 1,26 Real brasileiro\n");
	break;
	
	case 141 :
	printf("\nO Valor da Moeda: Pol�nia PLN � 1,11 Real brasileiro\n");
	break;
	
	case 142 :
	printf("\nO Valor da Moeda: Portugal EUR � 5,21 Real brasileiro\n");
	break;
	
	case 143 :
	printf("\nO Valor da Moeda: Qu�nia KES � 0,041 Real brasileiro\n");
	break;
	
	case 144 :
	printf("\nO Valor da Moeda: Quirguist�o KGS � 0,050 Real brasileiro\n");
	break;
	
	case 145 :
	printf("\nO Valor da Moeda: Quirib�ti AUD � 3,56 Real brasileiro\n");
	break;
	
	case 146 :
	printf("\nO Valor da Moeda: Reino Unido GBP � 6,24 Real brasileiro\n");
	break;
	
	case 147 :
	printf("\nO Valor da Moeda: Rep�blica Centro-Africana XAF � 0,0079 Real brasileiro\n");
	break;
	
	case 148 :
	printf("\nO Valor da Moeda: Rep�blica Checa CZK � 0,21 Real brasileiro\n");
	break;
	
	case 149 :
	printf("\nO Valor da Moeda: Rep�blica Democr�tica do Congo CDF � 0,0024 Real brasileiro\n");
	break;
	
	case 150 :
	printf("\nO Valor da Moeda: Rep�blica Dominicana DOP � 4,74 Real brasileiro\n");
	break;
	
	case 151 :
	printf ("\nO Valor da Moeda: Rom�nia RON � 1,05 Real brasileiro\n");
	break;
	
	case 152 :
	printf("\nO Valor da Moeda: Ruanda RWF � 0,0046 Real brasileiro\n");
	break;
	
	case 153 :
	printf("\nO Valor da Moeda: R�ssia RUB � 0,046 Real brasileiro\n");
	break;
	
	case 154 :
	printf("nO Valor da Moeda: Salom�o SBD � 0,59 Real brasileiro\n");
	break;
	
	case 155 :
	printf("\nO Valor da Moeda: Salvador USD � 4,77 Real brasileiro\n");
	break;
	
	case 156 :
	printf("\nO Valor da Moeda: Samoa WST � 1,85 Real brasileiro\n");
	break;
	
	case 157 :
	printf("\nO Valor da Moeda: Santa L�cia XCD � 1,76 Real brasileiro\n");
	break;
	
	case 158 :
	printf("\nO Valor da Moeda: S�o Crist�v�o e Neves XCD � 1,76 Real brasileiro\n");
	break;
	
	case 159 :
	printf("\nO Valor da Moeda: S�o Marinho EUR � 5,24 Real brasileiro\n");
	break;
	
	case 160 :
	printf("nO Valor da Moeda: S�o Tom� e Pr�ncipe STD � 0,083 Real brasileiro\n");
	break;
	
	case 161 :
	printf("\nO Valor da Moeda: S�o Vicente e Granadinas XCD � 1,76 Real brasileiro\n");
	break;
	
	case 162 :
	printf("\nO Valor da Moeda: Seicheles SCR � 0,33 Real brasileiro\n");
	break;
	
	case 163 :
	printf("\\nO Valor da Moeda: Senegal XOF � 0,00014 Real brasileiro\n");
	break;
	
	case 164 :
	printf("\nO Valor da Moeda: Serra Leoa SLL � 0,00040 Real brasileiro\n");
	break;
	
	case 165 :
	printf("\nO Valor da Moeda: S�rvia RSD � 0,044 Real brasileiro\n");
	break;
	
	case 166 :
	printf("\nO Valor da Moeda: Singapura SGD � 3,50 Real brasileiro\n");
	break;
	
	case 167 :
	printf("\nO Valor da Moeda: S�ria SYP � 0,0019 BRL\n");
	break;
	
	case 168 :
	printf("\nO Valor da Moeda: Som�lia SOS � 0,0081 Real brasileiro\n");
	break;
	
	case 169 :
	printf("\nO Valor da Moeda: Sri Lanca LKR � 0,017 Real brasileiro\n");
	break;
	
	case 170 :
	printf("\nO Valor da Moeda: Sud�o SDG � 0,011 Real brasileiro\n");
	break;
	
	case 171 :
	printf("\nO Valor da Moeda: Sud�o do Sul SSP � 0,00029 Real brasileiro\n");
	break;
	
	case 172 :
	printf("\nO Valor da Moeda: Su�cia SEK � 0,50 Real brasileiro\n");
	break;\
	
	case 173 :
	printf("\nO Valor da Moeda: Su��a CHF � 5,10 Real brasileiro\n");
	break;
	
	case 174 :
	printf("\nO Valor da Moeda: Suriname SRD � 0,23 Real brasileiro\n");
	break;
	
	case 175 :
	printf("\nO Valor da Moeda: Tail�ndia THB � 0,14 Real brasileiro\n");
	break;
	
	case 176 :
	printf("\nO Valor da Moeda: Taiu� TWD � 0,17 Real brasileiro\n");
	break;
	
	case 177 :
	printf("\nO Valor da Moeda: Tajiquist�o TJS � 0,37 Real brasileiro\n");
	break;
	
	case 178 :
	printf("\nO Valor da Moeda: Tanz�nia TZS � 0,0021 Real brasileiro\n");
	break;
	
	case 179 :
	printf("\nO Valor da Moeda: Timor-Leste USD � 4,77 Real brasileiro\n");
	break;
	
	case 180 :
	printf("\nO Valor da Moeda: Togo XOF � 0,0080 Real brasileiro\n");
	break;
	
	case 181 :
	printf("\nO Valor da Moeda: Tonga TOP � 0,003290 Real brasileiro\n");
	break;
	
	case 182 :
	printf("\nO Valor da Moeda: Trindade e Tobago TTD � 0,70 Real brasileiro\n");
	break;
	
	case 183 :
	printf("\nO Valor da Moeda: Tun�sia TND � 1,61 Real brasileiro\n");
	break;
	
	case 184 :
	printf("\nO Valor da Moeda: Turcomenist�o TMT � 1,36 Real brasileiro\n");
	break;
	
	case 185 :
	printf("\nO Valor da Moeda: Turquia TRY � 0,32 Real brasileiro\n");
	break;
	
	case 186 :
	printf("\nO Valorda Moeda: Tuvalu AUD � 3,57 Real brasileiro\n");
	break;
	
	case 187 :
	printf("\nO Valor da Moeda: Ucr�nia UAH � 0,16 Real brasileiro\n");
	break;
	
	case 188 :
	printf("\nO Valor da Moeda: Uganda UGX � 0,0013 Real brasileiro\n");
	break;
	
	case 189 :
	printf("\nO Valor da Moeda: Uruguai UYU � 0,11 Real brasileiro\n");
	break;
	
	case 190 :
	printf("\nO Valor da Moeda: Usbequist�o UZS � 0,00042 Real brasileiro\n");
	break;
	
	case 191 :
	printf("\nO Valor da Moeda: Vanuatu VUV � 0,0426 real brasileiro\n");
	break;
	
	case 192 :
	printf("\nO Valor da Moeda: Vaticano EUR � 5,24 Real brasileiro\n");
	break;
	
	case 193 :
	printf("\nO Valor da Moeda: Venezuela VEF � 0,000010 real brasileiro\n");
	break;
	
	case 194 :
	printf("\nO Valor da Moeda: Vietname VND � 0,00021 Real brasileiro\n");
	break;
	
	case 195 :
	printf("\nO Valor da Moeda: Z�mbia ZMW � 0,27 Real brasileiro\n");
	break;
	
	case 196 :
	printf("\nO Valor da Moeda: Zimb�bue USD � 4,77 Real brasileiro\n");
	break;
	
	default :
	printf("\n ERROR! : insira um valor de n�mero valido Insira um n�mero de 1 a 196.\n");

}
    printf("\n Digite a Tecla 0 Para continuar a Escolher ou aperte Ctrl C Para sair\n");
    printf("\n");
	scanf ("%d", &moedas);
	}while (moedas == 0);

return 0;

}





