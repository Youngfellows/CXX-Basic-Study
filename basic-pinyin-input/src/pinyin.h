
#ifndef PINYIN_H
#define PINYIN_H

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<unordered_map>
#include<set>
#include <algorithm>
#include<iomanip>
#include<cassert>

using namespace std;

class info
{
	public:
		vector<string> candidate_word_table;
		info() {}
		info(string s)
		{
			cout << "info=" << s << endl;
			//assert(s.length() % 2 == 0);
			if (s.length() % 2 == 0)
			{
				return;
			}
			//cout << s << endl;
			while (!s.empty() && s.length() >= 2)
			{
				cout << "111111,length = " << s.length() << endl;
				candidate_word_table.push_back(s.substr(0, 2));
				s.erase(0, 2);
				cout << "22222,length = " << s.length() << endl;
				cout << "s,,s=" << s << endl;
				if (!s.empty() && s.length() < 2)
				{
					cout << "break ..." << endl;
					break;
				}else if (s.empty())
				{
					cout << "break null ..." << endl;
					break;
				}
				
			}
			cout << "33333,s=" << s << endl;
		}
};

typedef unordered_map<string, info> hmap;

hmap syllabary;
set<string> word_book;
set<string> user_word_book;
string sentence;//用于接受输入的文本

/**
 * @brief 读词库 音节表 用户词库
 * 
 */
void read_file();

/**
 * @brief 根据最大匹配原则 拆分用户输入的音节
 * 
 * @param input_s 
 * @param syl_seq 
 * @param syl_it 
 */
void syllable_partition(string input_s, vector<string> &syl_seq, vector<hmap::iterator> &syl_it);

/**
 * @brief 根据候选词表 得到用户选择 参数为候选词表 返回用户选择的词
 * 
 * @param Candidate 
 * @return int 
 */
int choose(vector<string> &Candidate);

/**
 * @brief 
 * 
 * @param i 根据拼音序列和词表 判断当前匹配位置向后可能构成的词 并加入候选词表
 * @param syl_seq 
 * @param syl_it 
 * @param Candidate 
 * @param word_book 
 */
void match_word(int i, vector<string> &syl_seq, vector<hmap::iterator> &syl_it, vector<string> &Candidate, set<string> &word_book);

/**
 * @brief 选择是否 保存用户词库 保存输入内容
 * 
 */
void save();				

#endif