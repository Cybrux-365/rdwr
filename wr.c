#include <unistd.h>
#include <fcntl.h>
void ft_fd (int *p)
{
    write (*p, "new \n", 5);
}
int main (void)
{
    int y;
    y = open ("file.txt", O_WRONLY | O_CREAT );
    ft_fd ( &y);

    return (0);
}
