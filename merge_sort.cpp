#include <iostream>
using namespace std;
void Merge_Function(int *arr1, int lowest_element, int highest_element, int middle_element)
{
	int x, z, y, temporary[highest_element-lowest_element+1];
	x = lowest_element;
	y = 0;
	z = middle_element + 1;
	while (x <= middle_element && z <= highest_element)
	{
		if (arr1[x] < arr1[z])
		{
			temporary[y] = arr1[x];
			y++;
			x++;
		}
		else
		{
			temporary[y] = arr1[z];
			y++;
			z++;
		}
	}
	while (x <= middle_element)
	{
		temporary[y] = arr1[x];
		y++;
		x++;
	}
	while (z <= highest_element)
	{
		temporary[y] = arr1[z];
		y++;
		z++;
	}
	for (x = lowest_element; x <= highest_element; x++)
	{
		arr1[x] = temporary[x-lowest_element];
	}
}
void Merge_Sort_Function(int *arr1, int lowest_element, int highest_element)
{
	int middle_element;
	if (lowest_element < highest_element)
	{
		middle_element=(lowest_element+highest_element)/2;
		Merge_Sort_Function(arr1, lowest_element, middle_element);
		Merge_Sort_Function(arr1, middle_element+1, highest_element);
		Merge_Function(arr1, lowest_element, highest_element, middle_element);
	}
}

int main()
{
    int arr1[]={4,1,10,7,45,23,9,57,5,65};
    int total_size_of_arr1=sizeof(arr1)/sizeof(arr1[0]);
	Merge_Sort_Function(arr1, 0, total_size_of_arr1-1);
	cout<<"\nSorted Elements: ";
	for (int x = 0; x < total_size_of_arr1; x++)
        cout<<arr1[x]<<" ";
	return 0;

}
