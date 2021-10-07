#include <bits/stdc++.h>

using namespace std;

struct Stack{
	int data;
	struct Stack* link;
};

struct Stack* top;



void push(int data)
{
	struct Stack* temp;
	temp = new Stack();
	
	
	temp->data = data;
	temp->link = top;
	top = temp;
}
void pop()
{
	struct Stack* temp;
	if(top == NULL)
	{
		cout<"stack is empty";
	}
	else
	{
		temp = top;
		top = top->link;
		
		temp->link = NULL;
		free(temp);
	}
	
}

void display()
{
	struct Stack* temp;
	
	if(top == NULL)
	{
		cout<<"\nstack is empty";
	}
	else
	{
		temp = top;
		while(temp != NULL)
		{
			cout<<temp->data<<"->";
			temp = temp->link;
		}
		if(temp == NULL)
		{
			cout<<"NuLL";
		}
	}
	
}
int main()
{
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	pop();
	
	
	
	display();
	
}

