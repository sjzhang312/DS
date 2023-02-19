#include <cstdio>
void tellAStory(int n) {

printf("%d: 从前有座山，山里有个庙，庙里有个老和尚。有一天，老和尚给小和尚讲故事……\n", n);
if (n > 1) tellAStory(n - 1);
}

int main() {
tellAStory(10);
return 0;
}
