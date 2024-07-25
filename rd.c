#include <unistd.h>
#include <fcntl.h>
void ft_rd (int *ptr, char *data)
{
    int *size, y; 
    y = read(*ptr, data, 1024);
    size = &y;
    write (1, data, *size);
}
int main (void)
{
    int x;
    char dt[1024];
    x = open ("file.txt", O_RDONLY );
    ft_rd ( &x, dt);
    return (0);
}
