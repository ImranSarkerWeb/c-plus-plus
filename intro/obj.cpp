#include <bits/stdc++.h>
using namespace std;

class District
{
public:
    char name[100];
    double area;
    int population;
    int thana;

    District(double ar, int pup, int th, char *nm)
    {

        area = ar;
        population = pup;
        thana = th;
        strcpy(name, nm);
    }
};
int main()
{
    District ctg(354658.7854, 78750000, 15, "Chattagram");

    cout << ctg.population;

    return 0;
}