/*
    beecrowd | 1486
Circuito Bioquímico Digital

Codigo resolve o a questão  beecrowd | 1486 Circuito Bioquímico Digital, 
*/

#include <iostream>
using namespace std;

int main ()
{
    int p=1,n=0,c=0,contador = 0, palitos = 0;
    int** ptrMatriz;

    while(p > 0)
    {
        cin >>p >>n >>c; 

        ptrMatriz = new int*[n];
        for (int i=0; i<n; i++)
        {
            ptrMatriz[i] = new int[p];
        }

        for(int i=0; i<n ;i++)
        {
            for(int j=0; j<p ;j++)
            {
                cin >> ptrMatriz[i][j];   
            }
        }

        for(int i=0; i<p ;i++)
        {
            for(int j=0; j<n ;j++)
            {
                if(ptrMatriz[j][i])
                {
                    contador++;
                }
                else
                {
                    if(contador >= c)
                    {
                        palitos++;
                    }
                    contador = 0;
                }
            }
            if(contador >= c)
            {
                palitos++;
            }
            contador = 0;
        }
        if(p > 0)
        {
            cout << palitos << "\n";
            palitos =0;
        }
        for (int i=0; i<p; i++)
        {
            delete[] ptrMatriz[i];
        }
        delete[] ptrMatriz;
    }
    return 0;

}
