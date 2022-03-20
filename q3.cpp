//Count the number of words that start with 'e'?//Abhishek sahu

//Abhishek sahu








#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream input;
	string str;
	int count=0;

	input.open("demo.text", ios::in|ios::out);

	input << "Count the number of words that start with 'e'?" << endl;
	

	input.seekg(0);

	while(input >> str)
	{
		if(str[0] == 'e')
		{
			count++;
		}
		else
			continue;
	}

	cout << "the number of words that start with 'e' are: " << count << endl;

	return 0;
}
