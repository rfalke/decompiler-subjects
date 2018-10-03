__size32 g;// 4 bytes
int main(int argc, char *argv[]);
void f(__size32 param1, __size32 param2);

/** address: 0x080483e4 */
int main(int argc, char *argv[])
{
    __size32 local0; 		// m[esp - 23]
    int local1; 		// m[esp - 8]

    local1 = 0;
    while (local1 <= 9) {
        f(local1, local0);
        local1++;
    }
    return 0;
}

/** address: 0x080483cd */
void f(__size32 param1, __size32 param2)
{
    g = param1;
    *(__size32*)(&g + 1) = param2;
    return;
}

