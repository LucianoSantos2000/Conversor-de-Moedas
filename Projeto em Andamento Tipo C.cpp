#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <time.h>
/* O Projeto esta sendo feito por luciano..... */
/*
___________________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ 
_________________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ 
__¶_¶__________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶______¶__¶__¶ 
__¶_¶__¶______¶¶¶¶¶¶____¶¶¶¶¶¶____¶¶¶¶¶¶______¶_¶_¶ 
¶_¶_¶_¶______¶¶¶¶¶¶______¶¶¶¶______¶¶¶¶¶¶¶____¶¶¶¶¶ 
_¶¶¶¶¶______¶¶¶¶¶¶¶___O_¶¶¶¶¶__O__¶¶¶¶¶¶¶¶_¶¶¶¶¶¶¶ 
_¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶¶¶____¶¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶___¶¶¶ 
____¶¶____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶____¶¶ 
____¶_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶¶___¶ 
_____¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶ 
__________¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶¶¶ 
___________¶¶¶_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_____¶¶ 
____________¶¶________¶¶¶¶¶¶¶¶¶¶_______¶¶ 
_____________¶¶¶_______________________¶ 
_______________¶¶____¶¶¶¶¶¶¶¶¶¶¶______¶ 
________________¶¶¶_____¶¶¶¶¶¶¶¶¶¶¶__¶ 
___________________¶¶¶_____¶¶¶¶¶¶¶¶¶¶ 
______________________¶¶¶¶¶__¶¶¶¶¶¶¶¶¶ 
_____________________________¶¶¶¶¶¶¶¶¶¶ 
______________________________¶¶¶¶¶¶¶¶¶
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
    printf ("\t3 - Verde Água\tB - Verde Água Claro\n");
    printf ("\t4 - Vermelho\tC - Vermelho Claro\n");
    printf ("\t5 - Roxo\tD - Lilás\n");
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
	printf("\nDigite um Numero de país para saber a cotacao da Moeda em BRL\n");
	printf("\n 1- Afeganistão AFN:\n");
	printf("\n 2- AFrica do sul ZAR:\n");
	printf("\n 3- Albania lek albanês ALL:\n");
	printf("\n 4- Alemanha EUR:\n");
	printf("\n 5- Andorra EUR:\n");
	printf("\n 6- Angola AOA:\n");
	printf("\n 7- Antiga e Barbuda XCD:\n");
	printf("\n 8- Arábia Saudita SAR:\n");
	printf("\n 9- Argelia DZD:\n");
	printf("\n 10- Argetina ARS:\n");
	printf("\n 11- Arménia AMD:\n");
	printf("\n 12- Austrália AUD:\n");
	printf("\n 13- Austria EUR:\n");
	printf("\n 14- Azerbaijão AZN:\n");
	printf("\n 15- Bahamas BSD:\n");
	printf("\n 16- Bangladexe BDT:\n");
	printf("\n 17- Barbados BBD:\n");
	printf("\n 18- Bárem BHD:\n");
	printf("\n 19- Bélgica EUR:\n");
	printf("\n 20- Belize BZD:\n");
	printf("\n 21- Benim XOF:\n");
	printf("\n 22- Bielorrússia BYN\n");
	printf("\n 23- Bolívia BOB:\n");
	printf("\n 24- Bósnia e Herzegovina BAM:\n");
	printf("\n 25- Botsuana BWP BHD:\n");
	printf("\n 26- Brunei BND:\n");
	printf("\n 27- Bulgária BGN\n");
	printf("\n 28- Burquina Faso XOF:\n");
	printf("\n 29- Burúndi BIF:\n");
	printf("\n 30- Butão BTN:\n");
	printf("\n 31- Cabo Verde CVE:\n");
	printf("\n 32- Camarões XAF:\n");
	printf("\n 33- Camboja KHR:\n");
	printf("\n 34- Canadá CAD:\n");
	printf("\n 35- Catar  QAR:\n");
	printf("\n 36- Cazaquistão KZT:\n");
	printf("\n 37- CHADE XAF:\n");
	printf("\n 38- Chile CLP :\n");
	printf("\n 39- China CNY:\n");
	printf("\n 40- Chipre EUR:\n");
	printf("\n 41- Colômbia COP:\n");
	printf("\n 42- Comores KMF:\n");
	printf("\n 43- Congo-Brazzaville XAF:\n");
	printf("\n 44- Coreia do NORTE KPW:\n");
	printf("\n 45- Coreia do Sul kRW:\n");
	printf("\n 46- Cosovo EUR:\n");
	printf("\n 47- Costa do Marfim XOF:\n");
	printf("\n 48- Costa Rica CRC:\n");
    printf("\n 49- Croácia HRK CRC:\n");
	printf("\n 50- Cuaite KWD:\n");
	printf("\n 51- Cuba  CUP:\n");
	printf("\n 52- Dinamarca DKK:\n");
	printf("\n 53- Dominica XCD:\n");
	printf("\n 54- EGITO EGP:\n");
	printf("\n 55- Emirados Árabes Unidos AED:\n");
	printf("\n 56- Equador USD HRK:\n");
	printf("\n 57- Eritreia ERN:\n");
	printf("\n 58- Eslováquia EUR:\n");
	printf("\n 59- Eslovénia  EUR:\n");
	printf("\n 60- Espanha  EUR:\n");
	printf("\n 61- Essuatíni SZL:\n");
	printf("\n 62- Estado da Palestina ILS:\n");
	printf("\n 63- Estados Unidos USD:\n");
	printf("\n 64- Estónia EUR:\n");
	printf("\n 65- Etiópia ETB:\n");
	printf("\n 66- Fiji FJD:\n");
	printf("\n 67- Filipinas PHP:\n");
	printf("\n 68- Finlândia EUR:\n");
	printf("\n 69- França EUR:\n");
	printf("\n 70- Gabão XAF:\n");
	printf("\n 71- Gâmbia GMD:\n");
	printf("\n 72- GANA GHS:\n");
	printf("\n 73- Geórgia GEL:\n");
	printf("\n 74- Granada	XCD:\n");
	printf("\n 75- Grécia EUR:\n");
	printf("\n 76- Guatemala GTQ:\n");
	printf("\n 77- Guiana GYD:\n");
	printf("\n 78- Guiné GNF:\n");
	printf("\n 79- Guiné Equatorial XAF:\n");
	printf("\n 80- Guiné-Bissau XOF:\n");
	printf("\n 81- Haiti HTG:\n");
	printf("\n 82- Honduras HNL:\n");
	printf("\n 83- Hungria HUF:\n");
	printf("\n 84- Iémen YER:\n");
	printf("\n 85- Ilhas Marechal USD:\n");
	printf("\n 86- Índia INR:\n");
	printf("\n 87- Indonésia IDR:\n");
	printf("\n 88- Irão IRR:\n");
	printf("\n 89- Iraque IQD:\n");
	printf("\n 90- Irlanda EUR:\n");
	printf("\n 91- Islândia ISK:\n");
	printf("\n 92- Israel ILS:\n");
	printf("\n 93- Itália EUR:\n");
	printf("\n 94- Jamaica JMD:\n");
	printf("\n 95- Japão JPY:\n");
	printf("\n 96- Jibuti DJF\n");
	printf("\n 97- Jordânia JOD:\n");
	printf("\n 98- Laus LAK:\n");
	printf("\n 99- LESOTO LSL:\n");
	printf("\n 100- Letónia EUR:\n");
	printf("\n 101- Líbano LBP:\n");
	printf("\n 102- Libéria LRD:\n");
	printf("\n 103- Líbia LYD:\n");
	printf("\n 104- Listenstaine CHF:\n");
	printf("\n 105- Lituânia EUR:\n");
	printf("\n 106- LUXEMBURGO EUR:\n");
	printf("\n 107- Macedónia do Norte MKD:\n");
	printf("\n 108- Madagáscar MGA:\n");
	printf("\n 109- Malásia MYR:\n");
	printf("\n 110- Maláui MWK:\n");
	printf("\n 111- Maldivas MVR:\n");
	printf("\n 112- Mali XOF:\n");
	printf("\n 113- Malta EUR:\n");
	printf("\n 114- Marrocos MAD:\n");
	printf("\n 115- Maurícia MUR:\n");
	printf("\n 116- Mauritânia MRO:\n");
	printf("\n 117- México MXN:\n");
	printf("\n 118- Mianmar MMK:\n");
	printf("\n 119- Micronésia USD:\n");
	printf("\n 120- Moçambique MZN:\n");
	printf("\n 121- Moldávia MDL:\n");
	printf("\n 122- Mónaco EUR:\n");
	printf("\n 123- Mongólia MNT:\n");
	printf("\n 124- Montenegro EUR:\n");
	printf("\n 125- Namíbia NAD:\n");
	printf("\n 126- Nauru AUD:\n");
	printf("\n 127- Nepal NPR:\n");
	printf("\n 128- Nicarágua NIO:\n");
	printf("\n 129- NÍGER XOF:\n");
	printf("\n 130- Nigéria NGN:\n");
	printf("\n 131- Noruega NOK:\n");
	printf("\n 132- Nova Zelândia NZL:\n");
	printf("\n 133- Omã OMR:\n");
	printf("\n 134- Países Baixos EUR:\n");
	printf("\n 135- Palau USD:\n");
	printf("\n 136- Panamá PAB:\n");
	printf("\n 137- Papua Nova Guiné PGK:\n");
	printf("\n 138- Paquistão PKR:\n");
	printf("\n 139- Paraguai PYG:\n");
	printf("\n 140- Peru PEN:\n");
	printf("\n 141- Polónia PLN:\n");
	printf("\n 142- Portugal EUR:\n");
	printf("\n 143- Quénia KES:\n");
	printf("\n 144- Quirguistão KGS:\n");
	printf("\n 145- Quiribáti AUD:\n");
	printf("\n 146- Reino Unido GBP:\n");
	printf("\n 147- República Centro-Africana XAF:\n");
	printf("\n 148- República Checa CZK:\n");
	printf("\n 149- República Democrática do Congo CDF:\n");
	printf("\n 150- República Dominicana DOP:\n");
	printf("\n 151- Roménia RON:\n");
	printf("\n 152- Ruanda RWF:\n");
	printf("\n 153- Rússia RUB:\n");
	printf("\n 154- Salomão SBD:\n");
	printf("\n 155- Salvador USD:\n");
	printf("\n 156- Samoa WST:\n");
	printf("\n 157- Santa Lúcia XCD:\n");
	printf("\n 158- São Cristóvão e Neves XCD:\n");
	printf("\n 159- São Marinho EUR:\n");
	printf("\n 160- São Tomé e Príncipe STD:\n");
	printf("\n 161- São Vicente e Granadinas XCD\:\n");
	printf("\n 162- Seicheles SCR:\n");
	printf("\n 163- Senegal XOF:\n");
	printf("\n 164- Serra Leoa SLL:\n");
	printf("\n 165- Sérvia RSD:\n");
	printf("\n 166- Singapura SGD:\n");
	printf("\n 167- Síria SYP:\n");
	printf("\n 168- Somália SOS:\n");
	printf("\n 169- Sri Lanca LKR:\n");
	printf("\n 170- Sudão SDG:\n");
	printf("\n 171- Sudão do Sul SSP:\n");
	printf("\n 172- Sécia SEK:\n");
	printf("\n 173- Suíça CHF:\n");
	printf("\n 174- Suriname SRD:\n");
	printf("\n 175- Tailândia THB:\n");
	printf("\n 176- Taiuã TWD:\n");
	printf("\n 177- Tajiquistão TJS:\n");
	printf("\n 178- Tanzânia TZS:\n");
	printf("\n 179- Timor-Leste:\n");
	printf("\n 180- Togo XOF:\n");
	printf("\n 181- TONGA TOP:\n");
	printf("\n 182- Trindade e Tobago:\n");
	printf("\n 183- Tunísia TND:\n");
	printf("\n 184- Turcomenistão:\n");
	printf("\n 185- Turquia TRY:\n");
	printf("\n 186- Tuvalu AUD:\n");\
	printf("\n 187- Ucrânia UAH:\n");
	printf("\n 188- Uganda UGX:\n");
	printf("\n 189- Uruguai UYU:\n");
	printf("\n 190- Usbequistão:\n");
	printf("\n 191- Vanuatu VUV:\n");
	printf("\n 192- Vaticano EUR:\n");
	printf("\n 193- Venezuela VEF:\n");
	printf("\n 194- Vietname VND:\n");
	printf("\n 195- Zâmbia ZMW:\n");
	printf("\n 196- Zimbábue USD:\n");
	printf("\n Digite um número entre 1 a 196:\n");
	printf("\n");
	scanf("%d", &moedas);
	
	switch(moedas) {
	
	case 1 :
	printf("\nO Valor da Moeda: Afeganistão AFN é 0,054 Real brasileiro\n");
	break;
	
	case 2 :
	printf("\nO Valor da moeda: Africa do sul ZAR é 0,33 Real brasileiro\n");
	break;
	
	case 3 :
	printf("\nO Valor da moeda: Albania Lek Albãnes ALL é 0,043 Real brasileiro\n");
	break;
	
	case 4 :
	printf("\nO Valor da moeda: Alemanha EUR é 5,21 Real brasileiro\n");
	break;
	
	case 5 :
	printf("\nO Valor da moeda: Andorra EUR é 5,21 Real brasileiro\n");
	break;
	
	case 6 :
	printf("\nO Valor da moeda: Angola AOA é 0,010 Real brasileiro\n");
	break;
	
	case 7 :
	printf("\nO Valor da moeda: Antiga e barbuda XCD é 1,76 Real brasileiro\n");
	break;
	
	case 8 :
	printf("\nO Valor da moeda: Arábia saudita SAR é 1,26 Real brasileiro\n");
	break;
	
	case 9 :
	printf("\nO Valor da moeda: Argelia DZD é 0,033 Real brasileiro\n");
	break;
	
	case 10 :
	printf("\nO Valor da moeda: Argetina ARS é 0,043 Real brasileiro\n");
	break;
	
	case 11 :
	printf("\nO Valor da moeda: Arménia AMD é 0,0097 Real brasileiro\n");
	break;
	
	case 12 :
	printf("\nO valor da moeda: Austrália AUD é 3,56 Real brasileiro\n");
	break;
	
	case 13 :
	printf("\nO Valor da moeda: Austria EUR é 5,21 Real brasileiro\n");
	break;
	
	case 14 :
	printf("\nO Valor da moeda: Azerbaijão AZN é 2,79 Real brasileiro\n");
	break;
	
	case 15 :
	printf("\nO Valor da moeda: Bahamas BSD é 4,73 Real brasileiro\n");
	break;
	
	case 16 :
	printf("\nO Valor da moeda: Bangladexe BDT é 0,055 Real brasileiro\n");
	break;
	
	case 17 :
	printf("\nO Valor da moeda: Barbados BBD é 2,34 Real brasileiro\n");
	break;
	
	case 18 :
	printf ("\nO Valor da moeda: Bárem BHD é 12,56 Real brasileiro\n");
	break;

	case 19 :
	printf("\nO Valor da moeda: Bélgica EUR é 5,21 Real brasileiro\n");
	break;
	
	case 20 :
	printf("\nO Valor da moeda: Belize BZD é 2,35 Real brasileiro\n");
	break;
	
	case 21 :
	printf("\nO Valor da moeda: Benim XOF é 0,0079 Real brasileiro\n");
	break;
	
	case 22 :
	printf("\nO Valor da moeda: Bielorrússia BYN é 1,45 Real brasileiro\n");
	break;
	
	case 23 :
	printf ("\nO Valor da moeda: Bolívia BOB é 0,69 Real brasileiro\n");
	break;
	
	case 24 :
	printf("\nO Valor da moeda: Bósnia e Herzegovina BAM é 2,66 Real brasileiro\n");
	break;
	
	case 25 :
	printf("\nO Valor da moeda: Botsuana BWP é 0,41 Real brasileiro\n");
	break;
	
	case 26 :
	printf("\nO Valor da moeda: Brunei BND é 3,49 Real brasileiro\n");
	break;
		
	case 27 :
	printf("\nO Valor da moeda: Bulgária BGN é 2,66 Real brasileiro\n");
    break;
    
	case 28 :
	printf("\nO Valor da moeda: Burquina Faso XOF é 0,0079 Real brasileiro\n");
	break;
	
	case 29 :
	printf("\nO Valor da moeda: Burúndi BIF é 0,0023 Real brasileiro\n");
	break;
	
	case 30 :
	printf("\nO Valor da moeda: Butão BTN é 0,062 Real brasileiro\n");
	break;\
	
	case 31 :
	printf("\nO Valor da moeda: Cabo Verde CVE é 0,047 Real brasileiro\n");
	break;
	
	case 32 :
	printf("\nO Valor da moeda: Camarões XAF é 0,0079 Real brasileiro\n");
	break;
	
	case 33 :
	printf("\nO Valor da moeda: Camboja KHR é 0,0012 Real brasileiro\n");
	break;
	
	case 34 :
	printf("\nO Valor da moeda: Canadá CAD é 3,78 Real brasileiro\n");
	break;
	
	case 35 :
	printf("\nO Valor da moeda: Catar  QAR é 1,30 Real brasileiro\n");
	break;
	
	case 36 :
	printf("\nO valor da moeda: Cazaquistão KZT é 0,0096 Real brasileiro\n");
	break;
	
	case 37 :
	printf("\nO valor da moeda: Chade XAF é 0,0079 Real brasileiro\n");
	break;
	
	case 38 :
	printf("\nO Valor da moeda: Chile CLP é 0,0061 Real brasileiro\n");
	break;
	
	case 39 :
	printf("\nO Valor da moeda: China CNY é 0,75 Real brasileiro\n");
	break;
	
	case 40 :
	printf("\nO Valor da moeda: ´Chipre EUR´ é 5,21 Real brasileiro\n");
	break;
	
	case 41 :
	printf("\nO Valor da moeda: Colômbia COP é 0,0012 Real brasileiro\n");
	break;
	
	case 42 :
	printf("\nO Valor da moeda: Comores KMF é 0,011 Real brasileiro\n");
	break;
	
	case 43 :
	printf("\nO Valor da moeda: Congo-Brazzaville XAF é 0,0079 Real brasileiro\n");
	break;
	
	case 44 :
	printf("\nO Valor da moeda: Coreia do Norte KPW é 0,0052 Real brasileiro\n");
	break;
	
	case 45 :
	printf("\nO Valor da moeda: Coreia do Sul KRW é 0,0039 Real brasileiro\n");
	break;
	
	case 46 :
	printf("\nO valor da moeda: Cosovo EUR é 5,21 Real brasileiro\n");
	break;
	
	case 47 :
	printf("\nO Valor da moeda: Costa do Marfim XOF é 0,0079 Real brasileiro\n");
	break;
	
	case 48 :
	printf("\nO Valor da moeda: Costa Rica CRC é 0,0073 Real brasileiro\n");
	break;
	
	case 49 :
	printf("\nO Valor da moeda: Croácia HRK é 0,69 Real brasileiro\n");
	break;

	case 50 :
	printf("\nO Valor Da Moeda: Cuaite KWD é 15,57 Real brasileiro\n");
	break;
	
	case 51 :
	printf("\nO Valor da Moeda: Cuba CUP é 0,20 Real brasileiro\n");
	break;
	
	case 52 :
	printf("\nO Valor da Moeda: Dinamarca DKK é 0,70 Real brasileiro\n");
	break;
	
	case 53 :
	printf("\nO Valor da Moeda: Dominica XCD é 1,76 Real brasileiro\n");
	break;
	
	case 54 :
	printf("\nO Valor da Moeda: Egito EGP é 0,26 Real brasileiro\n");
	break;
	
	case 55 :
	printf("\nO Valor da Moeda: Emirados Árabes Unidos AED é 1,29 Real brasileiro\n");
	break;
	
	case 56 :
	printf("\nO Valor da Moeda: Equador USD é 4,74 Real brasileiro\n");
	break;
	
	case 57 :
	printf("\nO Valor da Moeda: Eritreia ERN é 26,47 Real brasileiro\n");
	break;
	
	case 58 :
	printf("\nO Valor da Moeda: Eslováquia EUR é 5,21 Real brasileiro\n");
	break;
	
	case 59 :
	printf("\nO Valor da Moeda: Eslovénia  EUR é 5,21 Real brasileiro\n");
	break;
	
	case 60 :
	printf("\nO Valor da Moeda: Espanha  EUR é 5,21 Real brasileiro\n");
	break;
	
	case 61 :
	printf("\nO Valor da Moeda: Essuatíni SZL é 0,32 Real brasileiro\n");
	break;
	
	case 62 :
	printf("\nO Valor da Moeda: Estado da Palestina ILS é 1,47 Real brasileiro\n");
	break;
	
	case 63 :
	printf("\nO Valor da Moeda: Estados Unidos USD é 4,74 Real brasileiro\n");
	break;
	
	case 64 :
	printf("\nO Valor da Moeda: Estónia EUR é 5,21 Real brasileiro\n");
	break;
	
	case 65 :
	printf("\nO Valor da Moeda: Etiópia ETB é 0,092 Real brasileiro\n");
	break;
	
	case 66 :
	printf("\nO Valor da Moeda: Fiji FJD é 2,27 Real brasileiro\n");
	break;
	
	case 67 :
	printf("\nO Valor da Moeda: Filipinas PHP é 0,091 Real brasileiro\n");
	break;
	
	case 68 :
	printf("\nO Valor da Moeda: Finlândia EUR é 5,21 Real brasileiro\n");
	break;
	
	case 69 :
	printf("\nO Valor da Moeda: França EUR é 5,21 Real brasileiro\n");
	break;
	
	case 70 :
	printf("\nO Valor da Moeda: Gabão XAF é 0,0079 Real brasileiro\n");
	break;
	
	case 71 :
	printf("\nO Valor da Moeda: Gâmbia GMD é 0,088 Real brasileiro\n");
	break;
	 
	case 72 :
	printf("\nO Valor da Moeda: Gana GHS é 0,64 Real brasileiro\n");
	break;
	
	case 73 :
	printf("\nO Valor da Moeda: Geórgia GEL é 1,48 Real brasileiro\n");
	break;
	
	case 74 :
	printf("\nO Valor da Moeda: Granada	XCD é 1,75 Real brasileiro\n");
	break;
	
	case 75 :
	printf("\nO Valor da Moeda: Grécia EUR é 5,21 Real brasileiro\n");
	break;
	
	case 76 :
	printf("\nO Valor da Moeda: Guatemala GTQ é 0,61 Real brasileiro\n");
	break;
	
	case 77 :
	printf("\nO Valor da Moeda: Guiana GYD é 0,023 Real brasileiro\n");
	break;
	
	case 78 :
	printf("\nO Valor da Moeda: Guiné GNF é 0,00053 Real brasileiro\n");
	break;
	
	case 79 :
	printf("nO Valor da Moedea: Guiné Equatorial XAF é 0,0079 Real brasileiro\n");
	break;
	
	case 80 :
	printf("nO Valor da Moeda: Guiné-Bissau XOF é 0,0079 Real brasileiro\n");
	break;
	
	case 81 :
	printf("\nO Valor da Moeda: Haiti HTG é 0,045 Real brasileiro\n");
	break;
	
	case 82 :
	printf("\nO Valor da Moeda: Honduras HNL é 0,19 Real brasileiro\n");
	break;
	
	case 83 :
	printf("\nO Valor da Moeda: Hungria HUF é 0,014 Real brasileiro\n");
    break;
	
	case 84 :
	printf("\nO Valor da Moeda: Iémen YER é 0,019 Real brasileiro\n");
	break;
	
	case 85 :
	printf("\nO Valor da Moeda: Ilhas Marechal USD é 4,74 Real brasileiro\n");
	break;
	
	case 86 :
	printf("\nO Valor da Moeda: Índia INR é 0,062 Real brasileiro\n");
	break;
	
    case 87 :
	printf("\nO Valor da Moeda: Indonésia IDR é 0,00033 Real brasileiro\n");
	break;
	
	case 88 :
	printf("\nO Valor da Moeda: Irão IRR é 0,00011 Real brasileiro\n");
	break;
	
	case 89 :
	printf("\nO Valor da Moeda: Iraque IQD é 0,0032 Real brasileiro\n");
	break;
	
	case 90 :
	printf("\nO Valor da Moeda: Irlanda EUR é 5,21 Real brasileiro\n");
	break;
	
	case 91 :
	printf("\nO Valor da Moeda: Islândia ISK é 0,037 Real brasileiro\n");
	break;
	
	case 92 :
	printf("\nO Valor da Moeda: Israel ILS é 1,47 Real brasileiro\n");
	break;
	
	case 93 :
	printf("\nO Valor da Moeda: Itália EUR é 5,21 Real brasileiro\n");
	break;
	
	case 94 :
	printf("\nO Valor da Moeda: Jamaica JMD é 0,031 Real brasileiro\n");
	break;
	
	case 95 :
	printf("\nO Valor da Moeda: Japão JPY é 0,039 Real brasileiro\n");
	break;
	
	case 96 :
	printf("\nO Valor da Moeda: Jibuti DJF é 0,027 Real brasileiro\n");
	break;
	
	case 97 :
	printf("\nO Va\lor da Moeda: Jordânia JOD é 6,68 Real brasileiro\n");
	break;
	
	case 98 :
	printf("\nO Valor da Moeda: Laus LAK é 0,00041 Real brasileiro\n");
	break;
	
	case 99 :
	printf("\nO Valor da Moeda: Lesoto LSL é 0,32 Real brasileiro\n");
	break;
	
	case 100 :
	printf("\nO Valor da Moeda: Letónia EUR é 5,21 Real brasileiro\n");
	break;
	
	case 101 :
	printf("\nO Valor da Moeda: Líbano LBP é 0,0031 Real brasileiro\n");
	break;
	
	case 102 :
	printf("\nO Valor da Moeda: Libéria LRD é 0,031 Real brasileiro\n");
	break;
	
	case 103 :
	printf("\nO Valor da Moeda: Líbia LYD é 1,01 Real brasileiro\n");
	break;
	
	case 104 :
	printf("\nO Valor da Moeda: Listenstaine CHF é 5,09 Real brasileiro\n");
	break;
	
	case 105 :
	printf("\nO Valor da Moeda: Lituânia EUR é 5,21 Real brasileiro\n");
	break;
	
	case 106 :
	printf("\nO Valor da Moeda: Luxemburgo EUR é 5,21 Real brasileiro\n");
	break;
	
	case 107 :
	printf("\nO Valor da Moeda: Macedónia do Norte MKD é 0,084 Real brasileiro\n");
	break;
	
	case 108 :
	printf("\nO Valor da Moeda: Madagáscar MGA é 0,0012 Real brasileiro\n");
	break;
	
	case 109 :
	printf("\nO Valor da Moeda: Malásia MYR é 1,13 Real brasileiro\n");
	break;
	
	case 110 :
	printf("\nO Valor da Moeda: Maláui MWK é 0,0058 Real brasileiro\n");
	break;
	
	case 111 :
	printf("\nO Valor da Moeda: Maldivas MVR é 0,31 Real brasileiro\n");
	break;
	
	case 112 :
	printf("\nO Valor da Moeda: Mali XOF é 0,0079 Real brasileiro\n");
	break;
	
	case 113 :
	printf("\nO Valor da Moeda: Malta EUR é 5,21 Real brasileiro\n");
	break;
	
	case 114 :
	printf("\nO Valor da Moeda: Marrocos MAD é 0,49 Real brasileiro\n");
	break;
	
	case 115 :
	printf("\nO Valor da Moeda: Maurícia MUR é 0,11 Real brasileiro\n");
	break;
	
	case 116 :
	printf("\nO Valor da Moeda: Mauritânia MRO é 0,13 Real brasileiro\n");
	break;
	
	case 117 :
	printf("\nO Valor da Moeda: México MXN é 0,24 Real brasileiro\n");
	break;
	
	case 118 :
	printf("\nO Valor da Moeda: Mianmar MMK é 0,0027 Real brasileiro\n");
	break;
	
	case 119 :
	printf("\nO Valor da Moeda: Micronésia USD é 4,74 Real brasileiro\n");
	break;
	
	case 120 :
	printf("\nO Valor da Moeda: Moçambique MZN é 0,074 Real brasileiro\n");
	break;
	
	case 121 :
	printf("\nO Valor da Moeda: Moldávia MDL é 0,26 Real brasileiro\n");
	break;
	
	case 122 :
	printf("\nO Valor da Moeda: Mónaco EUR é 5,21 Real brasileiro\n");
	break;
	
	case 123 :
	printf("\nO Valor da Moeda: Mongólia MNT é 0,0016 BRL\n");
	break;
	
	case 124 :
	printf("\nO Valor da Moeda: Montenegro EUR é 5,21 Real brasileiro\n");
	break;
	
	case 125 :
	printf("\nO Valor da Moeda: Namíbia NAD é 0,32 Real brasileiro\n");
	break;
	
	case 126 :
	printf("\nO Valor da Moeda: Nauru AUD é 3,56 Real brasileiro\n");
	break;
	
	case 127 :
	printf("\nO Valor da Moeda: Nepal NPR é 0,039 Real brasileiro\n");
	break;
	
	case 128 :
	printf("\nO Valor da Moeda: Nicarágua NIO é 0,13 Real brasileiro\n");
	break;
	
	case 129 :
	printf("\nO Valor da Moeda: Níger  XOF é 0,0079 Real brasileiro\n");
	break;
	
	case 130 :
	printf("\nO Valor da Moeda: Nigéria NGN é 0,011 Real brasileiro\n");
	break;
	
	case 131 :
	printf("\nO Valor da Moeda: Noruega NOK é 0,55 Real brasileiro\n");
	break;
	
	case 132 :
	printf("\nO Valor da Moeda: Nova Zelândia NZL é 3,29 Real brasileiro\n");
	break;
	
	case 133 :
	printf("\nO Valor da Moeda: Omã OMR é 12,31 Real brasileiro\n");
	break;
	
	case 134 :
	printf("\nO Valor da Moeda: Países Baixos EUR é 5,21 Real brasileiro\n");
	break;
	
	case 135 :
	printf("\nO Valor da Moeda: Palau USD é 4,74 Real brasileiro\n");
	break;
	
	case 136 :
	printf("\nO Valor da Moeda: Panamá PAB é 4,73 Real brasileiro\n");
	break;
	
	case 137 :
	printf("\nO Valor da Moeda: Papua Nova Guiné PGK é 1,34 Real brasileiro\n");
	break;
	
	case 138 :
	printf("\nO Valor da Moeda: Paquistão PKR é 0,026 Real brasileiro\n");
	break;
	
	case 139 :
	printf("\nO Valor da Moeda: Paraguai PYG é 0,00068 Real brasileiro\n");
	break;
	
	case 140 :
	printf("\\nO Valor da Moeda: Peru PEN é 1,26 Real brasileiro\n");
	break;
	
	case 141 :
	printf("\nO Valor da Moeda: Polónia PLN é 1,11 Real brasileiro\n");
	break;
	
	case 142 :
	printf("\nO Valor da Moeda: Portugal EUR é 5,21 Real brasileiro\n");
	break;
	
	case 143 :
	printf("\nO Valor da Moeda: Quénia KES é 0,041 Real brasileiro\n");
	break;
	
	case 144 :
	printf("\nO Valor da Moeda: Quirguistão KGS é 0,050 Real brasileiro\n");
	break;
	
	case 145 :
	printf("\nO Valor da Moeda: Quiribáti AUD é 3,56 Real brasileiro\n");
	break;
	
	case 146 :
	printf("\nO Valor da Moeda: Reino Unido GBP é 6,24 Real brasileiro\n");
	break;
	
	case 147 :
	printf("\nO Valor da Moeda: República Centro-Africana XAF é 0,0079 Real brasileiro\n");
	break;
	
	case 148 :
	printf("\nO Valor da Moeda: República Checa CZK é 0,21 Real brasileiro\n");
	break;
	
	case 149 :
	printf("\nO Valor da Moeda: República Democrática do Congo CDF é 0,0024 Real brasileiro\n");
	break;
	
	case 150 :
	printf("\nO Valor da Moeda: República Dominicana DOP é 4,74 Real brasileiro\n");
	break;
	
	case 151 :
	printf ("\nO Valor da Moeda: Roménia RON é 1,05 Real brasileiro\n");
	break;
	
	case 152 :
	printf("\nO Valor da Moeda: Ruanda RWF é 0,0046 Real brasileiro\n");
	break;
	
	case 153 :
	printf("\nO Valor da Moeda: Rússia RUB é 0,046 Real brasileiro\n");
	break;
	
	case 154 :
	printf("nO Valor da Moeda: Salomão SBD é 0,59 Real brasileiro\n");
	break;
	
	case 155 :
	printf("\nO Valor da Moeda: Salvador USD é 4,77 Real brasileiro\n");
	break;
	
	case 156 :
	printf("\nO Valor da Moeda: Samoa WST é 1,85 Real brasileiro\n");
	break;
	
	case 157 :
	printf("\nO Valor da Moeda: Santa Lúcia XCD é 1,76 Real brasileiro\n");
	break;
	
	case 158 :
	printf("\nO Valor da Moeda: São Cristóvão e Neves XCD é 1,76 Real brasileiro\n");
	break;
	
	case 159 :
	printf("\nO Valor da Moeda: São Marinho EUR é 5,24 Real brasileiro\n");
	break;
	
	case 160 :
	printf("nO Valor da Moeda: São Tomé e Príncipe STD é 0,083 Real brasileiro\n");
	break;
	
	case 161 :
	printf("\nO Valor da Moeda: São Vicente e Granadinas XCD é 1,76 Real brasileiro\n");
	break;
	
	case 162 :
	printf("\nO Valor da Moeda: Seicheles SCR é 0,33 Real brasileiro\n");
	break;
	
	case 163 :
	printf("\\nO Valor da Moeda: Senegal XOF é 0,00014 Real brasileiro\n");
	break;
	
	case 164 :
	printf("\nO Valor da Moeda: Serra Leoa SLL é 0,00040 Real brasileiro\n");
	break;
	
	case 165 :
	printf("\nO Valor da Moeda: Sérvia RSD é 0,044 Real brasileiro\n");
	break;
	
	case 166 :
	printf("\nO Valor da Moeda: Singapura SGD é 3,50 Real brasileiro\n");
	break;
	
	case 167 :
	printf("\nO Valor da Moeda: Síria SYP é 0,0019 BRL\n");
	break;
	
	case 168 :
	printf("\nO Valor da Moeda: Somália SOS é 0,0081 Real brasileiro\n");
	break;
	
	case 169 :
	printf("\nO Valor da Moeda: Sri Lanca LKR é 0,017 Real brasileiro\n");
	break;
	
	case 170 :
	printf("\nO Valor da Moeda: Sudão SDG é 0,011 Real brasileiro\n");
	break;
	
	case 171 :
	printf("\nO Valor da Moeda: Sudão do Sul SSP é 0,00029 Real brasileiro\n");
	break;
	
	case 172 :
	printf("\nO Valor da Moeda: Suécia SEK é 0,50 Real brasileiro\n");
	break;\
	
	case 173 :
	printf("\nO Valor da Moeda: Suíça CHF é 5,10 Real brasileiro\n");
	break;
	
	case 174 :
	printf("\nO Valor da Moeda: Suriname SRD é 0,23 Real brasileiro\n");
	break;
	
	case 175 :
	printf("\nO Valor da Moeda: Tailândia THB é 0,14 Real brasileiro\n");
	break;
	
	case 176 :
	printf("\nO Valor da Moeda: Taiuã TWD é 0,17 Real brasileiro\n");
	break;
	
	case 177 :
	printf("\nO Valor da Moeda: Tajiquistão TJS é 0,37 Real brasileiro\n");
	break;
	
	case 178 :
	printf("\nO Valor da Moeda: Tanzânia TZS é 0,0021 Real brasileiro\n");
	break;
	
	case 179 :
	printf("\nO Valor da Moeda: Timor-Leste USD é 4,77 Real brasileiro\n");
	break;
	
	case 180 :
	printf("\nO Valor da Moeda: Togo XOF é 0,0080 Real brasileiro\n");
	break;
	
	case 181 :
	printf("\nO Valor da Moeda: Tonga TOP é 0,003290 Real brasileiro\n");
	break;
	
	case 182 :
	printf("\nO Valor da Moeda: Trindade e Tobago TTD é 0,70 Real brasileiro\n");
	break;
	
	case 183 :
	printf("\nO Valor da Moeda: Tunísia TND é 1,61 Real brasileiro\n");
	break;
	
	case 184 :
	printf("\nO Valor da Moeda: Turcomenistão TMT é 1,36 Real brasileiro\n");
	break;
	
	case 185 :
	printf("\nO Valor da Moeda: Turquia TRY é 0,32 Real brasileiro\n");
	break;
	
	case 186 :
	printf("\nO Valorda Moeda: Tuvalu AUD é 3,57 Real brasileiro\n");
	break;
	
	case 187 :
	printf("\nO Valor da Moeda: Ucrânia UAH é 0,16 Real brasileiro\n");
	break;
	
	case 188 :
	printf("\nO Valor da Moeda: Uganda UGX é 0,0013 Real brasileiro\n");
	break;
	
	case 189 :
	printf("\nO Valor da Moeda: Uruguai UYU é 0,11 Real brasileiro\n");
	break;
	
	case 190 :
	printf("\nO Valor da Moeda: Usbequistão UZS é 0,00042 Real brasileiro\n");
	break;
	
	case 191 :
	printf("\nO Valor da Moeda: Vanuatu VUV é 0,0426 real brasileiro\n");
	break;
	
	case 192 :
	printf("\nO Valor da Moeda: Vaticano EUR é 5,24 Real brasileiro\n");
	break;
	
	case 193 :
	printf("\nO Valor da Moeda: Venezuela VEF é 0,000010 real brasileiro\n");
	break;
	
	case 194 :
	printf("\nO Valor da Moeda: Vietname VND é 0,00021 Real brasileiro\n");
	break;
	
	case 195 :
	printf("\nO Valor da Moeda: Zâmbia ZMW é 0,27 Real brasileiro\n");
	break;
	
	case 196 :
	printf("\nO Valor da Moeda: Zimbábue USD é 4,77 Real brasileiro\n");
	break;
	
	default :
	printf("\n ERROR! : insira um valor de número valido Insira um número de 1 a 196.\n");

}
    printf("\n Digite a Tecla 0 Para continuar a Escolher ou aperte Ctrl C Para sair\n");
    printf("\n");
	scanf ("%d", &moedas);
	}while (moedas == 0);

return 0;

}





