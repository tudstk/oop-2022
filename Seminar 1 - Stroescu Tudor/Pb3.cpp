#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

void sortArray(char arr[][100], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
            if (strlen(arr[i]) < strlen(arr[j]))
                std::swap(arr[i], arr[j]);
            else if(strlen(arr[i]) == strlen(arr[j])){
                if (strcmp(arr[i], arr[j]) < 0)
                    std::swap(arr[i], arr[j]);
            }
    }
}
void Pb3()
{
    char wArray[100][100], s[100], * p;
    scanf("%[^\n]s", s);
    p = strtok(s, " ");
    int k = 0;
    while (p)
    {
        strcpy(wArray[k++], p);
        p = strtok(NULL, " ");

    }
    sortArray(wArray, k);
    for (int i = 0; i < k; i++)
        printf("%s\n", wArray[i]);
}
int main()
{
    Pb3();
    return 0;
}
