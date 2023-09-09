// #include <bits/stdc++.h>
// using namespace std;
// int partition(vector<int> &A, int p, int r)
// {
//     int pivot_value = A[r];

//     int i = (p - 1);

//     for (int j = p; j <= r - 1; j++)
//     {
//         if (A[j] <= pivot_value)
//         {
//             i++;
//             swap(A[i], A[j]);
//         }
//     }
//     swap(A[i + 1], A[r]);

//     return (i + 1);
// }
// void QuickSort(vector<int> &A, int p, int r)
// {
//     // base case
//     if (p >= r)
//         return;

//     int pivot_value = partition(A, p, r);
//     QuickSort(A, p, pivot_value - 1);
//     QuickSort(A, pivot_value + 1, r);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> A(n);
//     for (int i = 0; i < A.size(); i++)
//     {
//         cin >> A[i];
//     }

//     QuickSort(A, 0, n - 1);

//     cout << "Sorted Array: " << endl;

//     for (int i = 0; i < A.size(); i++)
//     {
//         cout << A[i] << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int partition(int A[], int p, int r)
{
    int pivot_value = A[r];

    int i = (p - 1);

    for (int j = p; j <= r - 1; j++)
    {
        if (A[j] <= pivot_value)
        {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);

    // return (i + 1);
    return i;
}
void QuickSort(int A[], int p, int r)
{
    // base case
    if (p >= r)
        return;

    int pivot_value = partition(A, p, r);
    // QuickSort(A, p, pivot_value - 1);
    QuickSort(A, p, pivot_value);
    QuickSort(A, pivot_value + 1, r);
}

int main()
{
    int n;
    cin >> n;
    // vector<int> A(n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    QuickSort(A, 0, n - 1);

    cout << "Sorted Array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}