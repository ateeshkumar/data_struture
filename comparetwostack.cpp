
#include <bits/stdc++.h>
using namespace std;
bool isSameStack(stack<string> stack1, stack<string> stack2)
{
	bool flag = true;
	if (stack1.size() != stack2.size()) {
		flag = false;
		return flag;
	}
	while (stack1.empty() == false) {
		if (stack1.top() == stack2.top()) {
			stack1.pop();
			stack2.pop();
		}
		else {
			flag = false;
			break;
		}
	}
	return flag;
}
int main()
{
	stack<string> stack1;
	stack<string> stack2;
	stack1.push("Geeks");
	stack1.push("4");
	stack1.push("Geeks");
	stack1.push("Welcomes");
	stack1.push("You");

	stack2.push("Geeks");
	stack2.push("4");
	stack2.push("Geeks");
	stack2.push("Welcomes");
	stack2.push("you");

	if (isSameStack(stack1, stack2))
		cout << "Stacks are Same";
	else
		cout << "Stacks are not Same";

	return 0;
}

