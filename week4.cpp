// Bai 1

#include<iostream>
#include<stdio.h>

using namespace std;

int main() 
{
    int N;
    cout << "Nhap so luong phan tu " ; cin >>N;
    int *x = new int [N];
    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
    }
    cout << "Hien thi: " << endl;
    for (int i  = N-1; i >= 0; i--)
    {
        cout << x[i] << " ";
    }
    return 0;
}


// Bai 2

#include<stdio.h>
#include<string.h>

int main()
{
    int N = 0;
    float x[N];
    do{
        
        scanf("%f", &x[N]);
        N++;

    }
    while(sizeof(x[N]) == 4);
    return 0;
}


// Bai 3

#include<stdio.h>
#include<iostream>
#include<string>
using namespace std ;
int main()
{
	string a , b ;
	getline(cin , a );
	b=a ;
	cout << "\n" <<b;
	return 0 ;
}


// Bai 4

#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std ; 
int main()
{
	char a[100] , b[100];
	gets(a);
	gets(b);
	if(strcmp(a,b)==0)
	{
		cout << " Hai chuoi giong nhau";
		
	}else
	{
		cout << "Hai chuoi khong giong nhau" ;
	}
	return 0;
}


// Bai 5

#include<stdio.h>
#include<string.h>
#include<ctype.h>
 int main()
 {
 	char str[] ="heloo word" ;
 	char s[100][100];
 	int i , n=0  , count = 0 ;
 	for(int i= 0 ;i<strlen(str) ; i++)
 	{
 		if(str[i] == ' ' && str[i+1] != ' ')
 		{
 			strncpy(s[count] ,str , i);
 			strcpy(&str[0] , &str[i+1]);
 			count ++ ;
 			i =0 ;
		 }
	 }
	 strcpy(s[count] , str);
	 for(int i = 0 ;i<=count ; i++)
	 {
	 	puts(s[i]);
	 }
	 return 0 ;
 }
 

// Bai 6

#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
	float arr1[] = {1,2 ,4} ;
	float arr2[] = {2 ,3 ,4};
	float arr3[10];
	int n , i , j;
	for(i =0 ; i<3 ; i++)
	{
		arr3[i] = arr1[i];
	}
	for(i=3 ; i<6 ; i++)
	{
		arr3[i]=arr2[i-3];
	}
	for(i=0 ; i <5 ; i++)
	{
		for(j=i+1 ; j<6 ; j++)
		{
			if(arr3[i] > arr3[j])
			{
				n=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=n;
			}
		}
	}
	for(i=0 ; i<6 ; i++)
	{
		printf("%5.1f" , arr3[i]);
	}
	return 0 ;
}
