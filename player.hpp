#include <string>
class Player
{
public:
    Player(std::string, std::string, int, double);
    void set_name(std::string);
    void set_area(std::string);
    void level_up(int);
    void set_exp(double);
    void set_health(double);
    void set_damage();
    std::string get_name();
    std::string get_area();
    int get_level();
    double get_exp();
    double get_exp_req();
    double get_health();
    double get_max_health();
    int get_damage();
private:
    std::string mc_name;
    std::string mc_area;
    int mc_level;
    double mc_exp;
    double mc_exp_req;
    double mc_health;
    double mc_max_health;
    double mc_damage;
};