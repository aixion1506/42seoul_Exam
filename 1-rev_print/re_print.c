#include <unistd.h>
#include <stdio.h>

// 문자열의 길이를 계산하는 함수
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0') // 문자열의 끝까지 반복
        i++;
    return (i); // 문자열의 길이 반환
}

// 문자열을 뒤집어서 출력하는 함수
char *ft_rev_print(char *str)
{
    int i;

    i = ft_strlen(str); // 문자열의 길이를 계산
    i--;
    while (i >= 0) // 문자열을 역순으로 반복
    {
        write(1, &str[i], 1); // 문자 하나를 출력
        i--;
    }
    return (str); // 뒤집힌 문자열 반환
}

int main()
{
    char str[] = "gbrireugneb"; // 뒤집을 문자열
    ft_rev_print(str); // 문자열을 뒤집어서 출력
}
