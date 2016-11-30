#include <iostream>
#include <fstream>
using namespace std;int main(){ifstream b("a.txt");string a="";while(b.good()){string c;getline(b,c);c+="\n";a+=c;}cout<<a<<endl;}