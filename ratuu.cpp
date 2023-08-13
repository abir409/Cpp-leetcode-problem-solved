#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int n;
    cin>>n;
    string h;
    vector<string>vec;
    int i;
    for(i=0;i<h.length();i++)
    {
        cin>>h;
        vec.push_back(h);

    }
    vec.insert(vec.end(),5);

    for(i=vec.begin(); i<vec.end(); i++)
	{
		cout<<" "<<vec[i];
	}
	return 0;

}
