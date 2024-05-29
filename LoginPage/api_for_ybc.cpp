# include"api_for_ybc.h"


bool _login(std::string username, std::string password)
{
    // 此函数需要返回登录信息是否正确。如果正确，那么登录。
    // 以下是前端测试代码，请忽略。
    return true;
    if (username == "w" && password == "0")
        return true;
    else
        return false;
}

bool _regist(std::string username, std::string password)
{
    // 返回注册信息是否正确。注册成功后并不自动登录。
    // 以下是前端测试代码，请忽略。
    return true;
}


void _log_off()
{
    // 进行用户的登出。
}

void _set_diary_score(int id, int score)
{
    // 对编号为id的那篇日记进行评分。
}

std::string _get_current_user()
{
    // 返回目前登录的用户的用户名。
    return "小明";
}

std::vector<DiaryInformation> _get_result_of_searching_diary(std::string keyword, int search_type, int sort_type)
{
    // keyword为空时，后search_type这个参数没有意义（代表用户刚刚点开日记列表），但要按照sort_type来排序。
    // searchType：0日记标题 1日记内容 2目的地
    // sortType： 0按热度 1按评价 2按兴趣
    // 以下是前端测试代码，请忽略。
    std::vector<DiaryInformation> ans;
    if (keyword == "1")
        return ans;
    DiaryInformation dl1;
    dl1.id = 1000;
    dl1.abstract = "这是用户写的日记的前三十字，例如内容可以是我在西瓜农场度过了美好的一天啊";
    dl1.author = "小明";
    dl1.popularity = 1099;
    dl1.score = 9;
    dl1.publication_position = "西瓜农场";
    dl1.publication_time = "2024-1-1";
    dl1.title = "日记标题";
    ans.push_back(dl1);
    ans.push_back(dl1);
    ans.push_back(dl1);
    ans.push_back(dl1);
    ans.push_back(dl1);
    ans.push_back(dl1);
    ans.push_back(dl1);
    ans.push_back(dl1);
    ans.push_back(dl1);
    ans.push_back(dl1);
    return ans;
}
DiaryReadDetail _get_diary_full_text(int id)
{
    // 返回日记的编号为id的那篇日记的标题和全文。
    // 以下是前端测试代码，请忽略。
    DiaryReadDetail ans;
    ans.body = "前天下雪了。鹅毛大雪飞啊飞啊，我看着窗外的景色，顿时感到好兴奋——“我又可以玩雪了!”我想这种心情与想法一定会在每个小孩的心中\
                产生。可是我又想想，又发出了另一种感慨……雨和雪都是水变成的，可是为什么大多数人们总是更喜欢雪呢?我想雪与水象征2个事物，虽然\
                它们的类型相同，但是它们的立场与角度不同，所以导致人对只不同的感受与感情。比如雨和雪都是一句希望别人上进的话，雨呢，而是一句\
                批评的话，雪呢，而是一句赞扬的话。这2句话都可以使人上进，但是人们愿意接纳赞扬的话，不太喜欢批评的话。这就是之间的差异。下面我\
                们就用雨和雪本身来说明。雨呢大多人都讨厌，因为它可以使热闹浑身湿透，虽然雪也可以，但是雪用了另一中方法:变成的固体。这就是雪的巧\
                妙之处，当然，这也是它们之间存在差异的原因。";
    return ans;
}

void _wirte_diary(DiaryWriteDetail d)
{
    // 后端做存储
}

