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
