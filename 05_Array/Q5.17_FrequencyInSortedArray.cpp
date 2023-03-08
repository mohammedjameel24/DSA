#include <iostream>
#include <algorithm>

using namespace std;

void frequencyOfElements(int arr[], int n)
{
    sort(arr, arr+n) ;
    int freq = 1 ;
    int i = 1;
    while(i < n ) //while i is less than n 
    {
        while(i<n && arr[i] == arr[i-1]) // while above condition & arr[i] is equal to arr[i-1];
        {
            freq++; //increase the frequency as you see equal to i
            i++; // increment the arr[i] index

        }
        cout << "("<< arr[i-1] << " " << freq << ")"<< endl;
        i++;
        freq = 1;
    }
    if(n == 1 || arr[n-1] != arr[n-2])
    {
        cout << arr[n-1] << " " << 1;
    }

}
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

int main()
{
    int arr[] = {40,50,50,50,40};
    int n = sizeof(arr)/sizeof(arr[0]);

    frequencyOfElements(arr,n);
}