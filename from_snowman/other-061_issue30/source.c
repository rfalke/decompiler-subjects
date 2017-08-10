/* https://github.com/yegord/snowman/issues/30 */

long f(int x)
{
        long l = 0;
        while (x)
        {
                l *= l;
                l += x;
                x--;
        }
        return l;
}
