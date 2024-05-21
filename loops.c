#include <stdio.h>

int square(num) {
    
    for (int i = 1; i <= num; i++) //printa o '#' num vezes em uma linha
    {
        printf(" #");   
    }
    printf("\n"); 

    for(int i = 2; i < num; i++) // faz o meio do quadrado (este loop se repete num-2 vezes, pois é o meio do quadrado)
    {
        printf(" #"); //printa uma vez o '#' para depois no loop debaixo virem os espaços
        for(int j = 2; j < num; j++)
        {
            printf("  "); // espaços vem (num-2) vezes, pois assim os espaços ficarão no meio
        }
        printf(" # \n"); //por ultimo printa um '#' para terminar a linha
    }
    for (int i = 1; i <= num; i++) // faz a mesma coisa do primeiro loop só que aqui embaixo, no final do quadrado
    {
        printf(" #");
    }
    printf("\n\n\n");
    return 0;
}

int zero(num) {

    for(int i = 0; i < 1;  i++) //loop que faz a primeira linha do 'zero'
    {
      printf("  "); //começa imprimindo um espaço
      for(int j = 2; j < num; j++)
      {
        printf(" #"); // aqui ele printa o '#' num-2 vezes, para ficar centralizado
      }
      //o espaço que viria aqui não é necessario, então não coloquei ele...
    }

    printf("\n");

    for(int i = 2; i < num;i++) // loop que faz o meio do 'zero',ele se repete num-2 vezes, pois é o meio do 'zero'
    {
        printf(" #"); // começa com um '#'
        for(int j = 2; j < num; j++)
        {
            printf("  "); // em seguida ele imprime num-2 vezes espaços para o 'zero' ficar oco
        }
        printf(" # \n"); // termina com um '#'
    }

    for(int i = 0; i < 1;  i++) //loop que faz a mesma coisa que o primeiro só que no final...
    {
        printf("  ");
        for(int j = 2; j < num; j++)
        {
            printf(" #");
        }
    }

    printf("\n\n\n");
    return 0;
}

int pyramid(num) {

    for(int i = 1; i <= num; i++)
    { 
       for(int j = 1; j <= i; j++) // nós queremos que ele imprima "#", e incremente 1 a mais a cada linha, 
       {                           // por isso a condição do loop é "j <= i", pois i  esta aumentando 1 a cada linha
        printf(" #");              // mas toda vez queo loop é reiniciado o j vale 1 de novo, mas o i não é zerado
       }
       printf("\n");
    }
    printf("\n\n\n");
    return 0;
}

int pyramad(num) { //piramide espelhada

    for(int i = 1; i <= num; i++) 
    {
        for (int j = 0; j < num-i; j++) // imprime os espaços mas deixa vazio no final pra caber um '#', e a cada vez que o loop principal
        {                               //é reiniciado, ele diminui em 1 unidade a quantidade de espaços
            printf("  ");
        }
        for (int k = 1; k <= i; k++) //este loop faz imprimir um '#', e a cada linha ele incrementara 1 a mais, 
            {                        //pois a condição é "k <= i", sendo assim, i sempre add 1 a cada loop, mas o k é zerado,
                printf(" #");        //porque esta dentro do loop com inicializador 'i'
            }
        printf("\n");
    } 
    printf("\n\n\n");
    return 0;
}

int crux(num) { //num precisa ser ímpar...

    int ant = num - 1;

    for (int i = 1; i <= ant/2; i++)
    {
        for(int j = 0 ; j < ant/2; j++)
        {
            printf(" ");
        }
        printf("#\n");
    }
    
    for (int i = 1; i <= num; i++)
    {
        printf("#");
    }

    printf("\n");

    for (int i = 1; i <= ant/2; i++)
    {
        for(int j = 0 ; j < ant/2; j++)
        {
            printf(" ");
        }
        printf("#\n");
    }
    
    printf("\n\n\n");
    return 0;
}

int diamond(num) {

    int j = 0;
    int ant = num - 1;
    int key = (ant/2);
    int key2 = (ant/2);
    int key_const = (ant/2);

    for (int i = 0; i < key_const+1; i++)
    {
        for (j = 1; j <= key; j++)
    {
        printf(" ");
    }
        printf("#");
        key = key - 1;

        for(int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (int l = 2; l <= i; l++)
            {
                printf(" ");
                
            }
        if (i >= 1)
        {
            printf("#");
        }
        printf("\n");
    }

    for (int a = 1; a <= key_const; a++) //parte inferior
    {
        for (int i = 0; i < a; i++)
        {
            printf(" ");
        }
        if(a < key_const){
        printf("#");
        }
        for(int k = 2; k <= key2; k++)
        {
            printf(" ");
            
        }
        key2 = key2 - 1;
        for (int l = 2; l <= key2; l++)
        {
            printf(" ");
        }
        printf("#");
        printf("\n");
    } 
    printf("\n\n\n");
    return 0;
}

int main() { 

    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("\n");

    square(num);
    zero(num);
    pyramid(num);
    pyramad(num);
    crux(num);
    diamond(num);
}
