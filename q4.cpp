  

//Count the number of words that end with 's'?
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

	input << "Count the number of words that end with 's'?" << endl;
	

	input.seekg(0);

	while(input >> str)
	{

		int l = str.length() - 1;
		

		if(str[l] == 's')
		{
			
			count++;
		}
		else if(str[l] == ',')
		{
			if(str[l-1] == 's')
			{
				
				count++;
			}
			else
				continue;
		}
		else
			continue;
	}

	cout << "the number of words that ends with 's' are: " << count << endl;

	return 0;
}
