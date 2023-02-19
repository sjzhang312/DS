#include <stdio.h>
#include <string.h>

int main()
{
    char a[85];
    gets(a+1);
    a[0]=' ';
    for(int i=strlen(a)-1;i>=0;i--){

        if(a[i]==' '){
            printf("%s",a+i+1);
        a[i]='\0';//输出完一个单词就会停止
        if(i==0)
            printf("%c",'\n');
        else
            printf("%c",' ');
        }
        else
            continue;
    }
    return 0;
}
//1、先从尾部遍历数组，找到空格的时候将空格的后面的输入；
//2、输出后，将空格替换为\0，这也是字符串终止的的标志；
//然后向前遍历，找到空格是继续将空格后面的内容输入，因为将后面的空格替换为\0了，所以输出完这个单词就会终止，以此类推直到遍历到数组头部终止，即可。
