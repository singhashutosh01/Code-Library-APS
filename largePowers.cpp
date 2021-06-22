ll modularpower(long long num, unsigned int z, int num2)
{
    ll sol = 1;     
    num = num % num2; 
    if (num == 0) return 0; 
    while (z > 0)
    {
        if (z & 1)
            sol = (sol*num) % num2;
        z = z>>1; 
        num = (num*num) % num2;
    }
    return sol;
}
