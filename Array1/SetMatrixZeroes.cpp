#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    // vector<vector<int>> matrix {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                int row = i;
                int col = j;
                for (int k = 0; k < matrix.size(); k++)
                {
                    for (int l = 0; l < matrix[i].size(); l++)
                    {
                        if ((k == row || l == col) && matrix[k][l] != 0)

                            matrix[k][l] = -99;
                    }
                }
            }
        }
    }

    for (int m = 0; m < matrix.size(); m++)
    {
        for (int n = 0; n < matrix[m].size(); n++)
        {
            if (matrix[m][n] == -99)
                matrix[m][n] = 0;
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    cout<<endl<<endl;;

}
