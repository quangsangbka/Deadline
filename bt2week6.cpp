#include<iostream>
#include<vector>
#include<string>

using namespace std;
 
 struct Student 

 {
     char name[30];
     float tongDiem;
 };

 void nhap(vector <Student> &a, int i)
{
    fflush(stdin);
    cout << "Nhap ten thi sinh: "; getline (cin, a[i].name);
 
 void nhapds(int *SV, int n)
 {
     for (i=1; i<=n; i++)
     {
         cout << "Thi sinh thu: " << i;
         cin >> SV[i];
     }
 }

// Hoán vị 2 biến cấu trúc
 void hv(char &name, float &tongDiem)
 {
     char tg = name; name = tongDiem; tongDiem = tg;
 }

 // Sắp xếp thí sinh theo thứ tự giảm dần của tổng điểm 
 void sap_xep_diem(vector <Student> &a, int n)
 {
     for (int i=0; i<n; i++)
     {
         for (int j=0; j<n; j++)
         {
             if (a[i].tongDiem < a[j].tongDiem)
             {
                a[n] = a[i];
                a[i] = a[j];
                a[j] = a[n];
             }
         }
     }
     cout << "Thi sinh theo day giam dan: \n";
     for (int i=0; i<n; i++)
     {
         cout << a[i].name << endl;
     }
 }
 int main()
 {
     vector <Student> a;
     int n;
     cout << "Nhap n: "; cin >> n;
     a.resize(n+1);
     for (int i=0; i<n; i++)
     {
         cout << "Thi sinh" << i+1 <<":" << endl;
         nhapds(a, i);
     }
     sap_xep_diem(a, n);
 }
