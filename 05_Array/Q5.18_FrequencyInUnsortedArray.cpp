#include<iostream>
using namespace std;


void frequencyOfElements(int arr[], int n)
{
    int frequency[n];
    int visited = -1;
    for(int i = 0; i < n; i++)
    {
        int count = 1;
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                frequency[j] = visited;
            }
        }
        if(frequency[i] != visited)
        {
            frequency[i] = count;
        }
    }

    for(int i = 0; i < n; i++){  
        if(frequency[i] != visited){  
            printf("    %d", arr[i]);  
            printf("    |  ");  
            printf("  %d\n", frequency[i]);  
        }  
    }  
}


int main(void)
{
    int arr[] = {10,22,22,10,11,11,22};
    int n = sizeof(arr)/sizeof(arr[0]);

    frequencyOfElements(arr, n);
   
}