// Program To Merge Two Arrays - Using Sorting While Merging (Assuming Array A In Ascending Order, Array B In Descending Order & C In Ascending Order
#include <iostream.h>
#include <conio.h>
void Merge(int [],int,int[],int,int[]);	//function to merge 2 arrays
void main()
	{
    int A[50], B[50], C[100], MN = 0, M, N;
    cout << "\nEnter  no. fof elements for first array:";
    cin >> M;
    cout << "\nEnter no. of elements for second array:";
    cin >> N;
    cout << "\nEnter elements of first array:";
    for (int i = 0; i < M; i++)
        cin >> A[i];
    cout << "\nEnter elements of second array:";
    for (i = 0; i < N; i++)
        cin >> B[i];
    MN = M + N;
    Merge(A, M, B, N, C); // function to merge two arrays
    cout << "\nThe merged array is shown below:\n";
    for (i = 0; i < MN; i++)
        cout << C[i] << " ";
    cout << endl;
    getch();
	}

void Merge(int A[],int M,int B[],int N,int C[])
	{
    int a, b, c;
    for (a = 0, b = N - 1, c = 0; a < M && b >= 0;)
        if (A[a] <= B[b])
            C[c++] = A[a++];
        else
            C[c++] = B[b--];
    if (a < M)
        while (a < M)
            C[c++] = A[a++];
    else
        while (b >= 0)
            C[c++] = B[b--];
	}
