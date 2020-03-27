int testInt(int a)
{
    int b = 5;
    a= a*a + b;
    return a;
}    


int main()
{
    int a;
    a=10;
    a = testInt(a);
    return a;
}
