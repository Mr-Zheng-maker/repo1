#include<iostream>
using namespace std;
void judge(int *arr, int n, int soc)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	/*for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}*/
	int index = 0;
	for (int i = 50; i >=0 ; i--)
	{
		if (arr[i] == soc)
		{
			index = 50-i;
			break;
		}
		
	}
	if (index < 5)
		cout << "A+" << endl;
	if (index >= 5 && index < 15)
		cout << "A0" << endl;
	if (index >= 15 && index < 30)
		cout << "B+" << endl;
	if (index >= 30 && index < 35)
		cout << "B0" << endl;
	if (index >= 35 && index < 45)
		cout << "C+" << endl;
	if (index >= 45 && index < 48)
		cout << "C0" << endl;
	if (index >= 48 && index < 50)
		cout << "F" << endl;
}





int main()
{

	int arr[50] = { 285, 271, 270, 268 ,264 ,251, 237, 236, 228, 227, 226,
		225, 224, 217 ,216, 205, 198, 193, 192, 190, 182 ,168, 165, 161,157, 146, 141, 135,
		127, 126, 122, 114, 105, 81, 80 ,76 ,70, 67 ,63, 59, 55, 44, 34 ,24 ,19 ,14, 9, 5, 2, 1};
	/*for (int i = 0; i < 5; ++i)
	{
		cin >> arr[i];
	}*/
	/*int soc;
	cin >> soc;*/
	judge(arr, 50, 251);
	return 0;
}
