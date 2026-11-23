#include <iostream>
using namespace std;

#define INF 99999
int main()
{
    int n = 4;
    int dist[4][4] = {
        {0,   3,  10, INF},
        {INF, 0,   1,   7},
        {INF, INF, 0,   2},
        {INF, INF, INF, 0}
    };
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dist[i][k] != INF && dist[k][j] != INF)
                {
                    dist[i][j] = min(dist[i][j],
                                     dist[i][k] + dist[k][j]);
                }
            }
        }
    }
    cout << "Shortest Distance Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dist[i][j] == INF)
                cout << "INF\t";
            else
                cout << dist[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
