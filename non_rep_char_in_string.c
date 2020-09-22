#include <stdio.h>
#include <stdlib.h>
int* chararr(char* str)
{
    int* count = (int*)calloc(sizeof(int), 300);
    int i;
    for (i = 0; *(str + i); i++)
        count[*(str + i)]++;
    return count;
}
int nunrep(char* str)
{
    int* count = chararr(str);
    int index = -1, i;

    for (i = 0; *(str + i); i++) {
        if (count[*(str + i)] == 1) {
            index = i;
            break;
        }
    }
    free(count);
    return index;
}
int main()
{
    char str[] = "iooqqwessewfi";
    int index = nunrep(str);
    if (index == -1)
        printf("string is empty");
    else
        printf("First non repeating character is %c", str[index]);
    getchar();
    return 0;
}
