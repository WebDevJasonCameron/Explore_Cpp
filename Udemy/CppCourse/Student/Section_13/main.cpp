#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
    // ATTs
    string name;
    int health{};
    int xp{};


    // METHs
    static void talk(string msg){
        cout << msg << endl;
    }
    static bool is_dead(int health){
        return health <= 0;
    }
};

class Account {
    // ATTs
    string name;
    double balance{};

    // METHs
    bool deposit(double amount){
        balance += amount;
        return true;
    }
    bool withdraw(double amount){
        balance -= amount;
        if (balance < 0) {
            return false;
        }
        return true;
    }
};


int main() {

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 100;

    Player hero;
    hero.name = "Hero";
    hero.health = 100;
    hero.xp = 100;

    auto *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 25;
    (*enemy).xp = 25;

    vector<Player> player_vec {frank};
    player_vec.push_back(hero);
    player_vec.push_back(*enemy);

    for (const auto& player : player_vec) {
        cout << player.name << endl;
        cout << player.health << endl;
        cout << player.xp << endl;
        Player::talk("Hello World!");
    }

    enemy->talk("I will destroy you!");

    delete enemy;
    return 0;
}
