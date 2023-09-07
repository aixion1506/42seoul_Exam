#include <unistd.h>

int main(int ac, char **av) {
    if(ac != 2)
    {
        write(1, "z\n", 2); // 인수가 없거나 너무 많을 때 'z' 출력
        return 0;
    }

    char *str;
    str = av[1];
    while (*str)
    {
        if(*str == 'z')
        {
            write(1, "z\n", 2); // 'z'를 찾으면 'z' 출력
            return 0;
        }
        str++;
    }
    
    write(1, "z\n", 2); // 'z'를 찾지 못하면 'z' 출력
    return 0;
}
