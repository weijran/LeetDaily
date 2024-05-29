#include "api_for_djh.h"

std::vector<Destination> _get_recomand_30()
{
    // 返回自动推荐列表，30个，前十个是个性化推荐榜前十名，中十个是热度榜前十名，后十个是综合榜前十名。
    // 以下是前端测试代码，请忽略。
    std::vector<Destination> v;

    v.push_back(Destination{1234, "吃瓜会堂",165,2});
    v.push_back(Destination{1234, "南瓜西站", 1045, 8});
    v.push_back(Destination{1234, "冬瓜村", 123, 9});
    v.push_back(Destination{1234, "呱呱呱", 6543, 5});
    v.push_back(Destination{1234, "小瓜田", 54, 3});
    v.push_back(Destination{1234, "吃瓜会堂",165,2});
    v.push_back(Destination{1234, "南瓜西站", 1045, 8});
    v.push_back(Destination{1234, "冬瓜村", 123, 9});
    v.push_back(Destination{1234, "呱呱呱", 6543, 5});
    v.push_back(Destination{1234, "小瓜田", 54, 3});

    v.push_back(Destination{1234, "吃瓜会堂",165,2});
    v.push_back(Destination{1234, "南瓜西站", 1045, 8});
    v.push_back(Destination{1234, "冬瓜村", 123, 9});
    v.push_back(Destination{1234, "呱呱呱", 6543, 5});
    v.push_back(Destination{1234, "小瓜田", 54, 3});
    v.push_back(Destination{1234, "吃瓜会堂",165,2});
    v.push_back(Destination{1234, "南瓜西站", 1045, 8});
    v.push_back(Destination{1234, "冬瓜村", 123, 9});
    v.push_back(Destination{1234, "呱呱呱", 6543, 5});
    v.push_back(Destination{1234, "小瓜田", 54, 3});

    v.push_back(Destination{1234, "吃瓜会堂",165,2});
    v.push_back(Destination{1234, "南瓜西站", 1045, 8});
    v.push_back(Destination{1234, "冬瓜村", 123, 9});
    v.push_back(Destination{1234, "呱呱呱", 6543, 5});
    v.push_back(Destination{1234, "小瓜田", 54, 3});
    v.push_back(Destination{1234, "吃瓜会堂",165,2});
    v.push_back(Destination{1234, "南瓜西站", 1045, 8});
    v.push_back(Destination{1234, "冬瓜村", 123, 9});
    v.push_back(Destination{1234, "呱呱呱", 6543, 5});
    v.push_back(Destination{1234, "小瓜田", 54, 3});
    return v;
}


std::vector<BuildingInfomation> _get_all_building_of(int id)
{
    // 选定名为position的地方作为游学目的地。
    // 返回景点名为Position的那个景点的全部建筑的信息。
    // 以下是前端测试代码，请忽略。
    std::vector<BuildingInfomation> s;
    // 建筑信息
    s.push_back(BuildingInfomation{1000001,Point{95,194},"建筑1", FacilityType::GATE});
    s.push_back(BuildingInfomation{1000002,Point{433,432},"建筑2",  FacilityType::NORMALBUILDING});
    s.push_back(BuildingInfomation{1000003,Point{322,194},"建筑3", FacilityType::NORMALBUILDING});
    s.push_back(BuildingInfomation{1000004,Point{95,321},"建筑4",  FacilityType::NORMALBUILDING});
    return s;
}

std::vector<Destination> _get_result_of_searching_destination(std::string keyword, int searchType, int sortType)
{
    // 返回用户选择目的地时，手动输入keyword后的搜索结果。
    // searchType:0名称 1类别 2关键字
    // sortType:0按热度 1按评价
    // 以下是前端测试代码，请忽略。
    std::vector<Destination> v;
    if (keyword == "1")
        return v;

    v.push_back(Destination{0, "北京邮电大学",165,2});
    v.push_back(Destination{1, "清华大学", 1045, 8});
    v.push_back(Destination{2, "北京大学", 123, 9});
    v.push_back(Destination{3, "故宫博物院", 6543, 5});
    v.push_back(Destination{4, "长城", 54, 3});
    v.push_back(Destination{5, "吃瓜会堂",165,2});
    v.push_back(Destination{6, "南瓜西站", 1045, 8});
    return v;
}


RoutePlanResult _get_shortest_route_by(std::vector<int> must_pass_building, int vehicle_type)
{
    // 返回最短路。
    // 以下是前端测试代码，请忽略。
    Route min_time_route;

    min_time_route.total_distance = 10099;
    min_time_route.total_time = 87;
    min_time_route.wayline.push_back(Point{95, 194});
    min_time_route.wayline.push_back(Point{472, 283});
    min_time_route.wayline.push_back(Point{247, 541});

    Route min_distance_route;
    min_distance_route.total_distance = 3849;
    min_distance_route.total_time = 838;
    min_distance_route.wayline.push_back(Point{95, 194});
    min_distance_route.wayline.push_back(Point{283, 472});
    min_distance_route.wayline.push_back(Point{247, 541});

    RoutePlanResult ans;
    ans.min_distance_route = min_distance_route;
    ans.min_time_route = min_time_route;
    return ans;
}


std::vector<FacilityInfomation> _get_facility_near_by(int building_id, int select_type)
{
    // 返回编号为id的建筑的周围设施，按距离排序。
    // 筛选类型如果是0代表全部，其余就是FacilityType枚举值+1。例如select_type==1代表筛选“商店”
    // 以下是前端测试代码，请忽略。
    std::vector<FacilityInfomation> ans;
    switch (select_type){
        case 0:
            ans.push_back(FacilityInfomation{123,"空中餐厅",FacilityType::RESTAURANT, 128, Point{203, 253}});
            ans.push_back(FacilityInfomation{234,"24h便利店",FacilityType::CONVENIENCE_STORE, 200, Point{463, 127}});
            ans.push_back(FacilityInfomation{345,"卫生间01",FacilityType::TOILET, 230, Point{545,346}});
            ans.push_back(FacilityInfomation{456,"卫生间02",FacilityType::TOILET,  469, Point{345,543}});
            break;

        case 1:
            ans.push_back(FacilityInfomation{234,"24h便利店",FacilityType::CONVENIENCE_STORE, 200, Point{463, 127}});
            break;
        case 2:
            ans.push_back(FacilityInfomation{123,"空中餐厅",FacilityType::RESTAURANT, 128, Point{203, 253}});
            break;

        case 3:
            ans.push_back(FacilityInfomation{345,"卫生间01",FacilityType::TOILET, 230, Point{545,346}});
            ans.push_back(FacilityInfomation{456,"卫生间02",FacilityType::TOILET,  469, Point{345,543}});
            break;
    }


    return ans;
}

std::string _get_current_destination()
{
    // 以下是前端测试代码，请忽略。
    return "南瓜西站";
}

void _set_current_position(int buliding_id)
{
    //设置起点
}

int _get_map_name(int id)
{
    return 2;
}
