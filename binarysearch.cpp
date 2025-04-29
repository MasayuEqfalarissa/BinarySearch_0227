#include <iostream>
using namespace std;

int arr[20]; // array to be searched
int n; // number of elements in the array
int i; // index of array element

void input() 
{
    while (true)
    {
        cout << "enter the number of elements in the array : ";
        cin >> n;
        if ((n > 0 ) && (n <= 20))
            break;
        else 
        cout << "nArray should have minimun 1 and maximum 20 element.\n\n";
    }
    // accept array elements
    cout << "\n---------------------\n";
    cout << "enter array element \n";
    cout << "----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << " < "<< (i + 1)<< " > ";
        cin >> arr[i];
    }
}

void binarysearch()
{
    char ch;
    do
    {
        // accept the number to be searched
        cout << "\nEnter element want you to searched";
        int item;
        cin >> item;

        // apply binary search
        int lowerbound = 0;
        int upperbound = n - 1;
        int mid = (lowerbound + upperbound) / 2; // index of middle else
        int ctr = 1;
        
        while ((item != arr[mid]) && (lowerbound <= upperbound))
        {
            if (item >arr[mid])
                lowerbound = mid + 1;
            else
                upperbound = mid - 1;

            mid = (lowerbound + upperbound) /2;
            ctr++;
        }
        
        if (item == arr[mid])
            cout << "\n" << item << " found at position " << (mid + 1);
        else 
            cout << "\n " << item << " noy found in the array\n";
        cout << "\nNumber of comparision: " << ctr << endl;

        cout << "\nContinue search (y/n): ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'y'));

}

void bubblesort()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= n -1 - pass; j++)
        {
            //swap
            int tmp = arr[j];
            arr[j] = arr [j + 1];
            arr[j + 1] = tmp;
        }
        pass++;
    } while (pass <= n-1);
}

int main () 
{
    input();
    bubblesort();
    binarysearch();
}


