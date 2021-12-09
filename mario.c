#include<stdio.h>
#include<cs50.h>


int main(void)
{
    int h;
    do
    {       //Solicitar a altura do usuário
            h = get_int("Altura: ");

    } //Condição para o loop
    while (h < 1 || h > 8);
    //Criar a pirâmide
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (i + j < h -1)
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