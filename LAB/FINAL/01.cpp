#include <iostream>
using namespace std;

class ManchesterUnited {
    private:
        int coach;
        int player;
    public:
        ManchesterUnited() {
            coach = 0;
            player = 0;
        }
        void getData() {
            cout << "Coach: " << coach << endl;
            cout << "Player: " << player << endl;
        }
        ManchesterUnited operator++() {
            coach++;
            player++;
            return *this;
        }
};

int main() {
    ManchesterUnited ronaldo;
    ManchesterUnited fernandes;
    ronaldo.getData();
    fernandes.getData();
    ronaldo++;
    cout << "After incrementing Ronaldo by one:" << endl;
    ronaldo.getData();
    cout << "Before incrementing Ronaldo, Ronaldo is less than Fernandes: " << ((ronaldo.coach + ronaldo.player) < (fernandes.coach + fernandes.player)) << endl;
    ronaldo++;
    cout << "After incrementing Ronaldo by one:" << endl;
    ronaldo.getData();
    cout << "After incrementing Ronaldo, Ronaldo is less than Fernandes: " << ((ronaldo.coach + ronaldo.player) < (fernandes.coach + fernandes.player)) << endl;
    return 0;
}
