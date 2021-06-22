#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
	int sub, marks;
	float tot=0, per;

	string tots;	
	//Input number of subjects
	std::cout<<"Enter the number of subjects:";
	std::cin>>sub;
	
	//Input name of subkect regarding to the number of subjects
	string subname[sub];
	for(int i=1;i<=sub;i++)
	{
	std::cout<<"Enter the name of the Subject number "<<i<<":";
	std::cin>>subname[i];
	tots=subname[i];
	}


	
	//Input Marks
	for(int i=1;i<=sub;++i)
	{
	std::cout<<"Enter the mark of "<< subname[i]<<"subject:";
	std::cin>> marks;
			tot+=marks;
				per=tot/sub;
	}
	
	std::cout<<"The total marks is "<<tot<<endl;
	
	std::cout<<"The Percentage of the total mark is "<<per;
	return 0;
}
