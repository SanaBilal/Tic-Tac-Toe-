#include <iostream>
using namespace std;

class Set
{	private:
	int *elements;
	int size;
	public:
	Set();
	Set(int);
	void input();
	void output();
	void intersection(Set,Set);
	~Set();
};
Set::Set()
{	elements=0;
	size=0;
}
Set::Set(int a)
{	elements=new int [a];
	size=a;
}

void Set::input()
{	cout<<"enter size"<<endl;
	cin>>size;
	elements=new int[size];
	for(int i=0;i<size;i++)
	{	cin>>elements[i];
	}
}
void Set::output()
{	for(int i=0;i<size;i++)
	{	cout<<elements[i]<<" ";
	}
}
void Set::intersection(Set S1,Set S2)
{	int count=0;
	for(int i=0;i<S1.size;i++)
	{	for(int j=0;j<S2.size;j++)
		{	if(S1.elements[i]==S2.elements[j])
			{	count++;
			}
		}
	}
	elements=new int[count];
	size=count;
	int a=0;
	for(int i=0;i<S1.size;i++)
	{	for(int j=0;j<S2.size;j++)
		{	if(S1.elements[i]==S2.elements[j])
			{	elements[a]=S1.elements[i];
				a++;
			}
		}
	}
}
Set::~Set()
{	if(elements!=0)
	{	delete[]elements;
	}
}
int main()
{	Set S1;
	Set S2;
	Set S;
	//Set S2(5);
	S1.input();
	S2.input();
	S.intersection(S1,S2);
	S.output();
	~S1;
	//S1.output();
	//cout<<endl;
	//S2.output();
}
