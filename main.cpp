#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int tablica[5][5] = {{1,1,1,1,1}, {2,2,2,2,2}, {3,3,3,3,3}, {4,4,4,4,4}, {5,5,5,5,5}};

    for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout << tablica[i][j] << " ";
            }
            cout << endl;
        }

    int w=1;

    for(int i=0; i<4; i++)
    {
        for(int j=w; j<5; j++)
        {
            swap(tablica[j][i],tablica[i][j]);
        }
        w++;
    }

    cout << endl;

    for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout << tablica[i][j] << " ";
            }
            cout << endl;
        }


    return 0;
}
