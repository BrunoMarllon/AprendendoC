//
//  main.c
//  String
//
//  Created by Mac on 04/06/21.
//

#include <stdio.h>
#include <string.h>

/*

#define TAM 20
int main()
{
    char matrizA[TAM][TAM];
    int tamanho;
    int i=0,j=0;

    do{
    printf("Informe o tamanho da sua matriz A.\n");
    scanf("%d",&tamanho);
    fflush(stdin);
    }while(tamanho>TAM);


    for(i=0;i<tamanho;i++)
    {
        for(j=0;j<tamanho;j++)
        {
            printf("\nDigite os caracteres da matrizA %d %d:",i,j);
            scanf("%c",&matrizA[i][j]);
            fflush(stdin);
        }
    }

    printf("\nMatriz de entrada:\n");

        for(i=0; i<tamanho; i++)
        {
                                                    //Laço que percorre as linhas
            for(j=0;j<tamanho; j++)                 //Laço que percorre as colunas
            {

                printf("%c",matrizA[i][j]);        //exibe a matriz de saida

            }
        }

        return 0;
    }

*/
        
        
/*
 string.h
 
 strlen(str);
 
 char str[40];
  
 \0
 str[0] = 'a';
 str[1] = 'r';
 str[2] = 'i';
 
 str[3] = '\0';
 ..
 ...
 str[39] =
 
 scanf("%c",&str[1]);
 
 
 scanf("%s", str); ari\0 silva
 
 gets(str); ari silva xxx\0
 
 printf("%c", str[0]); // a
 printf("%s", str); // ari silva xxx
 puts(str);
 
 
 */

// para ler uma string
 /*
int main()
{
    char name[2000], tam;
    printf("Enter name: ");
    //scanf("%s", name);
    gets(name);
    printf("Your name is %s. \n", name);
    tam = strlen(name);
    printf("%d \n", tam);
    return 0;
}
*/

/*
 // fgets () e puts ()

int main()
{
    char name[3000];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
*/

/*
// Calcule o comprimento da string sem usar a função strlen ()
 
 int main()
 {
     char s[3000];
     int i = 0, count = 0;
     printf("Enter name: ");
     gets(s);
     
     //for (i = 0; s[i] != '\0'; ++i);
     while(s[i] != '\0')
     //while(s[i])
     {
         //if(s[i] != ' ')
             count++;
         i++;
     }
     
     printf("Length of the string: %d \n", count);
     
     return 0;
 }
*/

/*
int main()
{
    char s[3000], c;
    int i = 0, count = 0;
    
    printf("Enter name: ");
    gets(s);
    
    printf("Enter character: ");
    scanf("%c",&c);
    
    while(s[i] != '\0')
    {
        if(s[i] == c)
            count++;
        i++;
    }
    
    printf("Length of the string: %d \n", count);
    
    return 0;
}
*/


/*
 // Concatenar duas strings sem usar strcat ()

 int main() {
     char s1[100],  s2[100], s3[200];
     int length, j;

     printf("Enter name 1: ");
     gets(s1);
     
     printf("Enter name 2: ");
     gets(s2);
     
     for (j = 0; s1[j]; ++j)
     {
       s3[j] = s1[j];
     }
     
   // store length of s1 in the length variable
   length = 0;
   while (s3[length]) {
     ++length;
   }

  // concatenate s2 to s1
   for (j = 0; s2[j]; ++j, ++length) {
     s3[length] = s2[j];
   }

   // terminating the s1 string
   s3[length] = '\0';

   printf("After concatenation: ");
   puts(s3);

   return 0;
 }
*/

/*
 //Encontre a frequência de um personagem
 //Digite uma string: Este site é incrível.
 //Insira um caractere para encontrar sua frequência: e
 // Frequência de e = 4
 
 int main() {
     char str[1000], ch;
     int count = 0;

     printf("Enter a string: ");
     fgets(str, sizeof(str), stdin);

     printf("Enter a character to find its frequency: ");
     scanf("%c", &ch);

     for (int i = 0; str[i] != '\0'; ++i) {
         if (ch == str[i])
             ++count;
     }

     printf("Frequency of %c = %d", ch, count);
     return 0;
 }

 */

/*
// Programe para contar vogais, consoantes etc.
// Resultado
// Insira uma linha de string: adfslkj34 34lkj343 34lk
// Vogais: 1
// Consoantes: 11
// Dígitos: 9
// Espaços em branco: 2


int main() {
    char line[150];
    int vowels, consonant, digit, space;

    vowels = consonant = digit = space = 0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            ++consonant;
        } else if (line[i] >= '0' && line[i] <= '9') {
            ++digit;
        } else if (line[i] == ' ') {
            ++space;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    return 0;
}
 */

/*
 // Remover caracteres em strings, exceto alfabetos
 
 int main() {
    char line[150];
    
    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin); // take input


    for (int i = 0, j; line[i] != '\0'; ++i) {

       // enter the loop if the character is not an alphabet
       // and not the null character
       while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
          for (j = i; line[j] != '\0'; ++j) {

             // if jth element of line is not an alphabet,
             // assign the value of (j+1)th element to the jth element
             line[j] = line[j + 1];
          }
          line[j] = '\0';
       }
    }
    printf("Output String: ");
    puts(line);
    return 0;
 }
 */

/*
// Classifique as strings na ordem do dicionário
// Resultado
// Digite 5 palavras: programação R
// JavaScript
// Java
// Programação C
// Programação C ++
 //
// Na ordem lexicográfica:
// Programação C
// Programação C ++
// Java
// JavaScript
// programação R

 int main() {
    char str[5][50], temp[50];
    printf("Enter 5 words: ");

    // Getting strings input
    for (int i = 0; i < 5; ++i) {
       fgets(str[i], sizeof(str[i]), stdin);
    }

    // storing strings in the lexicographical order
    for (int i = 0; i < 5; ++i) {
       for (int j = i + 1; j < 5; ++j) {

          // swapping strings if they are not in the lexicographical order
          if (strcmp(str[i], str[j]) > 0) {
             strcpy(temp, str[i]);
             strcpy(str[i], str[j]);
             strcpy(str[j], temp);
          }
       }
    }

    printf("\nIn the lexicographical order: \n");
    for (int i = 0; i < 5; ++i) {
       fputs(str[i], stdout);
    }
    return 0;
 }

 */

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALFABETO 54


int main()
{
    //char matriz[LINHA][COLUNA];
    char frase[1000], outra[1000];
    char alfabeto[ALFABETO]="aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ ";
    printf("Digite uma frase com apenas caracteres maiusculos e minusculos, com espaço e sem acentuação: \n");
    gets(frase);
    int k = 0;

// contar quantos elementos tem na frase pra por no lugar da COLUNA


    //COMPARAÇÃO ALFABETO E FRASE
//j= letra da frase
//i = letra do alfabeto

        for(int i = 0; i < ALFABETO; i++)
        {
            for(int j = 0; frase[j]; j++)
            {
                if(alfabeto[i] == frase[j])
                {
                    outra[k] = frase[j];
                    k++;
                }
            }
        }
        outra[k] = '\0';
        printf("%s ", outra);


        return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#define TAM 50

int main()
{
    char frase[TAM];
 //   char fraseA_Z[TAM];
 //   int indice[TAM];
    int i, j, limite = 0;
    char aux;

    printf("Digite uma frase com letras minusculas:\n");
    gets(frase);
    
    //strcpy(fraseA_Z, frase);

    i = 0;
    limite = strlen(frase);
    
    for (i = 0; i < limite; i++ )
       {
           for(j = i + 1; j < limite; j++)
           {
               if( frase[i] > frase[j])  //SE ( I ) > ( J ) - EM TERMOS DE INDICE - ( I ) PASSA A SER O SUCESSOR E ( J ) O ANTECESSOR
               {
                   aux = frase[i]; //VARI¡VEL AUXILIAR PARA N√O PERDER O VALOR DE INDICE[I]
                   frase[i] = frase[j];
                   frase[j] = aux;
               }
           }
       }
    
    printf("%s", frase);
    
/*    isdigit
    isalpha
    for(i=0; i<limite; i++)
        {                            // Converte cada caracter de Str
         frase[i] = toupper (frase[i]);  // para maiusculas
        }
 */
    

 /*   while (frase[i]) //frase != 0 d· TRUE
    {
        indice[i] = frase[i]; //atribui ao vetor indice cada inteiro correspondente ao caractere da tabela ASC
        i++;
        limite++; //conta a quantidade de caracteres da frase
    }
*/
    
    //colocando o vetor de inteiros, indice, em ordem crescente
/*    for (i = 0; i < limite; i++ )
    {
        for(j = i + 1; j < limite; j++)
        {
            if( indice[i] > indice[j])  //SE ( I ) > ( J ) - EM TERMOS DE INDICE - ( I ) PASSA A SER O SUCESSOR E ( J ) O ANTECESSOR
            {
                aux = indice[i]; //VARI¡VEL AUXILIAR PARA N√O PERDER O VALOR DE INDICE[I]
                indice[i] = indice[j];
                indice[j] = aux;
            }
        }
    }
    for (i = 0; i < limite; i++)
    {
        fraseA_Z[i] = indice[i]; //atribui ao vetor fraseA_Z o caractere que corresponde ao inteiro da tabela ASC
    }
    printf("\n");
    printf("\n");

    for (i = 0; i < limite; i++)
    {
        if( fraseA_Z[i] != ' ')
        {
            printf("%c", fraseA_Z[i]);
        }
        else
        {
            printf("*");
        }

    }
 */
 
 /*   printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");


    return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra1[500], palavra2[500], concatenadas[100];
    int i = 0, j = 0, k = 0;

    printf("Digite uma palavra: ");
    gets(palavra1);
    printf("Digite uma palavra: ");
    gets(palavra2);
*/

/*
    while (palavra2[j] != '\0') //percorre atÈ o final da segunda palavra > admintindo que o final da segunda palavra ser· o final da string concatenada
    {
        if (palavra1[i] != '\0') //enquanto n„o chega ao final da primeira palavra > armazena em concatenadas
        {
            concatenadas[k] = palavra1[i];
            i++;
            k++;
        }
        else // se chegar ao final da primeira palavra > inicia-se o armazenamento da segunda palavra logo ao final da primeira palavra
        {
            concatenadas[k] = palavra2[j];
            j++;
            k++;
        }
    }
    // imprime as palavras concatenadas
    for(i = 0; i <= strlen(concatenadas); i++)
    {
        printf("%c", concatenadas[i]);
    }
*/
    
/*
   while(palavra1[i])
   {
       i++;
   }
    
    palavra1[i] = ' ';
    i++;
    while(palavra2[j])
    {
        palavra1[i] = palavra2[j];
        i++;
        j++;
    }
    palavra1[i] = '\0';
    
    printf("%s \n", palavra1);
 */
    
/*    strcat(palavra1, " ");
    strcat(palavra1, palavra2);
    printf("%s \n", palavra1);
    
    return 0;
}
*/
    
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main() // ana banana
{
    char palavra[20];
    char frase[500];
    int a, i = 0, k = 0, contapalavra = 0, contacaractere = 0;

    printf("digite uma palavra: ");
    gets(palavra);
    printf("digite uma frase: ");
    gets(frase);

    while(frase[i] != '\0') //percorre a frase
    {
        a = i;                  // vari·vel auxilar para o valor de i
        while(palavra [k] != '\0') //percorre a palavra avanÁando o indice somente se houver igualdade
        {
            if(palavra [k] == frase[a])
            {
                contacaractere++;
                a++;
                k++;
                if( contacaractere == strlen(palavra)) //verifica se a quantidade de caracteres identicos e consecultivos È do tamanho da palavra
                {
                    contapalavra++; //incrementa esse contador caso a condiÁ„o anterior seja satisfeita
                    contacaractere = 0;
                    k = 0;
                    i ++;
                    break;
                }
            }
            else
            {
                contacaractere = 0; // se n„o...zera o contacaractere. A comparaÁ„o retorna ao while mais externo partindo do proximo indice da frase
                i++;
                k = 0;
                break;  // interompe a iteraÁ„o do while mais interno. A comparaÁ„o retorna ao primeiro indice da palavra
            }
        }
    }
    printf("\n");
    printf("a palavra '%s' estah %dx na frase '%s'", palavra, contapalavra, frase); //imprime a quantidade de 'palavra' encontrada na string
    printf("\n");
    return 0;
}
*/
