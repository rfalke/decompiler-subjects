#include <alloca.h>
#include <string.h>

int sum = 0;
void use(int *x)
{
    sum += *x;
}

void fill(int *dest, int n)
{
    memset(dest, 0x78, n * sizeof(*dest));
}

void with_array(int n)
{
    int fixed1 = 7;
    int dynamic[n];
    int fixed2 = 8;

    fill(dynamic, n);
    use(&fixed1);
    use(dynamic);
    use(&fixed2);
}

void with_alloca(int n)
{
    int fixed1 = 7;
    int *dynamic = alloca(sizeof(int) * n);
    int fixed2 = 8;

    fill(dynamic, n);
    use(&fixed1);
    use(dynamic);
    use(&fixed2);
}

int main(int argc, char **argv)
{
    with_alloca(argc);
    with_array(argc);
    return 0;
}
