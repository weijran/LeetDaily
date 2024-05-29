#ifndef API_FOR_DJH_H
#define API_FOR_DJH_H

#include <string>
#include <vector>

//  查询设施时只会查询前11个。最后两个是我加的，具体用法见_get_all_building_of函数。
enum FacilityType {
    SHOP,
    SUPERMARKET,
    CONVENIENCE_STORE,
    BOOKSTORE,
    RESTAURANT,
    CANTEEN,
    CAFE,
    MILKTEA,
    TOILET,
    REST_AREA,
    LIBRARY,
    NORMALBUILDING,
    GATE
};

enum LocationType {
    SCHOOL,
    PARK,
    WATERFALL,
    SHOPPING_STREET,
    HISTORIC_SITE,
    MUSEUM,
    RESORT,
    AMUSEMENT_PARK,
    PROTECTED_AREA,
    ZOO,
    BOTANICAL_GARDEN,
    TEMPLE,
    SCENIC_AREA,
    SPORTS_GROUND,
    FARM_EXPERIENCE
};

struct Point{
    int x, y;
};

struct BuildingInfomation{
    int id;
    Point coordinates;
    std::string name;
    FacilityType tag; // 作为建筑信息时，该枚举值只会是NORMALBUILDING（普通建筑，图标显示为倒水滴型）或GATE（大门，图标显示为“起点”），没有其他可能。
};

struct Destination{
    int id;
    std::string name;
    int popularity;             // 热度(即浏览量)
    double score;               // 评分
};

struct Route{
    std::vector<Point> wayline; //线路
    int total_distance;
    int total_time;
};

struct RoutePlanResult{
    Route min_time_route;       //最短时间策略下的最短路
    Route min_distance_route;   //最短距离策略下的最短路
};

struct FacilityInfomation{
    int id;                     //暂时没用，但为了可扩展性，故加上
    std::string name;
    FacilityType tag;
    int distance_form_current_building; //距离选定的建筑物的距离
    Point coordinates;
};

std::vector<Destination> _get_recomand_30();
std::vector<BuildingInfomation> _get_all_building_of(int id);
std::vector<Destination> _get_result_of_searching_destination(std::string keyword, int search_type, int sort_type);
RoutePlanResult _get_shortest_route_by(std::vector<int> must_pass_building, int vehicle_type);
std::vector<FacilityInfomation> _get_facility_near_by(int building_id, int select_type);
std::string _get_current_destination();
void _set_current_position(int buliding_id);
int _get_map_name(int id);
#endif
