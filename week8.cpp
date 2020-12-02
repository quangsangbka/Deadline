#include<iostream>

using namespace std;

struct TS
{
    char ht[25];
    float t, l, h, td;

};

TS ts;
TS& f()
{
    return ts;

}
int main ()
{
    TS& h = f(); // h tham chieu den bien ts
    cout <<  "\nHo ten = ";
    cin.get(h.ht, 25);
    cout << "Cac diem toan ly hoa: ";
    cin >> h.t >> h.l >> h.h;
    h.td = h.t + h.l + h.h;
    cout << "\nHo ten = " << ts.ht << " " << h.ht;
    cout << "\nTong diem = " << ts.td << " " << f().td;
}
