#include <iostream>
using namespace std;


//------------------Sorting Algorithm 1
void InsertionSort(int arr[], int size)
{
	int temp;
	for (int i = 1; i < size; i++)
	{
		int j = i;
		while (j > 0 && arr[j] < arr[j - 1])
		{
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
	
}

void main()
{
  //-------------------Insertion Sort
	//------------------------Data Size 10
	//------------------------Random
	int arr1[10];
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = (rand() % 1000) + 1;
	}

	InsertionSort(arr1, 10);

	//-----------------------Sorted
	int v = 1;
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = v;
		v++;
	}

	
	InsertionSort(arr1, 10);
	
	//-----------------------Reversed
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = v;
		v--;
	}
	
	InsertionSort(arr1, 10);


	//------------------------Data Size 100
	//------------------------Random
	int arr2[100];
	for (int i = 0; i < 100; i++)
	{
		arr2[i] = rand() % 1000 + 1;
	}

	InsertionSort(arr2, 100);

	//-----------------------Sorted
	v = 1;
	for (int i = 0; i < 100; i++)
	{
		arr2[i] = v;
		v++;
	}
	
	InsertionSort(arr2, 100);
	
	//-----------------------Reversed
	for (int i = 0; i < 100; i++)
	{
		arr2[i] = v;
		v--;
	}

	InsertionSort(arr2, 100);



	//------------------------Data Size 1000
	//------------------------Random
	int arr3[1000];
	for (int i = 0; i < 1000; i++)
	{
		arr3[i] = rand() % 1000 + 1;
	}

	InsertionSort(arr3, 1000);

	//--------------------------Sorted
	v = 1;
	for (int i = 0; i < 1000; i++)
	{
		arr3[i] = v;
		v++;
	}

	InsertionSort(arr3, 1000);

	//-------------------------Reversed
	for (int i = 0; i < 1000; i++)
	{
		arr3[i] = v;
		v--;
	}

	InsertionSort(arr3, 1000);



	//------------------------Data Size 10000
	//------------------------Random
	int arr4[10000];
	for (int i = 0; i < 10000; i++)
	{
		arr4[i] = rand() % 1000 + 1;
	}

	InsertionSort(arr4, 10000);

	//------------------------Sorted
	v = 1;
	for (int i = 0; i < 10000; i++)
	{
		arr4[i] = v;
		v++;
	}

	InsertionSort(arr4, 10000);

	//--------------------------Reversed
	for (int i = 0; i < 10000; i++)
	{
		arr4[i] = v;
		v--;
	}

	InsertionSort(arr4, 10000);



	//------------------------Data Size 100000
	//------------------------Random
	int arr5[100000];
	for (int i = 0; i < 100000; i++)
	{
		arr5[i] = rand() % 1000 + 1;
	}

	InsertionSort(arr5, 100000);

	//--------------------------Sorted
	v = 1;
	for (int i = 0; i < 100000; i++)
	{
		arr5[i] = v;
		v++;
	}

	InsertionSort(arr5, 100000);

	//--------------------------Reversed
	for (int i = 0; i < 100000; i++)
	{
		arr5[i] = v;
		v--;
	}

	InsertionSort(arr5, 100000);



	//------------------------Data Size 1000000
	//------------------------Random
	int arr6[1000000];
	for (int i = 0; i < 1000000; i++)
	{
		arr6[i] = rand() % 1000 + 1;
	}

	InsertionSort(arr6, 1000000);

	//------------------------Sorted
	v = 1;
	for (int i = 0; i < 1000000; i++)
	{
		arr6[i] = v;
		v++;
	}

	InsertionSort(arr6, 1000000);

	//-------------------------Reversed
	for (int i = 0; i < 1000000; i++)
	{
		arr6[i] = v;
		v--;
	}

	InsertionSort(arr6, 1000000);

}