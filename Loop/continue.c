int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 10; i++)
    {
        if (i==6)
        {
            continue;
        }
        printf("%d ", i);
    }
    
    return 0;
}
