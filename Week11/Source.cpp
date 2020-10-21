#include<iostream>
using namespace std;
int stringlen(char* ptr);
void compareString(char* a, char* b);

int main()
{
	char a[999];
	char b[999];
	cout << "Enter Password: \t";
	cin.getline(a, 999);
	cout << "Re-Enter Password: \t";
	cin.getline(b, 999);
	compareString(&a[0], &b[0]);
	
	return 0;
}

int stringlen(char* ptr)
{
	int a=0;
	while (ptr[a] != '\0')
	{
		a++;
	}
	return a;
}

void compareString(char* a, char* b)
{
	int na = stringlen(&a[0]);
	int nb = stringlen(&b[0]);
	int c = 0, i = 0;
	if (na == nb)
	{
		for (i = 0; i < na; i++)
		{
			if (a[i] == b[i])
				c++;
		}
	}
	if (c == na)
		cout << "\t\\0|Success|0/";
	else
		cout << "\t\\0|Incorrect|0/";
}