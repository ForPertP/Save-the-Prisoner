#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'saveThePrisoner' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 *  3. INTEGER s
 */

int saveThePrisoner(int n, int m, int s)
{
    int result = ((m%n)+s-1) % n;
    return result ? result : n;
}

int saveThePrisoner1(int n, int m, int s)
{
    int result = (m+s-1)%n;
    return result ? result : n;
}

int saveThePrisoner2(int n, int m, int s)
{
    return ((m+s-2) % n) + 1;
}
