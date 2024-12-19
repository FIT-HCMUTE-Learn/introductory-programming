#include <bits/stdc++.h>

using namespace std ;
void input(int &n, int pattern[]);
int search(int n, int pattern[]);
void output(int answer);

int main ()
{
	int n ;
	int arr[99999];
	input(n, arr);
	int answer = search(n,arr);
	output(answer);
	return 0 ;
}
void input(int &n, int pattern[])
{
	cin >> n ;
	for (int i = 0; i<n; i++)
		cin >> pattern[i];
}
int search(int n, int pattern[])
{
	int max = 0;
	for (int i = 0 ; i<n; i++)
		if (pattern[i] * 1 < 0)
		{
			max = pattern[i];
			break;
		}
	for (int i = 0 ; i<n; i++)
		if (pattern[i] * 1 < 0 && max < pattern[i])
			max = pattern[i]; 
	return max;		
}
void output(int answer)
{
	if (answer != 0)
		cout << answer;
	else 
		cout << "No result";
}
