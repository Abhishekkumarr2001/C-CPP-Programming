#include <iostream>
#include <cstring>
using namespace std;
void LCSAlgorithm(char *S1, char *S2, int m, int n)
{
    int LCSTable[m + 1][n + 1];
    for (int k = 0; k <= m; k++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (k == 0 || j == 0)
                LCSTable[k][j] = 0;
            else if (S1[k - 1] == S2[j - 1])
                LCSTable[k][j] = LCSTable[k - 1][j - 1] + 1;
            else
                LCSTable[k][j] = max(LCSTable[k - 1][j], LCSTable[k][j - 1]);
        }
    }
    int Indexx = LCSTable[m][n];
    char LCSAlgorithm[Indexx + 1];
    LCSAlgorithm[Indexx] = '\0';
    int k = m, j = n;
    while (k > 0 && j > 0)
    {
        if (S1[k - 1] == S2[j - 1])
        {
            LCSAlgorithm[Indexx - 1] = S1[k - 1];
            k--;
            j--;
            Indexx--;
        }
        else if (LCSTable[k - 1][j] > LCSTable[k][j - 1])
            k--;
        else
            j--;
    }
    cout << "\n\nString1 : " << S1 << "\nString2 : " << S2 << "\nLCS: " << LCSAlgorithm << "\n";
}
int main()
{
    char S1[] = "ACADBABBCDDACC";
    char S2[] = "CBDAABBCEEASS";
    int m = strlen(S1);
    int n = strlen(S2);
    LCSAlgorithm(S1, S2, m, n);
}