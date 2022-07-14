#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//definicao de funcao
//validar entrada do menu
void validar (int *opc)
{
    do
    {
        fflush (stdin);
        scanf ("%i", &*opc);
        if (*opc <= 0 && *opc >=5)
            printf ("\n valor invalido ... digite outro numero positivo entre 1 e 4...: ");

    }
    while (*opc <= 0 && *opc >=5);
}

///////// validacao d entrada de todos
void validacao (int *numb)
{
    do
    {
        fflush (stdin);
        scanf ("%i", &*numb);

        if( *numb == 0)
            printf("\n O resultado do faotrial !%i eh 1 .",*numb);
        else
        {
            if(*numb < 0)
                printf ("\n Valor invalido ... digite outro numero positivo...: ");
        }
    }while( *numb <=0);
}
//funcao do fatorial
int fatorial (int f)
{
    int fat,i;
    fat = 1;
    if(f>1)
    {
        for(i=1; i<=f; i++)
            fat = fat * i;

    }
    return fat;
}
//divisao ou opc 02
float divisao(float numA,float numB)
{
    float div = 0;
    div = numA/numB;

    return div;
}
//exponencial
int expo(int numa,int numb)
{
    int exp,i;
    exp =numa;
    for(i=0; i<(numb-1);i++)
    {
         exp *= numa;
    }


    return exp;
}


//

int main()
{
    //vars locais
    int opc;
    int fatn, numa,numb,eponen;
    float div;
    eponen = div = opc = fatn = numb = numa = 0;
    do
    {
        printf("\n ============ CALCULADORA EM C ==============\n");
        printf("\n 01) Fatorial de um numero:");
        printf("\n 02) Resto de uma divisao entre dois numeros inteiros:");
        printf("\n 03) Exponencial entre dois numeros inteiros:");
        printf("\n 04) finalizar programa:\n");
        fflush(stdin);
        validar(&opc);
        if(opc == 1)
        {
            printf("\n Fatorial de um numero:");
            printf("\n Entre com o numero desejado..:\n");
            validacao(&numb);
            fatn = fatorial(numb);
            printf("\n O resultado do faotrial !%i eh %i\n .",numb,fatn);
        }
        else
        {
            if(opc == 2)
            {
                printf("\n Resto de uma divisao entre dois numeros inteiros:");
                printf("\n Entre com o numero desejado A..:\n");
                validacao(&numa);
                printf("\n Entre com o numero desejado B..:\n");
                validacao(&numb);
                div = divisao(numa,numb);
                printf("\n O resultado da divisao de  %i e %i == %.2f\n .",numa,numb, div);



            }
            else
            {
                if (opc == 3)
                {
                    printf("\n Exponencial entre dois numeros inteiros:");
                    printf("\n Entre com o numero base A..:\n");
                    validacao(&numa);
                    printf("\n Entre com o numero expoente B..:\n");
                    validacao(&numb);
                    eponen = expo(numa,numb);
                    printf("\n O resultado da exponenciacao de  %i elevado a  %i == %i\n .",numa,numb, eponen);

                }

            }
        }




    }
    while(opc !=4);



    return 0;
}
