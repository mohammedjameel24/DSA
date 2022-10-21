#include <iostream>

using namespace std;

// pair<int,int> FlipsToMakeSame(int arr[] , int n)
// {
//     int Xcount = 0;
//     int Ycount = 0;

//     for(int i = 0; i < n ; i++)
//     {
//         switch(arr[i])
//         {
//             case 1:
//                 Xcount++;
//                 break;
//             case 0:
//                 Ycount++;
//                 break;
//         }

//     }

//     int flip = min(Xcount,Ycount);
//     for(int i = 1; i<n ; i++)
//     {
//         if(arr[i] != arr[0])
//         {

//         }
//     }

//     return {Xcount,Ycount} ;

// }

void FlipsToMakeSame(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        if(arr[i] != arr[i-1])
        {
            if(arr[i] != arr[0])
            {
                cout << "from" << i << endl;
            }
            else{
                cout << (i-1) << endl;
            }
        }
    }
    if(arr[n-1] != arr[0])
    {
        cout << (n-1) << endl;
    }
}

int main()
{
    int arr[] = {1,0,0,0,1,1,0,0,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    FlipsToMakeSame(arr,n);

}