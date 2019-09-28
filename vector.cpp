#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int>myarr;
	int fill=0;;

	while(fill!=10)
	{
		myarr.push_back(fill);
		++fill;

	}
	cout<<"your interger are"<<endl;

    for(vector <int>::size_type j=0;j != 10;++j)
	{
		cout<<myarr[j]<<" ";
	}
  cout<< endl;
  return 0;
}
