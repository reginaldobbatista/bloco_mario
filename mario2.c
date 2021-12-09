#include<stdio.h>
#include<cs50.h>


void criar_piramide(int alt);

int main(void)
{
    int altura;
    do
    {
        altura = get_int("Digite um número de 1 a 8: ");
    }
    while(altura < 0 || altura > 8);

    criar_piramide(altura);
}

void criar_piramide(int alt)
{
    for(int i = 0; i < alt; i++)
    {
        for (int c = alt; c > 0; c--)
        {
            if(c > i + 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        printf(" ");
        for(int c = 0; c < alt; c++)
        {
            if(c > i)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");
    }
}