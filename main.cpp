#include <iostream>

int tab[] = {5,2,7,4,9};

void TriABubble()
{
    for(int i = std::size(tab) - 1; i > 0; i--)
    {
        for(int j = 0; j < i-1; j++)
        {
            if(tab[j] > tab[j+1])
            {
                int aux = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = aux;
            }
        }
    }
    for(int i = 0; i < std::size(tab); i++)
    {
        std::cout << tab[i] << std::endl;
    }
}

void InvTriABubble()
{
    for(int i = 0; i < std::size(tab) - 1; i++)
    {
        for(int j = std::size(tab); j > i; j--)
        {
            if(tab[j] > tab[j-1])
            {
                int aux = tab[j];
                tab[j] = tab[j-1];
                tab[j-1] = aux;
            }
        }
    }
    for(int i = 0; i < std::size(tab); i++)
    {
        std::cout << tab[i] << std::endl;
    }
}

int main()
{
    char c;
    std::cout << "Choisir entre ordre Croissant ou Décroissant : c/d" << std::endl;
    std::cin >> c;
    if( c == 'c')
    {
        TriABubble();
    }
    else if(c == 'd')
    {
        InvTriABubble();
    }
    else
    {
        std::cout << "Pas capable d'écrire les 2 seules lettres proposé" << std::endl;
        main();
    }
    return 0;
}