#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
    
    
    //Frutas

char nome1[40] ="c a r a m b o l a       ";  // car=9
char nome2[40] ="m e l a n c i a         ";   // car= 8
char nome3[40] ="n e c t a r i n a       "; // car = 9
char nome4[40] ="d a m a s c o           "; // car = 7 
char nome5[40] ="c e r e j a             "; //car = 6 
char nome6[40] ="a m e i x a             "; //car = 6
char nome7[40] ="p e s s e g o           "; // car =7 
char nome8[40] ="a m o r a               "; //car=5
char nome9[40] ="f r a n b o e s a       "; //car=9
char nome10[40] ="a b a c a t e          "; //car=7 
char nome11[40] ="c a q u i              "; //car=5 
char nome12[40] ="m a r a c u j a        "; //car=8
char nome13[40] ="j a b u t i c a b a    "; //car=10
char nome14[40] ="g o i a b a            "; //car=6
char nome15[40] ="m a n g a              "; //car=5
char nome16[40] ="g r a v i o l a        "; //car=8
char nome17[40] ="t a m a r i n d o      "; //car=9
char nome18[40] ="m a r m e l o          "; //car=7 
char nome19[40] ="a m a r u l a          "; //car=7 
char nome20[40] ="p i t a n g a          "; //car=7


//Aparelhos domésticos

char nome21[40] ="c o m p u t a d o r    "; //car=10
char nome22[40] ="t e l e v i s a o      "; //car=9
char nome23[40] ="r a d i o              "; //car=5
char nome24[40] ="b a r b e a d o r      "; //car=14
char nome25[40] ="v e n t i l a d o r    "; //car=10
char nome26[40] ="b a t e d e i r a      "; //car=9
char nome27[40] ="f o g a o              "; //car=5 
char nome28[40] ="g e l a d e i r a      "; //car=9
char nome29[40] ="f r e e z e r          "; //car=7
char nome30[40] ="t a n q u i n h o      "; //car=9 
char nome31[40] ="v i d e o              "; //car=5
char nome32[40] ="c h u v e i r o        "; //car=8
char nome33[40] ="a b a j u r            "; //car=6
char nome34[40] ="l u m i n a r i a      "; //car=9
char nome35[40] ="l a n t e r n a        "; //car=8
char nome36[40] ="a s p i r a d o r      "; //car=9
char nome37[40] ="c a f e t e i r a      "; //car=9
char nome38[40] ="s e c a d o r          "; //car=7
char nome39[40] ="m i c r o o n d a s    "; //car=10 
char nome40[40] ="t e l e f o n e        "; //car=8


//Animais

char nome41[40] ="c a v a l o            "; //car=6
char nome42[40] ="b u r r o              "; //car=5 
char nome43[40] ="c a b r a              "; //car=5
char nome44[40] ="b a l e i a            "; //car=6
char nome45[40] ="c a m e l o            "; //car=6
char nome46[40] ="c o e l h o            "; //car=6
char nome47[40] ="c r o c o d i l o      "; //car=9
char nome48[40] ="c o b r a              "; //car=5
char nome49[40] ="f o r m i g a          "; //car=7
char nome50[40] ="g o l f i n h o        "; //car=8
char nome51[40] ="j a g u a t i r i c a  "; //car=11
char nome52[40] ="j u m e n t o          "; //car=7
char nome53[40] ="m a r m o t a          "; //car=7
char nome54[40] ="r i n o c e r o n t e  "; //car=11
char nome55[40] ="t a r t a r u g a      "; //car=9
char nome56[40] ="e l e f a n t e        "; //car=8
char nome57[40] ="l e o p a r d o        "; //car=8
char nome58[40] ="c e n t o p e i a      "; //car=9
char nome59[40] ="g a l i n h a          "; //car=7
char nome60[40] ="l e b r e              "; //car=5

// traços para colcoar
char *traco;
char traco5[40] = "_ _ _ _ _";
char traco6[40] = "_ _ _ _ _ _";
char traco7[40] = "_ _ _ _ _ _ _";
char traco8[40] = "_ _ _ _ _ _ _ _";
char traco9[40] = "_ _ _ _ _ _ _ _ _";
char traco10[40]= "_ _ _ _ _ _ _ _ _ _";
char traco11[40]= "_ _ _ _ _ _ _ _ _ _ _";
char traco12[40]= "_ _ _ _ _ _ _ _ _ _ _ _";
char traco13[40]= "_ _ _ _ _ _ _ _ _ _ _ _ _";
char traco14[40]= "_ _ _ _ _ _ _ _ _ _ _ _ _ _";
 
 // resultado
    char resultado[40]="                        ";
 // desenhos do inforcado
    char cabeca[8] = "O",maod[5] ="\\",maoe[5]="/",corpo[5] = " (_)",pe[7] = "/ \\",pe1[2]="_";            
    
    // erros
    char *erro,*erro1,*erro2,*erro3,*erro4,*erro5,*erro6,*erro7;     // erros
    char verifica;   // usada para verificar se o usuario errou
    int n; // numero de vezes que pode digitar : 25
   
    
    int sorteio; // recebe valro da função rand();
    char recomecar = 'n'; 
       
    char *ptr;    // recebe valor da variavel nome
   int cont;

    
    int car;
    
int sortear (void) { // abre a função sortear
    
    
    srand(time(NULL));  // usa o relogio para variar a função rand()
    
    sorteio = rand()%60; // gera valores aleatorios de 0 a 2 para a variavel 'sorteio' 
    
if (sorteio == 0) {ptr =  nome1; car =9;}
if (sorteio == 1) {ptr = nome2; car = 8;}
if (sorteio == 2) {ptr = nome3; car = 9;}
if (sorteio == 3) {ptr = nome4; car = 7 ;}
if (sorteio == 4) {ptr = nome5; car = 6 ;}
if (sorteio == 5) {ptr = nome6; car = 6;}
if (sorteio == 6) {ptr = nome7; car =7 ;}
if (sorteio == 7) {ptr = nome8; car=5;}
if (sorteio == 8) {ptr = nome9; car=9;}
if (sorteio == 9) {ptr =  nome10; car=7;} 
if (sorteio == 10) {ptr = nome11; car=5 ;}
if (sorteio == 11) {ptr =  nome12; car=8;}
if (sorteio == 12) {ptr = nome13; car=10;}
if (sorteio == 13) {ptr = nome14; car=6;}
if (sorteio == 14) {ptr = nome15; car=5;}
if (sorteio == 15) {ptr = nome16; car=8;}
if (sorteio == 16) {ptr = nome17; car=9;}
if (sorteio == 17) {ptr = nome18; car=7 ;}
if (sorteio == 18) {ptr = nome19; car=7 ;}
if (sorteio == 19) {ptr = nome20; car=7;}


//Aparelhos domésticos

if (sorteio == 20) {ptr = nome21; car=10;}
if (sorteio == 21) {ptr = nome22; car=9;}
if (sorteio == 22) {ptr = nome23; car=5;}
if (sorteio == 23) {ptr = nome24; car=9;}
if (sorteio == 24) {ptr = nome25; car=10;}
if (sorteio == 25) {ptr = nome26; car=9;}
if (sorteio == 26) {ptr = nome27; car=5 ;}
if (sorteio == 27) {ptr = nome28; car=9;}
if (sorteio == 28) {ptr =  nome29; car=7;}
if (sorteio == 29) {ptr =  nome30; car=9 ;}
if (sorteio == 30) {ptr =  nome31; car=5;}
if (sorteio == 31) {ptr =  nome32; car=8;}
if (sorteio == 32) {ptr =  nome33; car=6;}
if (sorteio == 33) {ptr =  nome34; car=9;}
if (sorteio == 34) {ptr =  nome35; car=8;}
if (sorteio == 35) {ptr =  nome36; car=9;}
if (sorteio == 36) {ptr =  nome37; car=9;}
if (sorteio == 37) {ptr =  nome38; car=7;}
if (sorteio == 38) {ptr =  nome39; car=10;} 
if (sorteio == 39) {ptr =  nome40; car=8;}

//Animais

if (sorteio == 40) {ptr =  nome41; car=6;}
if (sorteio == 41) {ptr =  nome42; car=5;}
if (sorteio == 42) {ptr =  nome43; car=5;}
if (sorteio == 43) {ptr =  nome44; car=6;}
if (sorteio == 44) {ptr =  nome45; car=6;}
if (sorteio == 45) {ptr =  nome46; car=6;}
if (sorteio == 46) {ptr =  nome47; car=9;}
if (sorteio == 47) {ptr =  nome48; car=5;}
if (sorteio == 48) {ptr =  nome49; car=7;}
if (sorteio == 49) {ptr =  nome50; car=8;}
if (sorteio == 50) {ptr =  nome51; car=11;}
if (sorteio == 51) {ptr =  nome52; car=7;}
if (sorteio == 52) {ptr =  nome53; car=7;}
if (sorteio == 53) {ptr =  nome54; car=11;}
if (sorteio == 54) {ptr =  nome55; car=9;}
if (sorteio == 55) {ptr =  nome56; car=8;}
if (sorteio == 56) {ptr =  nome57;car=8;}
if (sorteio == 57) {ptr =  nome58;car=9;}
if (sorteio == 58) {ptr =  nome59;car=7;}
if (sorteio == 59) {ptr =  nome60;car=5;}

if (car==5) traco = traco5;
if (car==6) traco = traco6;
if (car==7) traco = traco7;
if (car==8) traco = traco8;
if (car==9) traco = traco9;
if (car==10) traco = traco10;
if (car==11) traco = traco11;
if (car==12) traco = traco12;
if (car==13) traco = traco13;
    
    
    
    
    
    
    
    
} // fecha função sortear    


//função forca
    int forca(void){ // função que imprime a forca...
    int i; // usado na função for
//    int cont; // cointa o numero de caracteres do resultado iguais ao nome. Resposável por idenficar que o jogador ganhou.
    int x;    // usando na função for
    
    printf ("\n\n\n<<< Jogo da forca >>>\n\n"); 
    printf ("  ___\n |   |");
    printf ("\n | %s %s %s\n | %s\n | %s%s%s\n |\n===",erro3,erro,erro4,erro1,erro5,erro2,erro6);
    printf ("\n\n\n  %s\n  %s",resultado,traco);
    if (sorteio < 20){
    printf ("\n\nDica: Fruta");
}   if (sorteio > 49 )
    printf ("\n\nDica: Animais");      
    if (sorteio > 19 && sorteio <50) 
    printf ("\n\nDica: Aparelho domestico");
    printf ("\n\nCaracteres: %d Sorteio = %d\n\n\n",car,sorteio + 1);
     cont = 0;
     for (x=0;x<22;x++){   //abre for  1      
    
    if (resultado[x] == ptr[x]) cont++; // cont = cont + 1
    if ( cont == 22){ printf ("\n\nVoce Acertou!!!!!!\n\n         By Camilo Caetano"); // teste para saber se ganhou
    for (i=0;i<19;i++){       // abre for 2 
    resultado[i] = ' ';         // zera resultado
    }                      // fecha for 2
     erro = "  ";erro1 = " "; erro2 = " ";erro3 = " ";erro4 = " ";erro5 = " ";erro6 = " ";      // zera erro
     recomecar = 's';              //recomeça o jogo
     } // fecha if


} // fecha for 1
    
    if (erro == cabeca && erro1 == corpo && erro2 == pe && erro3 == maod  && erro4 == maoe && erro5 == pe1  && erro6 == pe1 ){ // abre chave de If()
    printf ("\n\nVoce perdeu!!!\n\n\n\n         By Camilo ");
    for (i=0;i<20;i++){ // abre for
    resultado[i] = ' '; // zera resultado
} // fecha for i
     erro = "  ";erro1 = " "; erro2 = " ";erro3 = " ";erro4 = " ";erro5 = " ";erro6 = " "; // zera erro
     recomecar = 's'; //recomeça o jogo
     
    } // fecha a chave da função if()
    
    } 
 
 
    
int main(){
    int i;
    
    char pega,um[4]="   ",dois= ' ',tres = ' ';    
    
    sortear();
    printf ("Caracteres: %d Sorteio = %d\n\n\n",car,sorteio + 1);
    n = 0;
    printf ("\n\n<<< Jogo da forca >>>\n\n");   
    printf ("  ___\n |   |");                    // função que imprime a forca inicialmente
    printf ("\n |   \n |   \n |  \n |\n=== ");
    printf ("\n\n\n  %s\n  %s",resultado,traco);  
    if (sorteio < 20){
    printf ("\n\nDica: Fruta");
}   if (sorteio > 49 )
    printf ("\n\nDica: Animais");      
    if (sorteio > 19 && sorteio <50) 
    printf ("\n\nDica: Aparelho domestico");
    printf ("\n\ncar: %d sorteio = %d\n\n\n",car,sorteio + 1);  
   
    while (n<26){         n++;  // executa 26 vezes a função abaixo (letras do alfabeto)
        
    if (recomecar == 's'){ //recomeça o jogo 
                  printf ("\n\n");
                  system ("pause");
                  system ("cls");
                  sortear();
                  forca();
                  n=0; 
                
            
                  
                  
                  } //  fecha função if
    printf ("\n\nDigite uma letra: ");
    pega = getche();
    
    
    verifica = 'c'; // se o jogador digitar algo errado, diferente do que se pede, merda continuar igaual a 'c'
    for (i=0;i<21;i++){ // abre função for que executa 15 vezes a funçao abaixo
    
    if (ptr[i] == pega) { // abre funçao if()
               resultado[i] = pega;
               verifica = 'a'; // quando o o usuario acerta altera o valor de 'merda'
                           }     // fecha função if           
    
                    } //  fecha a funçao for()


if (verifica == 'c' && erro5 == pe1)
erro6 = pe1;

if (verifica == 'c' && erro4 == maoe)
erro5 = pe1;

if (verifica == 'c' && erro3 == maod)
erro4 = maoe;

if (verifica == 'c' && erro2 == pe)
erro3 = maod;

if (verifica == 'c' && erro1 == corpo) // Devido o valor merda continuar sendo ' c ' o programa teste a função se for verdade ela
erro2 = pe; // erro2 recebe valor de pe
if (verifica == 'c' && erro == cabeca)
erro1 = corpo; // erro 1 recebe valor de corpo
if (verifica == 'c')
erro = cabeca;    // erro recebe valor de cabeca


if (erro != cabeca) erro = " ";  // deixa a forca em branco
if (erro1 != corpo) erro1 = " ";  // deixa a forca em branco
if (erro2 != pe) erro2 = " ";     // deixa a forca em branco       
if (erro3 != maod) erro3 = " ";  // deixa a forca em branco
if (erro4 != maoe) erro4 = " ";  // deixa a forca em branco
if (erro5 != pe1) erro5 = " ";     // deixa a forca em branco
if (erro6 != pe1) erro6 = " ";  // deixa a forca em branco
  
recomecar = 'n';

system ("cls");
forca ();
}// fecha função while()


}// fecha a função main()
