#ifndef API_FOR_YBC_H
#define API_FOR_YBC_H

#include <string>
#include <vector>

struct DiaryInformation{
    int id;                             //日记唯一编号
    int popularity;                     // 日记热度(即浏览量)
    double score;                         //日记评分
    std::string title;
    std::string author;
    std::string abstract;               //日记的前30个字
    std::string publication_time;       //发布时间
    std::string publication_position;   //发表位置<即所对应景区的名称>
};

struct DiaryReadDetail{
    std::string body;       //日记正文
};

struct DiaryWriteDetail{
    std::string title;
    std::string author;
    std::string body;       //日记正文
    std::string publication_position;
    std::string publication_time;
};

bool _login(std::string username, std::string password);
bool _regist(std::string username, std::string password);
void _log_off();
void _set_diary_score(int id, int score);
std::string _get_current_user();
std::vector<DiaryInformation> _get_result_of_searching_diary(std::string keyword, int search_type, int sort_type); // 有多少返回多少
DiaryReadDetail _get_diary_full_text(int id);
void _wirte_diary(DiaryWriteDetail d);



#endif
