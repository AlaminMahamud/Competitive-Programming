/// code from online


#include <iostream>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

// checking whether the method is number
// const why i don't know

bool is_number(const string &s)
{
	if(s[0] >= '0' && s[0] <='9')
		return true;
	return false;
}

/// string2int self explanatory
/// const why i don't know
/// result = result*10 for decimal numbers like 15, 1001, ...

int string2int(const string &s)
{
	int result = 0;

	for(int i=0 , sz = s.size(); i<sz ; i++)
	{
		result = result*10 + (s[i]-'0');
	}

	return result;
}


/// most important part
/// for processing current word
/// current word, words, special characters

void process_current_word(string& current_word, list<string> &words, char c)
{
	list<string>::iterator it;

	if(current_word.empty())
		cout<<c;
	else{
		if(is_number(current_word)){
			int pos = string2int(current_word);
			it = words.begin();
			advance(it,pos-1);
			cout << *it;
			current_word = *it;
			words.erase(it);
			words.push_front(current_word);
		}else{
			cout << current_word;
			words.push_front(current_word);
		}
		cout << c;
		current_word = "";
	}
}

/// main method calling process_current_word

int main(void)
{
	string input, current_word;
	list<string> words;
	list<string>::iterator it;

	while(getline(cin, input))
	{
		if(input == "0")
			break;

		current_word = "";

		for (int i = 0, sz = input.size(); i < sz; i++)
		{
			if((input[i] >='a' && input[i] <= 'z') || ( input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= '0' && input[i] <= '9'))
			{
				current_word += input[i];
			}else
			{
				process_current_word(current_word, words, input[i]);
			}
		}

		process_current_word(current_word, words, '\n');
	}

	return 0;
}

