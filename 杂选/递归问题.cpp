#include <cstdio>
void tellAStory(int n) {

printf("%d: ��ǰ����ɽ��ɽ���и��������и��Ϻ��С���һ�죬�Ϻ��и�С���н����¡���\n", n);
if (n > 1) tellAStory(n - 1);
}

int main() {
tellAStory(10);
return 0;
}
