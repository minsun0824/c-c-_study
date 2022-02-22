#include <iostream>
#include <map>
#include <vector>

using namespace std;

template<typename T>
void print(const T& t)
{
    vector<T>::iterator iter = t.begin();
    cout << "Super League 1 Ranking:\n";
    for (iter;iter != t.end();iter++) {
        cout << iter->first << ": " << iter->second<< endl;
    }
}

int main()
{
    // Way I:
    /*
    map<int, string> t_map {
        {1, "Olympiakos"}, {2, "Skoda Xanthi"}, {3, "PAOK"}, {4, "OFI"},
        {5, "AEK"}, {6, "NPS Volos"}, {7, "AEL"}, {8, "Aris"}, {9, "Atromitos"},
        {10, "Panathinaikos"}, {11, "Asteras Tripolis"}, {12, "PAS Lamias"}, {13, "Panetolikos"}, {14, "Panionios"}
    };
    */

    // Way II:
    vector<string> teams{ "Olympiakos", "Skoda Xanthi", "PAOK", "OFI", "AEK", "NPS Volos",
                           "AEL", "Aris", "Atromitos", "Panathinaikos", "Asteras Tripolis",
                           "PAS Lamias", "Panetolikos", "Panionios" };

    map<int, string> t_map{};
    for (int i = 0; i < teams.size(); i++)
        t_map.insert(pair<int, string>(i + 1, teams[i]));

    print(t_map);

    // Delete a few teams:
    cout << endl;
    for (size_t i = 4; i < 10; i++)
        t_map.erase(i);
    print(t_map);


    return 0;
}