// 这里我改一下题目，基于8.4来做，将结果转存到一个新文件两边

#include <iostream>
#include <vector>
#include <fstream>
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::ifstream;
using std::ofstream;


// 这里要注意形参是引用类型，因为需要向strvec中写入数据
int ReadFileToVector(vector<string> &strvec, string file_path)
{
    ifstream in(file_path);
    if (!in) {
        return -1;
    }
    string line;
    while (getline(in, line)) {
        strvec.push_back(line);
    }
    return 0;
}

int AppendVectorToNewFile(vector<string> strvec, string file_path)
{
    ofstream out(file_path, ofstream::app);
    if (!out) {
        return -1;
    }
    auto beg = strvec.begin();
    auto end = strvec.end();
    while (beg != end) {
        out << *beg << "\n";
        beg++;
    }
    return 0;
}

int main()
{
    string src_file_path = "text.txt";
    string dst_file_path = "text2.txt";
    vector<string> strvec;
    ReadFileToVector(strvec, src_file_path);
    AppendVectorToNewFile(strvec, dst_file_path);
    AppendVectorToNewFile(strvec, dst_file_path);
}