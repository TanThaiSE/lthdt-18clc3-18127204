#pragma once

#include"DynamicArray.h"
class Tokenizer
{
public:
	static vector<string> Parse(string line, string seperator)
	{
		vector<string> tokens;
		int startpos = 0; // vị trí bắt đầu tìm
		size_t foundpos = line.find(seperator, startpos); 
		while (foundpos != string::npos)	//vẫn còn tìm thấy
		{
			int count = foundpos - startpos;
			string token = line.substr(startpos, count);
			tokens.push_back(token);

			//cập nhập lại vị trí bắt đầu tìm lại
			startpos = foundpos + seperator.length();

			//tiếp tục tìm
			foundpos = line.find(seperator, startpos);
		}

		//phần còn sót lại chính là phần tử cuối
		int count = line.length() - startpos;
		string token = line.substr(startpos, count);
		tokens.push_back(token);
		return tokens;
	}
};