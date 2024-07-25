#include <unistd.h>
#include <fcntl.h>
void ft_wr (int *p)
{
    write (*p, "new \n", 5);
}
int main (void)
{
    int y;
    y = open ("file.txt", O_WRONLY | O_CREAT );
    ft_wr (&y);

    return (0);
}
