#include<iostream>
#include<fstream>
#include<iostream>

int main()
{
    using namespace std;
    cout << "Enter the number of students: ";
    int n;
    cin >> n;
    string names;
    string *ps = new string[n];
    ofstream file("cppfile.txt", ios_base::out);
    cout << "Enter names: " << endl;
    for (int i=0; i<n; i++)
{
    cin >> ps[i];
    cout << endl;
}
for (int i = 0; i < n; i++)
file << ps[i] << endl;
file.close();
delete [] ps;
return 0;
}
