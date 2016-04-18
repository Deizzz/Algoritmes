//Алгоритм сортировки вставкой. Упорядычивает массив по возрастанию.

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {9,1,6,5,3,8};
    int key, j = 0;

    for(int i = 1; i<6;i++){
        key = arr[i];
        j = i-1;
        while(j>-1 && arr[j]>key){
            arr[j + 1] = arr[j];
            j-=1;
        }
        arr[j+1] = key;
    }

    for(int i = 0; i<6; i++){
        cout << arr[i]<< "\t";
    }
    return 0;
}
