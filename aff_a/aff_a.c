#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	
	i = 0;
	if (ac == 2) // 명령줄 인수가 정확히 2개인 경우
	{
		while (av[1][i] != '\0') // 두 번째 인수 (문자열)의 각 문자를 검사
		{
			if (av[1][i] == 'a') // 문자가 'a'인 경우
			{
				write(1, "a", 1);
				break;
			}
			i++;
		}
		write(1, "\0", 1);  // 문자열의 끝을 나타내는 NULL 문자를 출력
	}
	else
		write(1, "a\n", 2); // 명령줄 인수가 2개가 아닌 경우 "a"와 줄 바꿈을 출력
	return 0;
}